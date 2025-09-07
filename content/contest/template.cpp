#include <bits/stdc++.h>
using namespace std;

#define mp make_pair
#define pb push_back
#define st first
#define nd second
#define fi first
#define se second
#define vt vector
#define FOR(a, b, c)  for(int a=b; a<c; ++a)
#define all(a)     (a).begin(),(a).end()
#define sz(a)      (int)(a).size()

typedef long long ll;
typedef long double ld;
typedef pair<ll, ll> pll;
typedef pair<int, int> pii;
typedef pii PII;
typedef pll PLL;
typedef vector<int> vi; 
typedef vector<ll> vll;

constexpr ll nax = 2e5+6969, INF = 1e9+2137;
constexpr ld eps = 1e-9;

#ifdef DEBUG
template<typename Stream, typename T1, typename T2>
Stream& operator << (Stream& out, pair<T1, T2> a) {return out << "(" << a.st << ", " << a.nd << ")";}
 
template<typename Stream, typename T>
requires ranges::range<T>
Stream &operator << (Stream& out, T v) {
	out << "{";
	int i = 0;
	for (auto x : v)
		out << x << ((++ i) != sz(v) ? ", " : "");
	return out << "}";
}
 
template<typename... Args>
void dump(Args... x) {((cerr << x << ", "), ...) << '\n';}
 
#define debug(x...) cerr << setw(4) << __LINE__ << ": [" #x "]: ", dump(x)
#else
#define debug(...) 0
#endif

mt19937_64 rng(6969);
// mt19937_64 rng(chrono::system_clock::now().time_since_epoch().count());

inline ll rand(ll l, ll r) {
	return uniform_int_distribution<ll>(l, r)(rng);
}

int32_t main() {
	ios_base::sync_with_stdio(0); cin.tie(0); cout.tie(0);
	
	return 0;
}
