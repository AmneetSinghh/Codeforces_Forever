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
cin>>t;
while(t--){
/* After making logic think for best and easy way of implementation, don't be rush  */

int n,k;
cin>>n>>k;
++k;
int mi=INF;
int a[n+12]={0};
for(int i=1;i<=n;i++)cin>>a[i];
int i=k;
int ind=a[n];
while(i<=n)
{
  int sum=a[i];
  int check=0;
  if(i-k+1!=i)sum+=a[i-k+1],check=sum/2;
  else check=sum;
  int first=check;
  int second=check+1;
  int val=0;
  int tk=max(abs(a[(i-k)+1]-first),abs(a[(i)]-first));
  int mk=max(abs(a[(i-k)+1]-second),abs(a[(i)]-second));
  int left;
  if(tk<mk)left=tk,val=first;
  else left=mk,val=second;

  if(left<mi)mi=left,ind=val;
  ++i;
}


cout<<ind;
tr;



}}
 