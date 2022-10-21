#include <stdio.h>
#include <stdlib.h>
#include <math.h>
#include <assert.h>
#include <stdbool.h>

#define GET_MACRO(_1, _2, _3, _4, NAME, ...) NAME
#define __FOR3(i, a, n, inc) for(int i = (a); (inc) > 0 ? i <= (n) : i >= (n); i += (inc))
#define __FOR2(i, a, n) __FOR3(i, a, n, 1)
#define __FOR1(i, n) __FOR2(i, 0, n - 1)
#define __FOR0(n) __FOR1(_, n)
#define FOR(...) GET_MACRO(__VA_ARGS__, __FOR3, __FOR2, __FOR1, __FOR0)(__VA_ARGS__)

#define SIZE(a) (int) a.size()
#define ALL(a) a.begin(), a.end()
#define RALL(a) a.rbegin() a.rend()
#define TRAV(a, b) for(auto& a : b)
#define REV(a) reverse(ALL(a))

typedef long long LL;
typedef unsigned long long ULL;
typedef long double LD;

const int MAX_N = 1e5 + 5;
const int MOD = 1e9 + 7; // 998244353
const int INF = 1e9 + 5;
const long long LLINF = 1e18 + 5; // lub BIG_INF, nie za blisko LLONG_MAX

#define cat(x) cerr << #x << ": " << x << "\n"

int main()
{

	return 0;
}