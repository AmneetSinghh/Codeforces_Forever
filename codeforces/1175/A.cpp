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
  int ans=0;
  int c=0;
  if(k==1){cout<<n;tr;continue;}
  while(n>0)
  {
    if(n%k==0)n/=k,++c;
    else{
       c+=(n%k);
       n-=(n%k);
    }
  }
  cout<<c;
  tr;


}}
 