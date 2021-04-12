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
const int maxn=100005;

/*

7
2 5 7 3 1 4 6
*/
void Not_Stable()
{
int n;
cin>>n;
int a[n+1];
map<int,int> store,present;
F(i,n)cin>>a[i],store[a[i]]=i;
int ans=0;
map<int,int> maxx;
map<int,int> two;
map<int,int> one;
vector<int> vc[n+1];

// find the vacancies; or I can say the number of the elements;





for(int i=n;i>=1;i--){
  int ind=store[i];
  int l=ind,r=ind;// index is the store[i];
  while(l-1>=1 && present[l]==0 && a[l-1]<a[l])--l;
  while(r+1<=n && present[r]==0 && a[r+1]<a[r])++r;
  for(int i=l;i<=r;i++)present[i]=1;
    // now do something;
  int ff=max(ind-l,r-ind);
  int ss=min(ind-l,r-ind);
  if(ff>0)maxx[ff]++;
  if(ss>0)maxx[ss]++;
  if(ff>0 && ss>0)one[ff]++,vc[ff].pb(ss);
  if(ff==ss && ff>0)two[ff]++;
}
int hiring=0;
int mx=0;
for(auto sd:maxx){
hiring=sd.first;
mx=sd.second;
}






if(hiring>0){
  if(mx==2){
   if(two[hiring]){
    if(hiring%2==0)++ans;
   }
  }
}



cout<<ans;
tr;

}
 
 
 
 
int32_t main() {
    io;
   int g=1;
    // cin>>g;
    while (g--)Not_Stable();
    return 0;
}