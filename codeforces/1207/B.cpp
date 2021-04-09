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
void Not_Stable(){
// ******************************* EITHER UP OR DOWN BUT PRACTICE NEVER ENDS ****************************************** //


  int n,m;
  cin>>n>>m;
  int a[n+1][m+1];
  int b[n+1][m+1];
  memset(b,0,sizeof b);
  F(i,n)F(j,m)cin>>a[i][j];
  int flag=0;
  vector<ipair> vc;
  for(int i=1;i<=n;i++){
    for(int j=1;j<=m;j++){
      if(i+1<=n && j+1<=m){
        int sum=0;
        sum+=a[i][j];
        sum+=a[i+1][j];
        sum+=a[i][j+1];
        sum+=a[i+1][j+1];
        if(sum==4){
        vc.pb({i,j});
        b[i][j]=1;
        b[i+1][j]=1;
        b[i][j+1]=1;
        b[i+1][j+1]=1;}
      }
    }
  }


  F(i,n)F(j,m){
    if(a[i][j]!=b[i][j])flag=1;
  }
if(flag==0){
  cout<<vc.size();tr;
  for(auto sd:vc)cout<<sd.first<<" "<<sd.second<<"\n";
}
else cout<<"-1\n";






}



int32_t main() {
    io;
    int g=1;

    // cin>>g;
    while (g--)Not_Stable();
    return 0;
}