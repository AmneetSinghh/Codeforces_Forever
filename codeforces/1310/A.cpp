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
int a[n+13],b[n+13];
map<int,int> vis;
set<int> vc;
for(int i=1;i<=n;i++)cin>>a[i],vc.insert(a[i]);
vector<ipair> ed;
for(int i=1;i<=n;i++)cin>>b[i],ed.pb({b[i],a[i]});
sort(ed.begin(),ed.end());
reverse(ed.begin(),ed.end());// from larger time to current time;

sort(a+1,a+1+n);
a[0]=-1;
a[n+1]=a[n]+200001;
int left=0,diff=0;
for(int i=2;i<=n+1;i++)
{
  if(a[i]>a[i-1]) diff=a[i]-a[i-1];
  else ++left,diff=0;
  if(diff>=1 and left>=1)
  {
    for(int k=a[i-1]+1;k<a[i];k++)
    {
       --left;
       vc.insert(k);
       if(left<=0)break;
    }
  }

}

int res=0;
for(auto sd:ed)
{
  int time=sd.first;
  int val=sd.second;
    auto lo=vc.lower_bound(val);
    res+=((*lo-val)*time);
    vc.erase(lo);
}
cout<<res;
tr;




}}