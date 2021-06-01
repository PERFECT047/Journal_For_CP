
#include <bits/stdc++.h>
using namespace std;

int main()
{
	ios_base::sync_with_stdio(false);cin.tie(0);

	int n;
	cin>>n;
	int arr[n],res[n];
	res[0]=1;
	long long sol=0;
	for(int i=0;i<n;i++){
        cin>>arr[i];
	}
	for(int i=1;i<n;i++){
        if(arr[i]>arr[i-1]){
            res[i]=res[i-1]+1;
        }else{
        res[i]=1;
        }
	}
	for(int i=n-2;i>=0;i--){
        if(arr[i]>arr[i+1]){
            res[i]=max(res[i],res[i+1]+1);
        }
	}
	for(int i=0;i<n;i++){
        sol+=res[i];
	}
	cout<<sol;

	return 0;
}
