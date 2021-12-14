#include <bits/stdc++.h>
using namespace std;
using ll=long long;
bool comp(pair<ll,ll> e1,pair<ll,ll> e2)
{
   if(e1.first>e2.first)      
     return true;
   return false;
}  
void solve()
{
   ll k,n; cin>>n>>k; vector<ll> v;  vector<pair<int,int>> vp;
   vector<ll> indexes;
   for(ll i=0;i<n;i++)
   {
     ll ele; cin>>ele;
      v.push_back(ele);
      vp.push_back(make_pair(ele,i));
   }
   
	ll idx= k/2;
 
   sort(vp.begin(),vp.end(),comp);
  
   cout<<vp[idx].first<<"\n";

   for(int i=0;i<k;i++)
   {
     indexes.push_back(vp[i].second);
   }

   
   sort(indexes.begin(), indexes.end());
   for(int i=0;i<indexes.size();i++)
   {
    cout<<v[indexes[i]]<<" ";
   }

   return ;

}
int main()
{ 

int t; cin>>t;
while(t--) solve();

}