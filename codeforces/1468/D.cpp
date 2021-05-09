// Don't know when'll I get Blue Color :(   not_stable      //
#include<bits/stdc++.h>
#define int long long
#define pb push_back
#define tr cout<<"\n";
#define ipair pair<int,int>
#define mod 1000000007
#define INF 1e18
using namespace std;
#define MAXN   1004
int32_t main() 
{
int t=1;
cin>>t;
while(t--){


/* After making logic think for best and easy way of implementation, don't be rush  */
int n,m,a,b;
cin>>n>>m>>a>>b;
int s[m+1];
for(int i=1;i<=m;i++)cin>>s[i];
sort(s+1,s+1+m);
int have=abs(a-b);
if(b>a)have+=(a-1);
else have+=(n-a);

int l=0,r=min(m,abs(a-b)-1);
int ans=0;


while(l<=r)
{
  int mid=(l+r)/2;
  int left=have;
  int flag=0;
  for(int j=mid;j>=1;j--)
  {
   if(s[j]<=left-1);
   else flag=1;
    --left;
  }
  if(flag==1)r=mid-1;
  else ans=mid,l=mid+1;
}

cout<<ans;
tr;

}}