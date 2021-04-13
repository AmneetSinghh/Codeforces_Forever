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

void Not_Stable()
{   

int n,d;
cin>>n>>d;
int a[n+1];
F(i,n)cin>>a[i];


sort(a+1,a+1+n);
int dis=INT_MAX;
for(int i=1;i<=n;i++){
  int flag=0;
   for(int j=i;j<=n;j++){
    if(a[j]-a[i]>d){flag=1;dis=min(dis,(i-1)+(n-(j-1)));break;}
   }

   if(flag==0)dis=min(dis,i-1);
}



cout<<dis;
tr;

}




 
 
 
int32_t main() {
    io;
   int g=1;
    // cin>>g;
    while (g--)Not_Stable();
    return 0;
}