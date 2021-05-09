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
// cin>>t;
while(t--){


/* After making logic think for best and easy way of implementation, don't be rush  */


int n;
cin>>n;
int a[n+2];
for(int i=1;i<=n/2;i++)cin>>a[i];
int b[n+1]={0};
for(int i=1,j=n;i<=n/2;i++,j--)
{
  int val=a[i];
  if(i==1)
  {
    b[i]=0;
    b[j]=val;
  }
  else
  {
    if(val==1)
    {
      b[i]=0;
      b[j]=1;
    }
    else
    {
     int pre=b[i-1];
     int nex=val-pre;
     int diff=b[j+1]-nex;
     if(diff<=0)
     {
      pre+=abs(diff);
      nex-=abs(diff);
     }
      b[i]=pre;
      b[j]=nex;

    }
  }

}
for(int i=1;i<=n;i++)cout<<b[i]<<" ";
tr;


}}