#include <bits/stdc++.h>
using namespace std;



int main(){
	
    std::ios_base::sync_with_stdio(false);cin.tie(0);
    
    int t;
    cin>>t;
    while(t--){
    	int n,m,k;
    	cin >> n >> m >> k;
	vector<int> arr(k);
	for(int i=0;i<=k - 1;i++)cin >> arr[i];
	map<int, int>mp;
	for(int i=0;i<=k - 1;i++) {
		if (arr[i] <= n)
			mp[arr[i]]++;
	}
	long long c = 0;
	for (auto it : mp) {
		if (it.second >= 2)c++;
	}
	cout << c << " ";
	for (auto it : mp) {
		if (it.second >= 2) cout << it.first << " ";
	}
	cout << endl;
    }
	
	return 0;
	
}
