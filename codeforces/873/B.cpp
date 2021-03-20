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

int n;cin>>n;
string s; cin>>s;

int one[n+1],zero[n+1];
int o=0,z=0;
map<int,int> hash,hash1;
for(int i=0;i<n;i++)
{
   if(s[i]=='0')++z;
   else ++o;
   one[i]=o,zero[i]=z;
   if(!hash[one[i]-zero[i]])hash[one[i]-zero[i]]=i+1;
   if(!hash1[zero[i]-one[i]])hash1[zero[i]-one[i]]=i+1;
}
int mx=0;

for(int i=0;i<n;i++)
{
  
  int ans=one[i]-zero[i];
  int ans1=zero[i]-one[i];
  if(ans==0 || ans1==0)mx=i+1;
  else
  {
   if(one[i]>zero[i])
   {
        int val=hash[ans];
        mx=max(mx,(i+1)-val);
   }
   else
   {
        int val=hash1[ans1];
        mx=max(mx,(i+1)-val);
   }
  }

}




cout<<mx;
tr;

}
 
 

 
int32_t main() {
    io;
    int g=1;
    while (g--)Not_Stable();
    return 0;
}