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
typedef vector<pii> vpii;
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
 
 
 void sol(){
 	
 	ll n, m;
 	cin >> n >> m;
 	ll mat[n + 1][m + 1] = {0};
 	pll sp;
 	pll ep;
 	for(ll i = 1; i <= n; i++){
 		for(ll j = 1; j <= m; j++){
 			char c;
 			cin >> c;
 			if(c == '#') mat[i][j] = -1;
 			else if(c == 'A') sp = {i, j}; 
 			else if(c == 'B') ep = {i, j}; 
 		}
 	}
 	
 	vector<pair<pll, pll>> s;
 	s.pb({sp, sp});
 	bool vis[n + 1][m + 1] = {0};
 	
 	ll id = 0;
 	
 	for(ll i = 0; i < (ll)s.size(); i++){
 		id = i; 
 		ll ci = s[i].ff.ff;
 		ll cj = s[i].ff.ss;
 		if(vis[ci][cj]) continue;
 		vis[ci][cj] = 1;
 		if(mat[ci][cj] == -1)continue;
 		
 		if(ci == ep.ff && cj == ep.ss) break;
 		
 		if(ci - 1 > 0){
 			if(!vis[ci - 1][cj]) s.pb({{ci - 1, cj}, {ci, cj}});
 		}
 		if(ci + 1 <= n){
 			if(!vis[ci + 1][cj]) s.pb({{ci + 1, cj}, {ci, cj}});
 		}
 		if(cj - 1 > 0){
 			if(!vis[ci][cj - 1]) s.pb({{ci, cj - 1}, {ci, cj}});
 		}
 		if(cj + 1 <= m){
 			if(!vis[ci][cj + 1]) s.pb({{ci, cj + 1}, {ci, cj}});
 		}
 	}
	
 	pll cid = s[id].ff;
 	vector<pll> v;
 	
 	if(cid == ep){
 		cout << "YES" << nline;
 		
 		pll sid = s[id].ff;
 		
 		for(ll i = id; i >= 0; i--){
 			if(s[i].ff == sid){
 				v.pb(sid);
 				sid = s[i].ss;
 			}
 		}
 		
 		string st;
 		
 		for(ll i = v.size() - 2; i >= 0; i--){
 			ll x = v[i].ff - v[i + 1].ff;
 			ll y = v[i].ss - v[i + 1].ss;
 			if(x){
 				st.pb(x > 0 ? 'D' : 'U');
 			}
 			else{
 				st.pb(y > 0 ? 'R' : 'L');
 			}
 		}
 		
 		cout<< v.size() - 1 << nline;
 		cout << st << nline;
 		
 	}
 	else{
 		cout << "NO" << nline;
 	}
 	
 }
 
 
int main()
{
    init_code();
    
    ll tc = 1;
    // cin >> tc;
    
    while(tc--) sol();
    
    return 0;
}
