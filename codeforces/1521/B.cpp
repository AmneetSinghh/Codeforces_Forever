// Don't know when'll I get Blue Color :(   not_stable      //
#include<bits/stdc++.h>
#define int long long
#define pb push_back
#define tr cout<<"\n";
#define ipair pair<int,int>
#define mod 1000000007
#define INF 1e18
using namespace std;
#define MAXN   100005
 

 
int32_t main() 
{
int t=1;
cin>>t;
while(t--){
int n;
cin>>n;
int a[n+1];
int mi=INF;
for(int i=1;i<=n;i++){
  cin>>a[i];
}



if(n==1){
  cout<<"0";
  tr;
  continue;
}

int first=1234873603;
int second=1234873649;
cout<<n-1;
tr;


for(int i=2;i<=n;i++){
a[1]=min(a[i],a[1]);
if(i%2==0)
{
a[i]=first;
}
else
{
  a[i]=second;
}
cout<<1<<" "<<i<<" "<<a[1]<<" "<<a[i];
tr;
}


// cout<<"final\n";
// for(int i=1;i<=n;i++)cout<<a[i]<<" ";
//   tr;







}
}