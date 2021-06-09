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
int n,k;
const int maxn=5001;
int save[maxn]={0};
int dp[maxn][maxn];
int a[maxn];
int dfs(int i,int d)
{
  // db(i,d);
  if(i>n or d==k)return 0;
  if(dp[i][d]!=-1)return dp[i][d];
  dp[i][d]=dfs(i+1,d);
 dp[i][d]=max(dp[i][d],(save[i]-i)+dfs(save[i],d+1));
return dp[i][d];
}
int32_t main()
{
int t=1;
cin>>t;
while(t--){
/* Practice Never Ends */
int n;
    cin >> n;
   int a[n+1];
   F(i,n)cin>>a[i];
    int flag=0;
    set<int> cur = {-inf, inf};
    cur.insert(a[1]);
    auto previous_median = next(cur.begin());

    // every time we just have to insert 2 elements, so it menas, currnet element is the mediahm, 
    // so next  element whihc will be the mediam will not be greater than its next, same for previous vice versa, see the xample"
    // if curremt situation is 0 1 2 3 4, 2 is median, so the next values, can be less than 3 equal to 3, but can;t be greater than 3,
    for (int i = 2; i <=n; i++) {
      // it is hte prevous mediam
        if (a[i] > *next(previous_median)) {
            cout << "NO\n";
            flag=1;
            break;
        }
        if (a[i] < *prev(previous_median)) {
            cout << "NO\n";
            flag=1;
            break;
        }
        cur.insert(a[i]);
        previous_median = cur.lower_bound(a[i]);
    }
  if(flag==0)cout<<"YES\n";







} 
}
 
 
 