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
#define mod 998244353
using namespace std;
const int maxn=100005;

/*
1
3 1 2 5
*/
 
void Not_Stable()
{
 
 
int n,l,r,sum;
cin>>n>>l>>r>>sum;
int L=l,R=r;
if(r<l){cout<<"-1\n";return;}
int num=(r-l)+1;
int s=0;
for(int i=1;i<=num;i++)s+=i;
int d=0;
for(int i=n,j=1;j<=num ;i--,j++)d+=i;
 
if(sum<s || sum>d)cout<<"-1\n";
else
{
  int l=1;
  int r=num;
  for(int i=1;i<=(n-num)+1;i++){


  if(s+num<sum){ s+=num;++l;++r;continue;  }
  // how much increase?
  int how=0;
  for(int j=0;j<=num;j++){
    if(s+j==sum){ how=j;break; }
  }
  //range is l to r;
  vector<int> vc;
  vector<int> left;
  int hash[n+1]={0};
  for(int j=l;j<=r;j++)vc.pb(j);
  for(int j=vc.size()-1;j>=0;j--){
    if(how){
      vc[j]=vc[j]+1;
      --how;
    }
  }
  for(auto sd:vc)hash[sd]++;
  for(int j=1;j<=n;j++){
    if(hash[j]==0)left.pb(j);
  }
  int first=0,second=0;
  for(int j=1;j<=n;j++){
    if(j>=L && j<=R)cout<<vc[first],++first;
    else cout<<left[second],++second;
    cout<<" ";
  }
  tr;
  return;
  }
 
 
  {cout<<"-1\n";return;}
}
 
 
 
}
 
 
 
 
int32_t main() {
    io;
    int g=1;
    cin>>g;
    while (g--)Not_Stable();
    return 0;
}