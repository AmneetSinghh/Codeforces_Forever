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
#define MAXN   100005


int32_t main() 
{
int t=1;
while(t--){
/* After making logic think for best and easy way of implementation, don't be rush  */

int n,k,m;
cin>>n>>k>>m;
int a[n+1];
int pre[n+1]={0};
for(int i=1;i<=n;i++)cin>>a[i];
sort(a+1,a+1+n);
for(int i=1;i<=n;i++)pre[i]=pre[i-1]+a[i];
ld mx=0.0;
for(int i=0;i<=n-1 and m>=0;i++){
 int len=n-i;
 int sum=pre[n]-pre[i];
 int plus=min(m,len*k);
 int val=sum+plus;
 ld ans=((double)val/double(len))*1.0;
 mx=max(mx,ans);
 --m;
}



cout << fixed<<setprecision(18) << mx;

}}




