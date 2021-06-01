#include <bits/stdc++.h>
using namespace std;



int main(){
	
    std::ios_base::sync_with_stdio(false);cin.tie(0);
    
    int t;
    cin>>t;
    while(t--){
    	int flag=0;
    	int n;
    	cin>>n;
    	while(n--){
    		string str;
    		cin>>str;
    		int lang=1;
    		for(int i=0;i<str.length();i++){
    			if(i==0){
    				if(str[i]>='a'&&str[i]<='m') lang=1;
    				else lang=2;
    			}
    			if(lang==1&&str[i]>='a'&&str[i]<='m') continue;
    			else if(lang==2&&str[i]>='N'&&str[i]<='Z') continue;
    			else{
    				flag=1;
    				break;
    			}
    		}
    	}
    	if(flag==0) cout<<"YES \n";
    	else cout<<"NO \n";
    }
	
	return 0;
	
}
