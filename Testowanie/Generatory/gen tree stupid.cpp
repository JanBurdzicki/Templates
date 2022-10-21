// Generowanie drzewa w prosty sposob
#include <bits/stdc++.h>
using namespace std;

const int MAX_N = 1e6;

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

	for(int i = 2; i <= n; i++)
	{
		cout << rand(1, i - 1) << " " << i << "\n";
	}

	return 0;
}