/* not_stable but Believer */
#include<bits/stdc++.h>
#define int long long
#define io ios_base::sync_with_stdio(false),cin.tie(nullptr);
#define ipair pair<int,int>
#define pb push_back
#define f(i, n) for(int i=0;i<n;i++)
#define F(i, n) for(int i=1;i<=n;i++)
#define rep(i,a,b) for(int i=a;i<=b;i++)
#define all(v) v.begin(),v.end()
#define tr cout<<"\n"
using namespace std;

/*
1
4 6
1 1
2 1 2
3 1 2 3
4 1 2 3 4
2 2 3
1 3
2 2

*/



void Not_Stable()
{
/* Either Up or Down Practice Never Ends */
int n,m;
cin>>n>>m;
multiset<pair<int,pair<int,vector<int> >> > H;
// map<int,pair<int,vector<int>>> hash;
F(i,m)
{
   int k;
   cin>>k;
   int val;
   vector<int> vc;
   F(j,k){
      cin>>val;
      vc.pb(val);
   }
   H.insert({vc.size(),{i,vc}});
    // H[vc.size()]={i,vc};
}

int ans=m/2;
if(m%2==1)++ans;
int dp[100004]={0};
int cc[100004]={0};
int flag=0;
for(auto i:H){

   // cout<<i.first<<" "<<i.second.first<<"\n";
    
      int ind=i.second.first;
      int index=-1;
      int tom=0;
      for(auto child:i.second.second)
      {
        if(i.first==1)
        {
         
         tom=1;
         dp[ind]=child;
         cc[child]++;
         if(cc[child]>ans)flag=1;
         break;
        }
         else
         {
            if(cc[child]<ans){
               cc[child]++;tom=1;dp[ind]=child;
               break;}
         }
      }

      if(tom==0){flag=1;break;}
     if(flag)break;
}


if(flag)cout<<"NO\n";
else {
   cout<<"YES";tr;
   F(i,m)cout<<dp[i]<<" ";
   tr;
}


}

 
int32_t main() {
    io;
    int g;cin>>g;
    while (g--)Not_Stable();
    return 0;
}