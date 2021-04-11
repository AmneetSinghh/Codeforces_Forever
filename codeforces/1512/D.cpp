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
 
void Not_Stable()
{
 
 
int n;cin>>n;
int a[n+12];
int b=n+2;
 
for(int i=1;i<=b;i++)cin>>a[i];
sort(a+1,a+b+1);
 
int pre[n+12]={0};
for(int i=1;i<=b;i++){
  pre[i]=pre[i-1]+a[i];
}
 
if(a[b-1]==pre[b-2]){
  F(i,n)cout<<a[i]<<" ";
  tr;
}
else{

int flag=0;
for(int i=1;i<=b-1;i++){

if(a[b]==(pre[b-1]-a[i])){ 
flag=i;break;
}
}
 
 
if(flag==0)cout<<"-1\n";
else {
  F(i,b-1){
     if(i!=flag)cout<<a[i]<<" ";
  }
  tr;
}
 
 
 
}


}
 
 
 
 
int32_t main() {
    io;
    int g=1;
    cin>>g;
    while (g--)Not_Stable();
    return 0;
}