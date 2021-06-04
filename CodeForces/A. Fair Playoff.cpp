#include<bits/stdc++.h>
 
using namespace std;
 
 
int main() {
    
    
 int tc;
 cin>>tc;
 while(tc--)
 {   
 	int arr[4],max1=0,max2=0;
 	for(int i=0;i<4;i++)cin>>arr[i];
 	for(int i=0;i<4;i++) max1 = max(max1,arr[i]);
 	for(int i=0;i<4;i++) if(arr[i]<max1) max2 = max(max2,arr[i]);
 	arr[0]=arr[0]>arr[1]?arr[0]:arr[1];
 	arr[2]=arr[2]>arr[3]?arr[2]:arr[3];
 	int flag=0;
 	if(arr[0]==max1||arr[0]==max2) flag++;
 	if(arr[2]==max1||arr[2]==max2) flag++;
 	if(flag==2)cout<<"YES\n";
 	else cout<<"NO\n";
 }
 return 0;
}