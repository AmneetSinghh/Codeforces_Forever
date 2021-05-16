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
 int n,m;
 string s;
int a[MAXN];
int calc(int start)// count is the number of assigned;
{
int c=0;
for(int i=0;i<n;i++)
{
	if(a[i]!=start)++c;
	start^=1;
}
return c;

}



int32_t main() 
{
ios_base::sync_with_stdio(false);
cin.tie(NULL);
int t=1;
// cin>>t;
while(t--){

// memset(dp,-1,sizeof dp);
cin>>n;
cin>>s;

for(int i=0;i<n;i++)
{
	a[i]=s[i]-'0';
}

cout<<min(calc(0),calc(1));
tr;


}
}