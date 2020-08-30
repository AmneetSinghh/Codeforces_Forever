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

	int k,ans=0;
	string s,t;
	cin>>s>>t>>k;
	set<int> unique[1600];
	for(int i=0;i<s.length();i++){
		int res=0;
		int c=0;
		for(int j=i;j<s.size();j++){
		  if(t[s[j]-'a']=='0')++c;
		  if(c>k)break;
          res=res*117+s[j];
          unique[j-i+1].insert(res);
		}

	}


	for(int i=1;i<=1500;i++)
		ans+=unique[i].size();
	cout<<ans;
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