#include<bits/stdc++.h>
#define int long long
#define pb push_back
#define tr cout<<"\n";
#define iPair pair<int,int>
#define mod 1000000007
#define INF 500000000000000000
using namespace std;
#define MAXN   10000003
  
int min1[10000002];
bool check[10000002];
int sum[10000002];
 
void init(int n=10000000)
{
     for(int i=1;i<=n;i++)
     {
          for(int j=i;j<=n;j+=i)
          {
               sum[j]+=i;
          }
     }
 
     for(int i=1;i<=n;i++)
     {
          if(sum[i]>MAXN)continue;
          if(!check[sum[i]])
          {
               check[sum[i]]=true;
               min1[sum[i]]=i;
          }
     }
}
int32_t main() 
{
int t;
cin>>t;
init();
while(t--)
{

          int x;
          cin>>x;
          if(!check[x])
          cout<<-1<<endl;
          else
          cout<<min1[x]<<endl;
}




}