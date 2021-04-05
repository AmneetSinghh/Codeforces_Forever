#include<bits/stdc++.h>
#define int long long
#define tr cout<<"\n";
#define iPair pair<int,int>
#define INF 10000000000009
#define pb push_back
#define un unordered_map
using namespace std;
const int maxn=100005;



int32_t main() {
    int tt=1;
    cin>>tt;
    while(tt--){


int n,d;
cin>>n>>d;
int a[n+1];
for(int i=1;i<=n;i++)cin>>a[i];
sort(a+1,a+1+n);

int flag=0;
for(int i=1;i<=n;i++){
  if(a[i]>d){
    if(a[1]+a[2]>d)flag=1;
  }
}

if(flag)cout<<"NO";
else cout<<"YES";
tr;




}}
