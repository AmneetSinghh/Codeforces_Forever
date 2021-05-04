#include<bits/stdc++.h>
#define int long long
#define pb push_back
#define tr cout<<"\n";
#define ipair pair<int,int>
#define mod 1000000007
#define INF 500000000000000000
using namespace std;
#define MAXN   100005




int32_t main() 
{
int t=1;
// cin>>t;
while(t--){
  
int a,b;
cin>>a>>b;
int n=a;
int m=b;
if(m>=n)
{
    if(m%n==0)
    {
      int ans=0;
      int val=m/n;
      while(val%2==0){
        ++ans;
        val/=2;
      }
       while(val%3==0){
        ++ans;
        val/=3;
      }

      if(val==1)cout<<ans;
      else cout<<"-1";



    }
    else cout<<"-1";
}
else cout<<"-1";


tr;
// 428;







}
}
