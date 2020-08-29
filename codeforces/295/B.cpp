// /Code by : Harry_Singh/
#include<bits/stdc++.h>
#define int long long
#define double double
#define io ios_base::sync_with_stdio(false),cin.tie(nullptr);
#define ipair pair<int,int>
#define pb push_back
#define f(i,n) for(int i=0;i<n;i++)
#define fo(i,n) for(int i=n;i>=0;i--)
#define F(i,n) for(int i=1;i<=n;i++)
#define f_a(a,i,n) for(int i=a;i<=n;i++)
#define f_b(a,i,b) for(int i=a;i<=b;i++)
#define FO(i,n) for(int i=n;i>=1;i--)
#define mod 998244353
using namespace std;
#define inf 100000000000000009
#define tr cout<<"\n" 
#define br break
#define N 100001
// directions

void Pencho()
{
	// flyod warshall We have to know how it's working only then you can solve this problem
	int n;
	cin>>n;
	int a[n+1][n+1],b[n+1];
	F(i,n)F(j,n)cin>>a[i][j];
	F(i,n)cin>>b[i];
	reverse(b+1,b+n+1);
	vector<int> ans;
	int c=1;
    // F(i,n)cout<<b[i]<<" ";
    // tr;
    for(int i=1;i<=n;i++){// intermidiate
    	for(int j=1;j<=n;j++){// source
    	    // if(j>c)break;
    		for(int k=1;k<=n;k++){// destination
    		// if(k>c)break;
    			int first=b[i];
    			int second=b[j];
    			int third=b[k];
    			// if(i<=c && j<=c && k<=c)
    			// {
    				if(a[second][first]+a[first][third]<a[second][third])
    				a[second][third]=a[second][first]+a[first][third];
    			// }
    			
    			if(i==c && j==c && k==c)
    			{
    				// Do O(n)^2
    				int sum=0;
    				F(l,n){
    					F(p,n){
    						if(l<=c && p<=c)sum+=a[b[l]][b[p]];
    					}
    				}
    				ans.pb(sum);
    				++c;
    			}

    		}
    	}
    }

reverse(ans.begin(),ans.end());
    for(auto sd:ans)cout<<sd<<" ";
    	tr;


}
 
 
 
int32_t main()
{
#ifndef ONLINE_JUDGE
 freopen("input.txt","r",stdin);
 freopen("output.txt","w",stdout);
#endif
    io;
    int g=1;
    while (g--)Pencho();
    return 0;
}