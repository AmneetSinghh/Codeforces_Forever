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
    // cin>>tt;
    while(tt--){

int n;
cin>>n;
int mi=n-1;
for(int i=2;i<=n-1;i++){
 int a=i,b=n;
 if(__gcd(a,b)!=1)continue;
 int ans=0;
 // cout<<"i-> ";
 // tr;
 while(true){
  if(a==1 || b==1)break;
  if(a>b)swap(a,b);
  int check=(b-a)/a;
  if(check){
    b-=(a*check);//9 hogya;
    ans+=check;
  }
  else{
  int t=a;
  int tt=b;

  b=a;
  a=(abs(t-tt));
  ++ans;
  }
 }
 

 mi=min(ans+(max(a,b)-1),mi);
}


cout<<mi;
tr;




















}}
