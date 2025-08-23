#pragma GCC optimize("Ofast,unroll-loops")
#pragma optimize("SEX_ON_THE_BEACH")
#include<bits/stdc++.h>
using namespace std;
 
#include <ext/pb_ds/assoc_container.hpp> 
#include <ext/pb_ds/tree_policy.hpp> 
using namespace __gnu_pbds; 
 
#define ordered_set tree<int, null_type,less<int>, rb_tree_tag,tree_order_statistics_node_update> 
 
#define ll long long int 
#define pb push_back
#define pf push_front
#define mod 1000000007
#define mod1 998244353
#define fr(i,a,b) for(ll i=a; i<=b; i++)
#define rev(i,a,b) for(ll i=a; i>=b; i--)
#define ub upper_bound      
#define lb lower_bound
#define ld long double
#define LL __int128
#define minheappr priority_queue<pair<pair<ll,ll>,pair<ll,ll>>,vector<pair<pair<ll,ll>,pair<ll,ll>>>,greater<pair<pair<ll,ll>,pair<ll,ll>>>>
#define minheap  priority_queue<ll,vector<ll>, greater<ll>> pq;
 
const ll INF = 1e18;
const ll N = 2e5 + 5;

void solve() {
    
}
 
signed main() {
    #ifndef ONLINE_JUDGE
        freopen("Input.txt", "r", stdin);
        freopen("Output.txt", "w", stdout);
    #endif
    ios_base::sync_with_stdio(false);
    cin.tie(nullptr);
    ll t = 1;
    cin >> t;
    while (t--) solve();
}