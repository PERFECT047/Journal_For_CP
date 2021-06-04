
#include<bits/stdc++.h>
 
using namespace std;
 
 
int main() {
    
    
 int tc;
 cin>>tc;
 while(tc--)
 {   
 	int n,sol=0;
 	cin>>n;
 	vector<int> arre,arro;
 	for(int i=0;i<n;i++){
 		int temp;
 		cin>>temp;
 		if(temp%2==0)arre.push_back(temp);
 		else arro.push_back(temp);
 	}
 	sort(arre.begin(),arre.end(),greater<int>());
 	sort(arro.begin(),arro.end(),greater<int>());
 	vector<int> arr=arre;
 	for(auto ele:arro) arr.push_back(ele);
 	// for(int i=0;i<arr.size();i++)cout<<arr[i]<<" ";
 	// cout<<" -- ";
 	for(int i=0;i<n-1;i++){
 		for(int j=i+1;j<n;j++){
 			if(__gcd(arr[i],2*arr[j])>1)sol++;
 		}
 	}
 	
 	cout<<sol<<"\n";
 }
 return 0;
}