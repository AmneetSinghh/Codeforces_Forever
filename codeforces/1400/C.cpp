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
#define FO(i,n) for(int i=n;i>=1;i--)
#define mod 100000000
using namespace std;
#define inf 100000000000000009
#define tr cout<<"\n" 
#define br break
#define N 10001
// directions

void Pencho()
{
 string s;int x;int i;
        cin>>s>>x;
        string ans(s.size(), '1');
        for (i=0; i<s.size(); i++)
            if (s[i]=='0')
            {
                if (i-x>=0)
                    ans[i-x]='0';
                if (i+x<s.size())
                    ans[i+x]='0';
            }
        for (i=0; i<s.size(); i++){
            if (s[i]=='1' && (i-x<0 || ans[i-x]=='0') && (i+x>=s.size() || ans[i+x]=='0'))
            {
                cout<<"-1\n";return;
            }
                }

        cout<<ans<<'\n';
}
 
 
 
 
int32_t main()
{
#ifndef ONLINE_JUDGE
 freopen("input.txt","r",stdin);
 freopen("output.txt","w",stdout);
#endif
    io;
    int g;cin>>g;
    while (g--)Pencho();
    return 0;
}