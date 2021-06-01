#include <bits/stdc++.h>
using namespace std;
 
int main(){
	
    std::ios_base::sync_with_stdio(false);cin.tie(0);
    
    int t=0;
    cin>>t;
    while(t--){
    	
    	int a,b,c,d,k;
    	cin>>a>>b>>c>>d>>k;
    	int diff=abs(c-a)+abs(d-b);
    	while(diff<k) diff+=2;
    	if(diff==k) cout<<"YES \n";
    	else cout<<"NO \n";
    	
    }
	
	return 0;
	
}
