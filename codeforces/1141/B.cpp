#include<bits/stdc++.h>
#define int long long
#define pb push_back
#define tr cout<<"\n";
#define ipair pair<int,int>
#define mod 1000000007
#define INF 500000000000000000
using namespace std;
#define MAXN   100005




int32_t main() 
{
int t=1;
// cin>>t;
while(t--){
  
int n;
cin>>n;
int a[n*3+1];
for(int i=1;i<=n;i++)cin>>a[i];
  for(int i=n+1,j=1;i<=n*2;i++,j++)a[i]=a[j];


int one=0;
int mx=0;
for(int i=1;i<=n*2;i++)
{
  if(a[i]==1)++one;
  else{
    mx=max(one,mx);
    one=0;
  }
}
mx=max(one,mx);
if(mx>=n)mx=n;
cout<<mx;
tr;





}
}
