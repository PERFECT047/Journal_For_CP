#include <bits/stdc++.h>
using namespace std;
 
 
 
int main(){
	
    std::ios_base::sync_with_stdio(false);cin.tie(0);
    
    int n;
    long long sumx=0,sumy=0,sumz=0;
    cin>>n;
    while(n--){
    	int x,y,z;
    	cin>>x>>y>>z;
    	sumx+=x,sumy+=y,sumz+=z;
    }
    if(sumx==0&&sumy==0&&sumz==0){
    	cout<<"YES";
    }else{
    	cout<<"NO";
    }
	
	return 0;
	
}