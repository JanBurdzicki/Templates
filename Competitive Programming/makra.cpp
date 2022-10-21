// Jan Burdzicki
#include <bits/stdc++.h>
using namespace std;
// #include <ext/pb_ds/assoc_container.hpp> // order_of_key
// #include <ext/pb_ds/tree_policy.hpp> // find by order
// #include <ext/pb_ds/priority_queue.hpp>
// #include <ext/pb_ds/hash_policy.hpp>
// using namespace __gnu_pbds;

// template <typename T> using os_set = tree <T, null_type, less <T>, rb_tree_tag, tree_order_statistics_node_update>;

mt19937 rng(chrono::steady_clock::now().time_since_epoch().count());

template <class c>
struct rge
{
	c b, e;
};
template <class c>
rge<c> range(c i, c j) { return rge<c>{i, j}; }
template <class c>
auto dud(c *x) -> decltype(cerr << *x, 0);
template <class c>
char dud(...);
struct debug
{
#ifdef LOCAL
	~debug()
	{
		cerr << endl;
	}

	template <class c>
	typename enable_if<sizeof dud<c>(0) != 1, debug &>::type operator<<(c i)
	{
		cerr << boolalpha << i;
		return *this;
	}
	template <class c>
	typename enable_if<sizeof dud<c>(0) == 1, debug &>::type operator<<(c i)
	{
		return *this << range(begin(i), end(i));
	}

	template <class c, class b>
	debug &operator<<(pair<b, c> d)
	{
		return *this << "(" << d.first << ", " << d.second << ")";
	}
	template <class c>
	debug &operator<<(rge<c> d)
	{
		*this << "[";
		for (auto it = d.b; it != d.e; ++it)
			*this << ", " + 2 * (it == d.b) << *it;
		return *this << "]";
	}

#else
	template <class c>
	debug &operator<<(const c &)
	{
		return *this;
	}
#endif
};

#define imie(...) " [" << #__VA_ARGS__ ": " << (__VA_ARGS__) << "] "
// debug & operator << (debug & dd, P p) { dd << "(" << p.x << ", " << p.y << ")"; return dd; }

// LOOPS
#define GET_MACRO(_1, _2, _3, _4, NAME, ...) NAME
#define __FOR3(i, a, n, inc) for(int i = (a); (inc) > 0 ? i <= (n) : i >= (n); i += (inc))
#define __FOR2(i, a, n) __FOR3(i, a, n, 1)
#define __FOR1(i, n) __FOR2(i, 0, n - 1)
#define __FOR0(n) __FOR1(_, n)
#define FOR(...) GET_MACRO(__VA_ARGS__, __FOR3, __FOR2, __FOR1, __FOR0)(__VA_ARGS__)

// VECTORS/Containers
#define SIZE(a) (int) a.size()
#define ALL(a) a.begin(), a.end()
#define RALL(a) a.rbegin() a.rend()
#define TRAV(a, b) for(auto& a : b)
#define REV(a) reverse(ALL(a))

#define lb lower_bound // Pierwszy >= wartosc
#define ub upper_bound // Pierwszy > wartosc
#define pb push_back

using LL = long long;
using ULL = unsigned long long;
using LD = long double;

using VI = vector <int>;
using VB = vector <bool>;
using VLL = vector <LL>;
using VLD = vector <LD>;
using VVI = vector <VI>;
using VVLL = vector <VLL>;

const int MAX_N = 1e5 + 5;
const int MOD = 1e9 + 7; // 998244353
const int INF = 1e9 + 5;
const long long LLINF = 1e18 + 5; // lub BIG_INF, nie za blisko LLONG_MAX
const long double PI = acos(-1);
const long double EPSILON = 1e-6; // 1e-14

// Ponizsze przechodza gora, dol, prawo, lewo -> a te w komentarzu przechodza przeciwnie do wskazowek zegara
// Moze jeszcze jakosc inaczej zrobic
const int dx[] = {0, 0, -1, 1}; // {1, 0, -1, 0}
const int dy[] = {1, -1, 0, 0}; // {0, 1, 0, -1}

#define cat(x) cerr << #x << ": " << x << "\n"

// Opcje wyswietlania informacji o kodzie: __func__, __LINE__

void solve()
{

}

int main()
{
	ios::sync_with_stdio(0);
	cin.tie(0);
	cout.tie(0);

    int t = 1;
    cin >> t;

    while(t--)
	{
        solve();
	}

	// debug() << imie(a[0]) imie(a[1]);
	// cat(a[0]);

	return 0;
}