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
#define br break
#define oo (1<<30)
#define inf 100000000000000009
#define mod 998244353
using namespace std;
const int maxn=100005;
void Not_Stable(){
// ******************************* EITHER UP OR DOWN BUT PRACTICE NEVER ENDS ****************************************** //


int n;
cin>>n;
int a[n+1],dp[n+1];
F(i,n)cin>>a[i];
int first=0;
int second=0;
int left1=n;
int left2=n;
int mi_first=inf;
int mi_second=inf;
for(int i=1;i<=n;i++)
{
 if(i%2==1){
  mi_first=min(mi_first,a[i]);
  first+=a[i];

  if(mi_first==a[i])
  {
    // curent is min;
    dp[i]=(mi_first*left1)+(first-a[i]);
  }
  else
  {
    dp[i]=(mi_first*left1)+(first-mi_first);
  }
  left1--;
 }
 else
 {
  mi_second=min(mi_second,a[i]);
  second+=a[i];
  if(mi_second==a[i])
  {
    // curent is min;
    dp[i]=(mi_second*left2)+(second-a[i]);
  }
  else
  {
    dp[i]=(mi_second*left2)+(second-mi_second);
  }
  left2--;
 }

}
int mi=dp[2]+dp[1];
for(int i=3;i<=n;i++)
{
 mi=min(dp[i]+dp[i-1],mi);
}

cout<<mi;
tr;


}



int32_t main() {
    io;
    int g;cin>>g;
    while (g--)Not_Stable();
    return 0;
}