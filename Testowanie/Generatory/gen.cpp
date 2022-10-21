// generating a random sequence of distinct elements
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

	srand(atoi(argv[1])); // atoi(s) converts an array of chars to int

	int n = rand(1, MAX_N);

	return 0;
}