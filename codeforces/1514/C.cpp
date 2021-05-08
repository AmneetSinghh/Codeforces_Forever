// Don't know when'll I get Blue Color :(   not_stable      //
#include<bits/stdc++.h>
#define int long long
#define pb push_back
#define tr cout<<"\n";
#define ipair pair<int,int>
#define mod 1000000007
#define INF 1e18
using namespace std;
#define MAXN   100005
 

 
int32_t main() 
{
int t=1;
// cin>>t;
while(t--){

int n;
cin>>n;
if(n==1){cout<<"0";return 0;}
int a[n+1];
int val=1;
int c=0;
for(int i=1;i<=n-1;i++){
  if(__gcd(i,n)==1)val*=i,c++;
  val%=n;
}

if(val==1)
{
  cout<<c;
  tr;
  for(int i=1;i<=n-1;i++){
    if(__gcd(i,n)==1)cout<<i<<" ";
  }
}
else
{
   cout<<c-1;
  tr;
  for(int i=1;i<=n-2;i++){
    if(__gcd(i,n)==1)cout<<i<<" ";
  }
}

}}