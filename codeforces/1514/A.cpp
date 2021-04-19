#include<bits/stdc++.h>
#define int long long
#define tr cout<<"\n";
#define iPair pair<int,int>
#define INF 10000000000009
using namespace std;
const int maxn=100005;
 
  
int32_t main() {
    int t=1;
    cin>>t;
    while(t--){


int n;cin>>n;
int a[n+1];
for(int i=1;i<=n;i++)cin>>a[i];
int c=0;
int flag=0;
for(int i=1;i<=n;i++)
{
  int val=sqrt(a[i]);
  if(val*val==a[i]);
  else {cout<<"YES";flag=1;break;}
}

if(flag==0)cout<<"NO";


tr;








 
 
    }
     
}