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





int b,p,f;
int h,c;
cin>>b>>p>>f;
cin>>h>>c;


if(c>h){
   swap(p,f);
   swap(c,h);
}

b/=2;
int cost=0;
if(b>=p)b-=p,cost+=(h*p);
else cost+=(b*h),b=0;

if(b>=f)b-=f,cost+=(c*f);
else cost+=(b*c),b=0;
cout<<cost;
tr;

}



int32_t main() {
    io;
    int g=1;

    cin>>g;
    while (g--)Not_Stable();
    return 0;
}