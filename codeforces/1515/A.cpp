#include<bits/stdc++.h>
#define int long long
#define pb push_back
#define tr cout<<"\n";
#define iPair pair<int,int>
#define mod 1000000007
#define INF 500000000000000000
using namespace std;
#define MAXN   10000003
  

int32_t main() 
{
int t=1;
cin>>t;
while(t--)
{
/* Practice never ends */


    int n,x;
    cin>>n>>x;
    int a[n+1];
    for(int i=1;i<=n;i++)cin>>a[i];

    sort(a+1,a+1+n);
    // reverse(a+1,a+1+n);
int s=0;
    for(int i=1;i<=n;i++)
    {
      s+=a[i];
      if(s==x)
      {
        swap(a[i],a[n]);
        break;
      }
    }

s=0;
int flag=0;
for(int i=1;i<=n;i++){
    s+=a[i];
    if(s==x)flag=1;
}

if(flag==1)cout<<"NO";
else{
    cout<<"YES";
    tr;
    for(int i=1;i<=n;i++)cout<<a[i]<<" ";
}


tr;




}
}