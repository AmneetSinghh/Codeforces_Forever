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

int n;cin>>n;
int a[n+1];
F(i,n)cin>>a[i];

int dp[n+1]={0};
int left=0;
for(int i=n;i>=1;i--)
{
 int cur=a[i];
 if(cur>left)left=cur;
 if(left>0)dp[i]=1;

 --left;
}




F(i,n)cout<<dp[i]<<" ";

tr;
}



int32_t main() {
    io;
    int g;cin>>g;
    while (g--)Not_Stable();
    return 0;
}