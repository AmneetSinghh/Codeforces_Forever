// Don't know when'll I get Blue Color :(   not_stable      //
#include<bits/stdc++.h>
#define int long long
#define pb push_back
#define tr cout<<"\n";
#define ipair pair<int,int>
#define mod 998244353
#define INF 1e18
using namespace std;
#define MAXN   1000005



int32_t main() 
{
int t=1;
int fact[MAXN];
fact[0]=1;
fact[1]=1;
for(int i=2;i<=MAXN-2;i++)fact[i]=(fact[i-1]*i)%mod;
while(t--){
/* After making logic think for best and easy way of implementation, don't be rush  */

int n;
cin>>n;
if(n<=2)cout<<fact[n];
else
{
int ans=fact[n]%mod;
int choose=n;
for(int i=1;i<=n-1;i++)
{
  int cur=((((fact[n-i])-1+mod)%mod)*choose)%mod;
  ans=((ans%mod)+(cur%mod))%mod;
  choose=choose*((n-i))%mod;
}

cout<<ans;
}

tr;

}}




