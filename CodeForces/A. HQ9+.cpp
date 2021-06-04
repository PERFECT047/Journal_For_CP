#include <bits/stdc++.h>
using namespace std;
 
 
 
int main(){
	
    std::ios_base::sync_with_stdio(false);cin.tie(0);
    
    string str;
   cin>>str;
	int flag=0;
	for(int i=0;i<str.size();i++){
		if(str[i]=='H'||str[i]=='Q'||str[i]=='9'){
    		cout<<"YES \n"; flag=1;break;
    	}
	}
    if(flag==0){
    	cout<<"NO \n";
    }
	
	return 0;
	
}