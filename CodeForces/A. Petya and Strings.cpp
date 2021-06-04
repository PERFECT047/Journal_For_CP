#include <bits/stdc++.h>
using namespace std;
 
 
 
int main(){
	
    std::ios_base::sync_with_stdio(false);cin.tie(0);
    
    string str1,str2;
    cin>>str1>>str2;
    int flag=0,i;
    //cout<<str1<<" "<<str2<<"\n";
    for(i=0;i<str1.size();i++){
    	if(str1[i]>='A'&&str1[i]<='Z'){
    		str1[i]=str1[i]+('a'-'A');
    	}
    	if(str2[i]>='A'&&str2[i]<='Z'){
    		str2[i]=str2[i]+('a'-'A');
    	}
    	if(str1[i]!=str2[i]){
    		if(str1[i]>str2[i]) cout<<"1";
    		else cout<<"-1";
    		flag=1;
    		break;
    	}
    }
    if(flag==0){
    	cout<<"0";
    }
    //cout<<"\n"<<str1<<"\n"<<str2;
	
	return 0;
	
}