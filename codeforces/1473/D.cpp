#include<bits/stdc++.h>
#define int long long
#define tr cout<<"\n";
#define iPair pair<int,int>
#define INF 10000000000009
#define pb push_back
#define un unordered_map
using namespace std;
const int maxn=100005;


int32_t main() {
    int tt=1;
    cin>>tt;
    while(tt--){
      int n,k;
      cin>>n>>k;
      string s;
      cin>>s;
      int ans[k+1]={0};
      vector<pair<int,iPair> >vc;
      for(int i=1;i<=k;i++){
        int l,r;
        cin>>l>>r;
        vc.pb({r,{l,i}});
      }
sort(vc.begin(),vc.end());
reverse(vc.begin(),vc.end());
int dp[n+1][4];
int mi=0,mx=0,cur=0;
for(int i=0;i<n;i++){
 if(s[i]=='+')++cur;
 else --cur;
 mi=min(cur,mi);
 mx=max(cur,mx);
 dp[i][0]=cur;
 dp[i][1]=mi;
 dp[i][2]=mx;
}


mi=0,mx=0,cur=0;
int last=n-1;
for(auto sd:vc){
  int r=sd.first;
  int l=sd.second.first;
  int ind=sd.second.second;
  --l,--r;
  int mii=0,mxx=0,cur=0;
  // find it;

  for(int i=min(last,r)+1;i<=last;i++){
   if(s[i]=='+')cur++;
   else --cur;
   mii=min(mii,cur);
   mxx=max(mxx,cur);
  }

   last=r;
   if(cur-abs(mi)<mii)mi=cur-abs(mi);
   else mi=mii;
   if(cur+abs(mx)>mxx)mx=cur+abs(mx);
   else mx=mxx;

   // find for the original;
   mii=0,mxx=0,cur=0;
   if(l-1>=0){
    cur=dp[l-1][0];
    mii=dp[l-1][1];
    mxx=dp[l-1][2];
   }
   int first=0,second=0;
   if(cur-abs(mi)<mii)first=cur-abs(mi);
   else first=mii;
   if(cur+abs(mx)>mxx)second=cur+abs(mx);
   else second=mxx;
   ans[ind]=(second-first)+1;

}






for(int i=1;i<=k;i++)cout<<ans[i]<<"\n";


}}
