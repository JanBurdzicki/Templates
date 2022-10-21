// Generowanie drzewa w madrzejszy sposob
#include <bits/stdc++.h>
using namespace std;

const int MAX_N = 1e6;

struct Krawedz
{
	int a, b;
};

int rand(int a, int b)
{
	return a + rand() % (b - a + 1);
}

int main(int argc, char* argv[])
{
	ios::sync_with_stdio(0);
	cin.tie(0);
	cout.tie(0);

	srand(atoi(argv[1])); // atoi(s) zamiena tablice charow w int

	int n = rand(2, MAX_N);
	cout << n << "\n";

	vector <Krawedz> graf;

	for(int i = 2; i <= n; i++)
	{
		graf.emplace_back(rand(1, i - 1), i);
		// graf.push_back({rand(1, i - 1), i});
	}

	// zmieniamy numery wierzcholkow
	vector <int> permutacja(n + 1);

	for(int i = 1; i <= n; i++)
	{
		permutacja[i] = i;
	}

	// robimy randomizacje numerow wierzcholkow
	random_shuffle(permutacja.begin() + 1, permutacja.end());

	// robimy randomizacje kolejnosci krawedzi
	random_shuffle(graf.begin(), graf.end());

	for(auto& krawedz : graf)
	{
		int a = krawedz.a, b = krawedz.b;

		// robimy randomizacje kolejnosci 2 wierzcholkow, ktore tworza krawedz
		if(rand() % 2)
		{
			swap(a, b);
		}

		cout << permutacja[a] << " " << permutacja[b] << "\n";
	}

	return 0;
}