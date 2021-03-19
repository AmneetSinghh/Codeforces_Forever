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
bool isPowerOfTwo(int n)
{
   if(n==0)
   return false;
 
   return (ceil(log2(n)) == floor(log2(n)));
}

int check(int n)
{
  if(isPowerOfTwo(n))return log2(n);
  return log2(n)+1;
}


void Not_Stable(){


// ******************************* EITHER UP OR DOWN BUT PRACTICE NEVER ENDS ****************************************** //
int n,m;;cin>>n>>m;
int a[n+112];
map<int,int> hash;
set<int> s;
vector<int> vc;
F(i,n)cin>>a[i],hash[a[i]]++,s.insert(a[i]);
for(auto sd:s)vc.pb(hash[sd]);// 2 3 4 5 5  1  1 1
m*=8;
int mi;
F(i,n){
  if(check(i)*n>m)break;
  mi=i; // required;
}
if(vc.size()<=mi){cout<<"0\n";return;}
int change=vc.size()-mi;
int i=0,sum=0;
while(i<change){
 sum+=vc[i];
 ++i;
}
mi=sum;
--i;
int j=vc.size()-1;
for(int d=1;d<=change;d++)
{
  sum-=vc[i];
  --i;
  sum+=vc[j];
  --j;
  mi=min(sum,mi);

}
cout<<mi;
tr;

}



int32_t main() {
    io;
    int g=1;
    while (g--)Not_Stable();
    return 0;
}

