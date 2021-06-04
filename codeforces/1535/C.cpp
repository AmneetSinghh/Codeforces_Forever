#include<bits/stdc++.h>
#define int long long
#define io ios_base::sync_with_stdio(false),cin.tie(nullptr);
#define ipair pair<int,int>
#define pb push_back
#define F(i, n) for(int i=1;i<=n;i++)
#define all(v) v.begin(),v.end()
#define tr cout<<"\n"
#define mod 1000000007
#define inf 1000000000000000
using namespace std; 
void db(int a) {cout<<a<<"\n";}
void db(int a,int b){ cout<<a<<" "<<b<<"\n";}
void db(int a,int b,int c) {cout<<a<<" "<<b<<" "<<c<<"\n"; }
void db(int a,int b,int c,int d) {cout<<a<<" "<<b<<" "<<c<<" "<<d<<"\n";}
void db(int a,int b,int c,int d,int e){ cout<<a<<" "<<b<<" "<<c<<" "<<d<<" "<<e<<"\n";}
void db(int a,int b,int c,int d,int e,int f) {cout<<a<<" "<<b<<" "<<c<<" "<<d<<" "<<e<<" "<<f<<"\n";}
void db(int a,int b,int c,int d,int e,int f,int g) {cout<<a<<" "<<b<<" "<<c<<" "<<d<<" "<<e<<" "<<f<<" "<<g<<"\n";}
void db(int a,int b,int c,int d,int e,int f,int g,int h){ cout<<a<<" "<<b<<" "<<c<<" "<<d<<" "<<e<<" "<<f<<" "<<g<<" "<<h<<"\n"; }




int32_t main()
{
int t=1;
cin>>t;
while(t--){
/* Practice Never Ends */
string s;
        cin >> s;
        int n = s.length();
        int dp[n + 1][2];
        dp[0][1] = 0;
        dp[0][0] = 0;
        int ans = 0;
        for (int i = 1; i <= n; i++) {
            if (s[i - 1] == '?') {
                dp[i][1] = 1 + dp[i - 1][0];
                dp[i][0] = 1 + dp[i - 1][1];
            } else if (s[i - 1] == '0') {
                dp[i][1] = 0;
                dp[i][0] = 1 + dp[i - 1][1];
            } else {
                dp[i][1] = 1 + dp[i - 1][0];
                dp[i][0] = 0;
            }
            ans += max(dp[i][0], dp[i][1]);
        }
        cout << ans;
        tr;



















} 
}
 
 
 