// Either up or down pracice never ends  :not_stable      //
#include<bits/stdc++.h>
#define int long long
#define pb push_back
#define tr cout<<"\n";
#define ipair pair<int,int>
#define mod 1000000007
#define INF 1e18
using namespace std;
#define MAXN   200005


int32_t main() 
{
int t=1;
cin>>t;
while(t--){




int n,a,b;
cin>>n>>a>>b;



if(a*2<=b)cout<<n*a;
else
{
  if(n%2==0)cout<<(n/2)*b;
  else cout<<(n/2)*b+a;
}


tr;







}
}