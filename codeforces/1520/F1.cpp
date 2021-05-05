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
  cout.flush();
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
cout.flush();
int l=1,r=n,ans=1;
while(l<=r)
{
     int mid=(l+r)/2;
     int get=ask(mid);

     if(mid-get>=k){
      ans=mid;
      r=mid-1;
     }
     else l=mid+1;
     // if(get<k)l=mid+1;
     // else if(get>k)r=mid-1;
     // else if(get==k){
     //  ans=mid;
     //  r=mid-1;
     // }
}

cout << "! " << ans << endl;
cout.flush();
return 0;




}
}