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

int a[MAXN];
int n,m;
bool can(int days)//4 days;
{
  int sum=0;
  for(int i=1,j=0;i<=n;i++,j++)
   sum+=max(0ll,a[i]-j/days);
  if(sum>=m)return true;
  return false;
}

int32_t main() 
{
int t=1;
while(t--){
/* After making logic think for best and easy way of implementation, don't be rush  */

cin>>n>>m;
for(int i=1;i<=n;i++)cin>>a[i];
sort(a+1,a+1+n);
reverse(a+1,a+1+n);
// log*  N*log(n)
int l=1,r=n;
int ans=-1;
while(l<=r){
	int days=(l+r)/2;	
	if(can(days))ans=days,r=days-1;
	else l=days+1;
}


cout<<ans;
tr;


}}




