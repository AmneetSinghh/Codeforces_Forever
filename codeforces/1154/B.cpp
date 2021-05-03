#include<bits/stdc++.h>
#define int long long
#define pb push_back
#define tr cout<<"\n";
#define iPair pair<int,int>
#define mod 1000000007
#define INF 500000000000000000
using namespace std;
#define MAXN   10000003
  // Function to check if x is power of 2

int32_t main() 
{
int t=1;
// cin>>t;
while(t--){



  int n;
  cin>>n;
  int a[n+1];
  int ans=-1;
  for(int i=1;i<=n;i++)cin>>a[i];
  sort(a+1,a+1+n);
  for(int d=0;d<=500;d++){
      int first=a[1]+d;
      int second=a[1]-d;
      int third=a[1];
      int flag=0;
      int no=0;
      for(int i=1;i<=n;i++){
        if(a[i]==first || a[i]-d==first || a[i]+d==first);
        else {no=1;break;}
      }
      if(no==0){ans=d;break;}
      no=0;
      for(int i=1;i<=n;i++){
        if(a[i]==second || a[i]-d==second || a[i]+d==second);
        else {no=1;break;}
      }
      if(no==0){ans=d;break;}
       no=0;
       for(int i=1;i<=n;i++){
        if(a[i]==third || a[i]-d==third || a[i]+d==third);
        else {no=1;break;}
      }

      if(no==0){ans=d;break;}

  }



cout<<ans;



tr;







}

}