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


int main()
{
    init_code();
    
    int n;
    cin>>n;
    double sol=0;
    for(int i=0;i<n;i++){
    	int t;
    	cin>>t;
    	sol+= (1.0*t);
    }
    printf("%0.12f",sol/n);
    
    return 0;
}