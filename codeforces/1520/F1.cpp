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

int ask(int mid){
  cout << "? " << 1 << " " << mid << endl;
  int val;
  cin>>val;
  return val;
}

int32_t main() 
{
int t=1;
// cin>>t;
while(t--){


int n,k,t;
cin>>n>>t;
cin>>k;
int l=1,r=n,ans=1;
while(l<=r)
{
     int mid=(l+r)/2;
     int get=ask(mid);
     if(mid-get>=k){
      ans=mid;// this means, we hae at least this onees;
      r=mid-1;
     }
     else l=mid+1;
}

cout << "! " << ans << endl;
return 0;




}
}