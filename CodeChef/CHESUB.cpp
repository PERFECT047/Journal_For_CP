#include<bits/stdc++.h>

using namespace std;

long long dp[100010][110][2];
long long arr[100010];

void solve(){
   long long n,K; cin>>n>>K;
   for(int i=1;i<=n;i++) cin>>arr[i];
   for(int i=1;i<=n+3;i++) for(int j=0;j<=K+2;j++) dp[i][j][0]=dp[i][j][1]=-1e16;   
   dp[n+1][K][0]=dp[n+1][K][1]=0;
   for(int idx=n;idx>=1;idx--){
       for(int k=0;k<=K;k++){
           dp[idx][k][0]=max(dp[idx+1][k][0],dp[idx+1][k+1][1]+arr[idx]*(k+1));
           dp[idx][k][1]=max(dp[idx][k][0],dp[idx+1][k][1]+arr[idx]*k);
       }
   }
   cout<<dp[1][0][0]<<endl;
}
 
int main(){
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    long long t; cin>>t;
    while(t--){
        solve();
    } 
}