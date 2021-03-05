/* not_stable but Believer */
/* Practice for Expert */
#include<bits/stdc++.h>
#define int long long
#define io ios_base::sync_with_stdio(false),cin.tie(nullptr);
#define ipair pair<int,char>
#define pb push_back
#define f(i, n) for(int i=0;i<n;i++)
#define F(i, n) for(int i=1;i<=n;i++)
#define rep(i,a,b) for(int i=a;i<=b;i++)
#define pre(i,a,b) for(int i=a;i>=b;i--)
#define all(v) v.begin(),v.end()
#define tr cout<<"\n"
#define br break
#define mod 998244353
#define inf 1000000000009
using namespace std;
const int maxn=100005;

void Not_Stable()
{


int n;cin>>n;
int a[n+1];
F(i,n)cin>>a[i];
int pre[n+12]={0};

int sum=0;
for(int i=1;i<=n;i++)
{
	for(int j=i+2; j<=n && j<=i+a[i];j++)pre[j]++;
// a[i]-1 because we have to make it 1 not zero;
	if(i+1<=n && pre[i]>(a[i]-1)){
		pre[i+1]+=(pre[i]-(a[i]-1));
	}
	else
		{
			sum+=((a[i]-1)-min(pre[i],a[i]-1));
		}
}


cout<<sum;
tr;




}


 
 
 
 
 
 
int32_t main() {
    io;

    int g;cin>>g;
    while (g--)Not_Stable();
    return 0;
}