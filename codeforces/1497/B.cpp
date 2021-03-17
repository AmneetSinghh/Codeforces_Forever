/* not_stable but Believer */
#include<bits/stdc++.h>
#define int int
#define io ios_base::sync_with_stdio(false),cin.tie(nullptr);
#define ipair pair<int,int>
#define pb push_back
#define f(i, n) for(int i=0;i<n;i++)
#define F(i, n) for(int i=1;i<=n;i++)
#define rep(i,a,b) for(int i=a;i<=b;i++)
#define all(v) v.begin(),v.end()
#define tr cout<<"\n"
#define br break
#define oo (1<<30)
#define mod 998244353
using namespace std;
const int maxn=100005;
//
void Not_Stable(){
// ******************************* EITHER UP OR DOWN BUT PRACTICE NEVER ENDS ******************************************

  int n,m;
  cin>>n>>m;
  map<int,int> hash;
  map<int,int> vis;
  F(i,n)
  {
    int val;
    cin>>val;
    hash[(val%m)]++;
  }
  
  int ans=0;
  for(auto sd:hash)
  {
    if(sd.first==0){ans+=1;}
    else if(sd.first!=0)
    {
      int first=sd.second;
      int second=0;
      if(!hash[m-sd.first])ans+=sd.second;
      else
      {
        second=hash[m-sd.first];
        int mi=min(first,second);
        first-=mi;
        second-=mi;
        ans+=1;
        if(first>0)ans+=(first-1);
        if(second>0)ans+=(second-1);
      }
    }

    hash[m-sd.first]=0;
    hash[sd.first]=0;
  }

  

  cout<<ans;
tr;
}



int32_t main() {
    io;
    int g;cin>>g;
    while (g--)Not_Stable();
    return 0;
}