#include <bits/stdc++.h>
using namespace std;



int main(){
	
    std::ios_base::sync_with_stdio(false);cin.tie(0);
    
    int t;
    cin>>t;
    while(t--){
    	int x,m,d;
    	cin>>x>>m>>d;
    	cout<<min(x*m,x+d)<<"\n";
    }
	
	return 0;
	
}