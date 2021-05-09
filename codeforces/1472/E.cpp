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


int n;
cin>>n;
map<int,pair<int,int> > store;
map<int,int> vis;
vector<pair<int,ipair>> vc;
for(int i=1;i<=n;i++)
{
  int a,b;
  cin>>a>>b;
  vc.pb({max(a,b),{min(a,b),i-1}});
  if(!vis[a])store[a]={i-1,b};
  else
  {
    if(store[a].second>b)store[a]={i-1,b};
  }

  if(!vis[b])store[b]={i-1,a};
  else
  {
    if(store[b].second>a)store[b]={i-1,a};
  }
  vis[a]=1;
  vis[b]=1;
}



set<pair<int,ipair>> s;
for(auto c:store)// 1 2 3 5 9 12
s.insert({c.first,{c.second.second,c.second.first}});


int mi=INF;
int ind=-1;
sort(vc.begin(),vc.end());
int dp[vc.size()+1];


for(auto sd: vc)
{
   int r=sd.first;
   int l=sd.second.first;
   int i=sd.second.second;
   while(!s.empty())
   {
    auto c=*(s.begin());
    if(c.first>(r-1))break;
    if(c.second.first<mi)mi=c.second.first,ind=c.second.second+1;
    s.erase(s.begin());
   }

   if(mi<l)dp[i]=ind;
   else dp[i]=-1;

}

for(int i=0;i<vc.size();i++)
{
  if(dp[i]==-1)cout<<dp[i];
  else cout<<dp[i];
  cout<<" ";
}

tr;







}}