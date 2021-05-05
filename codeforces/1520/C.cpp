// Either up or down pracice never ends  :not_stable      //
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
int a[n+1][n+1];
memset(a,0,sizeof a);

if(n==2){cout<<"-1";tr;continue;}
int val=1;
for(int i=1;i<=n;i++){
  if(i%2==1){
    for(int j=1;j<=n;j+=2){
      a[i][j]=val;
      ++val;
    }
  }
  else{
      for(int j=2;j<=n;j+=2){
      a[i][j]=val;
      ++val;
    }  
  }
}


for(int i=1;i<=n;i++){
  for(int j=1;j<=n;j++){
    if(a[i][j]==0)a[i][j]=val,++val;
  }
}


for(int i=1;i<=n;i++){
  for(int j=1;j<=n;j++){
    cout<<a[i][j]<<" ";
  }
  tr;
}


}
}