// /Code by : Harry_Singh/
#include<bits/stdc++.h>
#define int long long int 
#define io ios_base::sync_with_stdio(false),cin.tie(nullptr);
#define ipair pair<int,int>
#define pb push_back
#define f(i,n) for(int i=0;i<n;i++)
#define fo(i,n) for(int i=n;i>=0;i--)
#define F(i,n) for(int i=1;i<=n;i++)
#define FO(i,n) for(int i=n;i>=1;i--)
#define mod 1000000007
using namespace std;
#define inf 100000000000000009
#define tr cout<<"\n" 
#define N 200001
// directions
int xx[5]={0,0,1,-1};
int yy[5]={1,-1,0,0};
vector<int > G[N],L[N];

int pos[N+23];
int  dp[N+23];
void we_have_choices()
{
    int n,k,ans;
    string s;
    cin >> n >> k;
    cin>>s;
    pos[n + 1] = n + 1;
    
   // Precomputation Because, we want to connect to the routers which is so much close to the left and its range is far away as possible.
    for (int i=n; i>=0; --i){
        if (s[i - 1] == '1') pos[i] = i;
        else pos[i] = pos[i + 1];
    }


    int one=1;
    for (int i=1; i <= n; ++i)
    {
        dp[i] = dp[i-1]  + i;// just not install a router in this position just connect to the previous room
        ans = max (one, i - k);// check if their is a routher in the position   (i-k - i+k)// if their is then this'll be connected
        
        if (pos[ans] == n+1 || pos[ans] > i + k) continue;// this means no routher in the range (i-k - i+k)
        dp[i] = min (dp[i], pos[ans] + dp[max (one, pos[ans] - k) - 1]);// connect to the leftest routher   baby
    }
    
    
    cout << dp[n];
    
    
    //000111011100
    // 2 bro  check for two baby               4>4// no baby
    // 3 brother.
    // 1 3 6 
}





int32_t main()
{
// #ifndef ONLINE_JUDGE
//  freopen("input.txt","r",stdin);
//  freopen("output.txt","w",stdout);
// #endif
    io;
    int t=1;
    while (t--)we_have_choices();
    return 0;
}