#include<bits/stdc++.h>
#define int long long
#define pb push_back
#define tr cout<<"\n";
#define iPair pair<int,int>
#define mod 1000000007
#define INF 10000000000009
using namespace std;
const int maxn=100005;
 
  
int32_t main() {
    int t=1;
    cin>>t;
    while(t--){



int n;
int k;
cin>>n;
cin>>k;
int a[n+1];
for(int i=1;i<=n;i++)cin>>a[i];

for(int i=1;i<=n-1;i++)
{
    int val=min(a[i],k);
    a[i]-=val;
    a[n]+=val;
    k-=val;
}












for(int i=1;i<=n;i++)cout<<a[i]<<" ";
    tr;

    }
     
}