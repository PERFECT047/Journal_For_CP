#include<bits/stdc++.h>

using namespace std;

int main() { 
    
 int tc;
 cin>>tc;
 while(tc--)
 {   
      int n,k; cin>>n>>k;
      string str; cin>>str;
      int arr[k];
      for(int i=0;i<k;i++)cin>>arr[i];
      
      if(n==1)
      {
          for(int i=0;i<k;i++)
          cout<<0<<endl;
          continue;
      }
      
      long long distance=0;
      for(int i=1;i<n;i++)
      {
          if(str[i]==str[i-1])
          distance+=2;
          else
          distance+=1;
          
      }
      
      for(int i=0;i<k;i++)
      {
          if(arr[i]==1 )
          {
              if(str[0]==str[1])
               distance--;
              else
              distance++;
              
          }
          else if(arr[i]==n)
          {
              if(str[n-1]==str[n-2])
              distance--;
              else
              distance++;
          }
          else
          {
             int temp=0;
             if(str[arr[i]-1]==str[arr[i]-2])
             temp=temp+2;
             if(str[arr[i]-1]!=str[arr[i]-2])
             temp+=1;
             if(str[arr[i]-1]!=str[arr[i]])
             temp+=1;
             if(str[arr[i]-1]==str[arr[i]])
             {
                 temp++; temp++;
             }
             
             if(temp==4) distance=distance-2;
             if(temp==2)distance=distance+2;
             
             
          }
          
         
          if(str[arr[i]-1]=='0')
          str[arr[i]-1]='1';
          else
          str[arr[i]-1]='0';
           cout<<distance<<endl;
         
          
      }
      
      
 }
     
 
     
 
 return 0;
}