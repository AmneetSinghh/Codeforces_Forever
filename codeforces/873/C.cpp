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
#define mod 998244353
#define inf 1000000000009
using namespace std;
const int maxn=100005;

void Not_Stable(){          
/*   Practice Never Ends Either Up or Down */

int n,m,k;
cin>>n>>m>>k;
int a[n+1][m+1];
F(i,n)F(j,m)cin>>a[i][j];
int res=0;
int change=0;
F(i,m)
{
   int b[n+1];
   for(int j=1;j<=n;j++)b[j]=a[j][i];
   int hash[101];
   memset(hash,-1,sizeof(hash));
   int ones=0;

   // F(j,n)cout<<b[j]<<" ";
   // tr;

   for(int j=1;j<=n;j++)
   {
      if(b[j]==1)
      {
         int range=j+k-1;

         int ans=0;
         for(int l=j; l<=n && l<=range;l++)ans+=b[l];
         if(hash[ans]==-1){
           hash[ans]=ones;
         }
        // cout<<j<<" "<<range<<" "<<"hreck-> "<<ans<<" "<<ones<<" "<<hash[ans];
        // tr;

         ones++;
      }
   }

   // cout<<"hash\n";

   // F(j,k)cout<<hash[j]<<" ";
   // tr;

   for(int j=k;j>=1;j--)
   {   
      if(hash[j]>=0){res+=j;change+=(hash[j]);break;}
   }


// cout<<res<<" "<<change;
// tr;

}

cout<<res<<" "<<change;








tr;


}
 
 

 
int32_t main() {
    io;
    int g=1;
    while (g--)Not_Stable();
    return 0;
}