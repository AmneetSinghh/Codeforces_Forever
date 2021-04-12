/* not_stable */
/* Practice to Improve */
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
#define mod 1000000007
#define inf 1e18
using namespace std; 
int n,k;
int dp[30][30];

void Not_Stable()
{    
cin>>n>>k;
memset(dp,0,sizeof dp);
string res="";
res="a";
while(true){
  int last=res.back()-'a';
  int flag=-1;
  for(int i=0;i<k;i++){
   if(!dp[last][i]){
    int check=1;
    // if all are visited. then breaj;
    for(int j=0;j<k;j++)check&=dp[i][j];
      if(check)continue;
    dp[last][i]=1;
    flag=i;
    break;


   }
 }
  if(flag==-1)break;
  res+=(flag+'a');
 }

for(int i=0;i<n;i++)cout<<res[i%res.size()];tr;

}
 
 
 
int32_t main() {
    io;


   int g=1;
    // cin>>g;
    while (g--)Not_Stable();
    return 0;
}