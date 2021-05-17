// Don't know when'll I get Blue Color :(   not_stable      //
#include<bits/stdc++.h>
#define int long long
#define pb push_back
#define tr cout<<"\n";
#define ipair pair<int,int>
#define mod 1000000007
#define INF 10000000000
using namespace std;
#define MAXN   1010

//sdf
int32_t main() 
{
ios_base::sync_with_stdio(false);
cin.tie(NULL);
int t=1;
// cin>>t;
while(t--){


int n;
cin>>n;
string s;
cin>>s;

int a[n+1]={0};
for(int i=1;i<=n;i++)a[i]=1;
while(true)
{
for(int i=1;i<=n-1;i++)
{
 if(s[i-1]=='L' and a[i]<=a[i+1])a[i]=a[i+1]+1;
 if(s[i-1]=='R' and a[i]>=a[i+1])a[i+1]=a[i]+1;
 if(s[i-1]=='=' and a[i]!=a[i+1])a[i]=max(a[i],a[i+1]),a[i+1]=max(a[i],a[i+1]);
}

// for(int i=1;i<=n;i++)cout<<a[i]<<" ";
// 	tr;
// break;
int flag=0;
for(int i=1;i<=n-1;i++)
{
 if(s[i-1]=='L' and a[i]<=a[i+1])flag=1;
 if(s[i-1]=='R' and a[i]>=a[i+1])flag=1;
 if(s[i-1]=='=' and a[i]!=a[i+1])flag=1;

}
if(!flag)break;
}


for(int i=1;i<=n;i++)cout<<a[i]<<" ";
	tr;





}
}