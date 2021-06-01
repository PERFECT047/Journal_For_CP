#include <bits/stdc++.h>
using namespace std;

//bool mycomp(auto a,auto b){ return a[0]<b[0];}

int main(){
	
    std::ios_base::sync_with_stdio(false);cin.tie(0);
    
    int t;
    cin>>t;
    
    while(t--){
    	int n, needt, finish;
		cin >> n >> needt >> finish;
		vector<pair<int,int>> arr(n);
		for(int i=0;i<=n - 1;i++) {
			int j,k;
			cin >> j;
			cin >> k;
			arr[i] = {j, k};
		}
		sort(arr.begin(),arr.end());
		int total = arr[0].first - 0;
		int maxmon = arr[0].second;
		for(int i=1; i<=n - 1;i++) {
			if (arr[i].first > maxmon) {
			total += abs(arr[i].first - maxmon);
			}
			maxmon = max(maxmon, arr[i].second);
		}
		total += finish - maxmon;
		if (total >= needt)cout << "YES" << endl;
		else cout << "NO" << endl;
    }
	
	return 0;
	
}
