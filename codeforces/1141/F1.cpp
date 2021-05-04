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
int a[n+1];
for(int i=1;i<=n;i++)cin>>a[i];

unordered_map<int,vector<pair<int,int>>  > vc;
for(int i=1;i<=n;i++)
{
  int sum=0;
  for(int j=i;j>=1;j--)
  {
   sum+=a[j];
  vc[sum].pb({i,j});
  }
}
const int inf=1000006;
vector<pair<int,int>> ans;
for(auto sd:vc)
{
  int last=-1;
  vector<ipair> temp;
  int dp[1000005]={0};
  int parent[1000005]={0};
  sort(sd.second.begin(),sd.second.end());
  int pre=0,l=0,r=0,prel=0;
  vector<ipair> store;
  for(auto c:sd.second)store.pb({c.first,c.second});

    /// remove some indredients;
  vector<pair<int,int>> tempo;
  for(int i=0;i<sd.second.size();i++)
  {
      int l=sd.second[i].second;
      int r=sd.second[i].first;
    if(tempo.empty())tempo.pb({r,l});
    else
    {
      int last=tempo.size()-1;
      int ll=tempo[last].second;
      int rr=tempo[last].first;
      if(rr==r)tempo[last].second=max(ll,l);
      else tempo.pb({r,l});
    }
  }

  sd.second=tempo;




  for(auto c:sd.second)
  {
    l=c.second;
    r=c.first;
    int range=(r-l)+1;// this is upper_bound so decrease one;
    int mx=upper_bound(store.begin(),store.end(),make_pair(r-range,inf))-store.begin();
    --mx;
    if(mx<0)mx=0;
    else mx=dp[store[mx].first];
    dp[r]=max(dp[pre],1+mx);// max from the previous or the current maximum;
    pre=r;
    prel=l;
  }

  if(dp[r]>ans.size())
  {

    // get all pairs;
    ans.clear();
    reverse(sd.second.begin(),sd.second.end());// large to small;
    //     cout<<dp[r];
    // tr;
    // for(auto c:sd.second)cout<<c.first<<" "<<c.second<<"\n";


    // cout<<"********************************************************\n";

    int sz=sd.second.size();
    int i=0;


    while(i<sz)
    {
      int l=sd.second[i].second;
      int r=sd.second[i].first;
      if(i+1<sz && dp[r]==dp[sd.second[i+1].first]){++i;continue;}// not take;
      // take it;
    ans.pb({l,r});
      // get to the previous;
    int range=(r-l)+1;// this is upper_bound so decrease one;
    int mx=upper_bound(store.begin(),store.end(),make_pair(r-range,inf))-store.begin();
    --mx;
    if(mx<0)break;// take it;


    int nextl=store[mx].second;//l
    int nextr=store[mx].first;// R;
    

    // cout<<l<<" "<<r<<" "<<nextl<<" "<<nextr<<" "<<dp[r]<<" "<<dp[nextr];
    // tr;

    // cout<<nextl<<" "<<nextr<<" "<<dp[nextr]<<" "<<i;
    // tr;
    int j=i;
    while(j<sz)
    {
      if(sd.second[j].first==nextr and sd.second[j].second==nextl)
      {
         i=j;
         break;
      }
      ++j;
    }

    if(j>=sz)break;



    }



  }

}






cout<<ans.size();tr;
for(auto sd:ans)cout<<sd.first<<" "<<sd.second<<"\n";
  

}
}