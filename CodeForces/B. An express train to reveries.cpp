#include<bits/stdc++.h>
 
using namespace std;
 
#pragma GCC optimize("Ofast")
#pragma GCC target("avx,avx2,fma")
#pragma GCC optimization ("unroll-loops")
 
 
#define fastio() ios_base::sync_with_stdio(false);cin.tie(NULL);cout.tie(NULL)
#define MOD 1000000007
#define MOD1 998244353
#define INF 1e18
#define nline "\n"
#define pb push_back
#define ppb pop_back
#define mp make_pair
#define ff first
#define ss second
#define PI 3.141592653589793238462
#define set_bits __builtin_popcountll
#define sz(x) ((int)(x).size())
#define all(x) (x).begin(), (x).end()
#define rep(i,x,n) for(ll i=x;i<n;i++)
#define repb(i,n,x) for(ll i=n;i>=x;i--)
 
 
typedef long long ll;
typedef unsigned long long ull;
typedef long double lld;
typedef stringstream ss;
typedef map<int, int> mii;
typedef map<ll, int> mli;
typedef map<char, int> mci;
typedef map<string, int> msi;
typedef map<int, vector<int>> mivi;
typedef pair<int, int> pii;
typedef pair<ll, ll> pll;
typedef set<int> seti;
typedef set<ll> setl;
typedef set<char> setc;
typedef set<string> sets;
typedef vector<int> vi;
typedef vector<ll> vll;
typedef vector<char> vc;
typedef vector<string> vs;
typedef vector<pll> vpll;
typedef map<int, int>::iterator miit;
typedef map<ll, ll>::iterator mllit;
typedef map<char, int>::iterator mciit;
typedef map<string, int>::iterator msiit;
typedef vector<int>::iterator viit;
typedef vector<ll>::iterator vlit;
typedef vector<char>::iterator vcit;
typedef vector<string>::iterator vsit;
// typedef tree<pair<int, int>, null_type, less<pair<int, int>>, rb_tree_tag, tree_order_statistics_node_update > pbds; // find_by_order, order_of_key
 
 
void init_code(){
    fastio();
    #ifndef ONLINE_JUDGE
    #define debug(x) cerr << #x <<" "; _print(x); cerr << nline;
    #else
    #define debug(x)
    #endif 
}
 
 
void _print(ll t) {cerr << t;}
void _print(int t) {cerr << t;}
void _print(string t) {cerr << t;}
void _print(char t) {cerr << t;}
void _print(lld t) {cerr << t;}
void _print(double t) {cerr << t;}
void _print(ull t) {cerr << t;}
 
 
template <class T, class V> void _print(pair <T, V> p);
template <class T> void _print(vector <T> v);
template <class T> void _print(set <T> v);
template <class T, class V> void _print(map <T, V> v);
template <class T> void _print(multiset <T> v);
template <class T, class V> void _print(pair <T, V> p) {cerr << "{"; _print(p.ff); cerr << ","; _print(p.ss); cerr << "}";}
template <class T> void _print(vector <T> v) {cerr << "[ "; for (T i : v) {_print(i); cerr << " ";} cerr << "]";}
template <class T> void _print(set <T> v) {cerr << "[ "; for (T i : v) {_print(i); cerr << " ";} cerr << "]";}
template <class T> void _print(multiset <T> v) {cerr << "[ "; for (T i : v) {_print(i); cerr << " ";} cerr << "]";}
template <class T, class V> void _print(map <T, V> v) {cerr << "[ "; for (auto i : v) {_print(i); cerr << " ";} cerr << "]";}


void solve() {
	
    ll n;
    cin >> n;
    ll a[n], b[n];
    rep(i, 0, n)cin >> a[i];
    rep(i, 0, n)cin >> b[i];
    ll res[n] = {0};
    
    unordered_map<ll, ll> mp;
    vll v;
    
    rep(i, 0, n){
    	if(a[i] != b[i]){
    		v.pb(i);
    	}
    	if(a[i] == b[i]){
    		if(mp.count(a[i]) == 0){
	    		res[i] = a[i];
	    		mp[a[i]]++;
	    	}
	    	else{
	    		v.pb(i);
	    	}
    	}
    }

	ll sz = v.size();
	
	if(sz == 1){
		rep(j, 1, n + 1){
			if(mp.count(j) == 0){
				res[v[0]] = j;
				break;
			}
		}
	}
	
	if(sz == 2){
		ll res1[n], res2[n];
		ll arr[2];
		ll cnt = 0;
		rep(i, 1, n + 1){
			if(mp.count(i) == 0){
				arr[cnt] = i;
				cnt++;
			}
			if(cnt == 2) break;
		}
		
		rep(i, 0, n){
			res1[i] = res[i];
			res2[i] = res[i];
		}
		res1[v[0]] = res2[v[1]] = arr[0];
		res1[v[1]] = res2[v[0]] = arr[1];
		
		ll cnta1 = 0, cntb1 = 0;
		ll cnta2 = 0, cntb2 = 0;
				
		rep(i, 0, n){
			if(res1[i] != a[i])cnta1++;
			if(res1[i] != b[i])cntb1++;
			if(res2[i] != a[i])cnta2++;
			if(res2[i] != a[i])cntb2++;
		}
		
		if(cnta1 == 1 && cntb1 == 1){
			rep(i, 0, n)cout << res1[i] << " ";
			return;
		}
		if(cnta2 == 1 && cntb2 == 1){
			rep(i, 0, n)cout << res2[i] << " ";
			return;
		}
		
	}
    
    rep(i, 0, n)cout << res[i] << " ";
	
}
 
 
int main()
{
    init_code();

    ll tc = 1;
    
    // cin >> tc;
	
    while(tc--) solve();
    
    return 0;
}