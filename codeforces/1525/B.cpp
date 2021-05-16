// Don't know when'll I get Blue Color :(   not_stable      //
#include<bits/stdc++.h>
#define int long long
#define pb push_back
#define tr cout<<"\n";
#define ipair pair<int,int>
#define mod 1000000007
#define INF 10000000000
using namespace std;
#define MAXN   100005
 



int32_t main() 
{
// ios_base::sync_with_stdio(false);
// cin.tie(NULL);
int t=1;
cin>>t;
while(t--){

int n;
cin>>n;
 int a[n+1];
 int b[n+1];
for(int i=1;i<=n;i++)cin>>a[i],b[i]=a[i];
sort(b+1,b+1+n);




if(a[1]==b[1] and a[n]==b[n])
{
  int flag=0;
  for(int i=2;i<=n-1;i++){
    if(a[i]!=b[i])flag=1;
  }

  if(flag==1)cout<<1;
  else cout<<"0";
}
else if(a[1]==b[1])
{
  cout<<"1";
}
else if(a[n]==b[n])cout<<"1";
else
{
  if(a[1]==b[n] and a[n]==b[1])cout<<"3";
  else cout<<"2";
}

tr;




}
}