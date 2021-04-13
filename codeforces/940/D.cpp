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
#define inf 1e9
using namespace std; 

void Not_Stable()
{   


int n;cin>>n;
int a[n+1];
f(i,n)cin>>a[i];
string b;cin>>b;
vector<int> l,r;
int i=4;
int zeros=4;
int ones=0;
while(i<n){
  if(zeros>=4){
    if(b[i]=='0')zeros++,++i;
    else if(b[i]=='1'){
      zeros=0;
      l.pb(max({a[i],a[i-1],a[i-2],a[i-3],a[i-4]}));
      ones=4;
      i+=4;
    }
  }
  else if(ones>=4){
    if(b[i]=='1')ones++,++i;
    else if(b[i]=='0'){
      ones=0;
      r.pb(min({a[i],a[i-1],a[i-2],a[i-3],a[i-4]}));
      zeros=4;
      i+=4;
    } 
  }
}




if(l.size() && r.size())
{

int first=-inf,second=inf;
for(auto sd:l)first=max(first,sd);
for(auto sd:r)second=min(second,sd);
++first;
--second;
cout<<first<<" "<<second;
tr; 
}
else if(l.size())
{
int first=-inf,second=inf;
// handle this case carefully;make r that is 
  for(auto sd:l)first=max(first,sd);
    ++first;
  cout<<first<<" "<<second;
tr;
 
}
else{
  // both will empty; means only zeros;
int first=-inf,second=inf;
cout<<first<<" "<<first;
tr;
}




}




 
 
 
int32_t main() {
    io;
   int g=1;
    // cin>>g;
    while (g--)Not_Stable();
    return 0;
}