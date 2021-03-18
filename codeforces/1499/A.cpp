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

int n,k1,k2,w,b;
cin>>n>>k1>>k2;
cin>>w>>b;
int f_w=k1;
int f_b=n-k1;
int s_w=k2;
int s_b=n-k2;

int mi=min(s_w,f_w);
w-=mi;
s_w-=mi;
f_w-=mi;
if(w>0)
{
  int ans=max(f_w,s_w)/2;
  if(ans<w){cout<<"NO\n";return;}
}




mi=min(s_b,f_b);
b-=mi;
s_b-=mi;
f_b-=mi;
if(b>0)
{
  int ans=max(f_b,s_b)/2;
  if(ans<b){cout<<"NO\n";return;}
}

cout<<"YES\n";

}



int32_t main() {
    io;
    int g;cin>>g;
    while (g--)Not_Stable();
    return 0;
}