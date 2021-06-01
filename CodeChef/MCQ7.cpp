#include <bits/stdc++.h>
using namespace std;

int main(){
	
    std::ios_base::sync_with_stdio(false);cin.tie(0);
    
    int t;
    cin>>t;
    while(t--){
    	int n,sol=0;
    	cin>>n;
    	int arr[n];
    	for(int i=0;i<n;i++) cin>>arr[i];
    	for(int i=0;i<n;i++){
    		for(int j=i+1;j<n;j++){
    			if((arr[i]|arr[j])<=max(arr[i],arr[j])) sol++;
    		}
    	}
    	cout<<sol<<"\n";
    }
	
	return 0;
	
}
