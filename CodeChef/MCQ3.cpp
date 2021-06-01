
#include <bits/stdc++.h>
using namespace std;

int main()
{
	ios_base::sync_with_stdio(false);cin.tie(0);

	int n,m;
	cin>>n>>m;
	int arr[n];
	long long dif=0;
	for(int i=0;i<n;i++){
        cin>>arr[i];
	}
	for(int i=0;i<n-1;i++){
        dif+=arr[i]-arr[i+1];
	}
	dif+=m;
	if(dif>=0){
        cout<<"YES";
	}
	else{
        cout<<"NO";
	}
	return 0;
}
