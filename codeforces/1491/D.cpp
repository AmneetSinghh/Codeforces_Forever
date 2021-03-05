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

// beautiful obseravation is: al the bits either shift to right or same poisition also like 


// 100011101
// 000011111

/// naswer will be no baby,, because 01 and 11, at last not possible.
	int q;cin>>q;while(q--){
	int a,b;
	cin>>a>>b;
	if(b<a){cout<<"NO";tr;continue;}
	bool flag=1;
    for(int i=0,sum=0;i<30;i++){
    	if(a&(1<<i))sum++;
    	if(b&(1<<i))--sum;
    	if(sum<0)flag=0;
}
if(flag)cout<<"YES";
else cout<<"NO";tr;


}



}


 
 
 
 
 
 
int32_t main() {
    io;

    int g=1;
    while (g--)Not_Stable();
    return 0;
}