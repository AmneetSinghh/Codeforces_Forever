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

int n,x,k;
cin>>n>>k>>x;
int a[n+1],hash[100000]={0};

multiset<int,greater<int>> s;
F(i,n)cin>>a[i],s.insert(a[i]);
int sum=0;
for(auto sd:s)
{
   if(k)--k,sum+=x;
   else sum+=sd;
}

cout<<sum;
tr;



}
 
 

 
int32_t main() {
    io;
    int g=1;
    while (g--)Not_Stable();
    return 0;
}