/* not_stable */
/* Practice to Improve */
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

void Not_Stable()
{



int n;
cin>>n;
int a[n+1];
int hash[100005]={0};
map<int,int> val;
F(i,n)cin>>a[i],hash[a[i]]++,val[a[i]]=i;
for(int i=1;i<=100;i++){
if(hash[i]==1){cout<<val[i]<<"\n";return;}
}

}



int32_t main() {
    io;
    int g=1;
    cin>>g;
    while (g--)Not_Stable();
    return 0;
}