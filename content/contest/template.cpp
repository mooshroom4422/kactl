#include <bits/stdc++.h>

#pragma GCC target("avx2")
#pragma GCC optimization("Ofast")
#pragma GCC optimization("unroll-loops")
 
#define mp make_pair
#define pb push_back
#define ppb pop_back
#define pf push_front
#define ppf pop_front
#define eb emplace_back
#define st first
#define nd second
#define vt vector
#define VAR(__var)  #__var << ": " << __var << " "
#define PAIR(__var) #__var << ": " << __var.first << ", " << __var.second << " "
#define FOR(__var, __start, __end)  for(int __var=__start; __var<__end; ++__var)
#define FORB(__var, __start, __end) for(int __var=__start; __var>__end; --__var)
#define maxi(__x, __y) __x = (__x>__y?__x:__y)
#define mini(__x, __y) __x = (__x<__y?__x:__y)
#define all(__var)     (__var).begin(),(__var).end()
#define rall(__var)    (__var).rbegin(),(__var).rend()
#define sz(__var)      (int)(__var).size()
 
#ifndef DEBUG
#define DEBUG 0
#endif
#define debug if(DEBUG)
 
using namespace std;
 
// ordered set
#include <ext/pb_ds/assoc_container.hpp>
#include <ext/pb_ds/tree_policy.hpp>
using namespace __gnu_pbds;
template <typename T>
using ord_set = tree<T,null_type,less<T>,rb_tree_tag,tree_order_statistics_node_update>;

int32_t main() {
	ios_base::sync_with_stdio(0); cin.tie(0); cout.tie(0);

	return 0;
}
