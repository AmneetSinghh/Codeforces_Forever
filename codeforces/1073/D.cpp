// Don't know when'll I get Blue Color :(   not_stable      //
#include<bits/stdc++.h>
#define int long long
#define ld long double
#define pb push_back
#define tr cout<<"\n";
#define ipair pair<int,int>
#define mod 998244353
#define INF 1e18
using namespace std;
#define MAXN   200005
 
int32_t main() 
{
int t=1;
while(t--){
/* After making logic think for best and easy way of implementation, don't be rush  */


int n,m;
cin>>n>>m;
int a[n+1];
for(int i=1;i<=n;i++)cin>>a[i];
int ans=0;
while(true)
{
 int sum=0,cnt=0;
 for(int i=1;i<=n;i++)
 {
 	if(m>=a[i])
 	{
  	m-=a[i];
 	cnt++;
 	sum+=a[i];		
   }
 }
 if(sum>0)
 {
  cnt*=(m/sum)+1;
  m%=sum;
  ans+=cnt;
 }
 else  break;
}



cout<<ans;
tr;



}}
 