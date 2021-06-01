#include <bits/stdc++.h>
using namespace std;
 

int main(){
	
    std::ios_base::sync_with_stdio(false);cin.tie(0);
    
    int n,k;
    cin>>n>>k;
    
    int h[51];
    unordered_map<int,int> c,f;
    long long sol=0;
    
    for(int i=0;i<k*n;i++){
    	int col;
    	cin>>col;
    	if(c.find(col)==c.end()) c[col]=0;
    	c[col]++;
    }
    for(int i=0;i<n;i++){
    	int fav;
    	cin>>fav;
    	if(f.find(fav)==f.end()) f[fav]=0;
    	f[fav]++;
    }
    for(int i=0;i<k;i++){
    	cin>>h[i+1];
    }
    
    for(auto [fav,val]:f){
    	if(c.find(fav)==c.end()) continue;
    	int avail=c[fav];
    	if(avail>k*val) avail=k*val;
    	int avg = avail/val;
    	sol+=h[avg]*(val-(avail%val));
    	sol+=(h[avg+1]*(avail%val));
    	f[fav]=0;
    }
    
    cout<<sol;
	
	return 0;
	
}
