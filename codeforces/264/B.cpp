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
#define N 100005
// directions
int xx[5]={0,0,1,-1};
int yy[5]={1,-1,0,0};
vector<int > G[N],L[N];
int number[N]={0};
int c=1;
bool is_prime[N+1]; 

void sieve()
{
    memset(is_prime, true, sizeof(is_prime)); 
  

    is_prime[1]=false;
    for (int p=2; p*p<=N; p++) 
    { 
        if (is_prime[p] == true) 
        { 
            for (int i=p*2; i<=N; i += p) 
                is_prime[i] = false; 
        } 
    } 
    for(int i=2;i<=N;i++)
    {
         if(is_prime[i]){number[i]=c,++c;}
    }


}
void we_have_choices()
{
    int n;
    cin>>n;
    int a[n+1];
    F(i,n)cin>>a[i];
    int dp[N+23];
    F(i,N)dp[i]=0;
    for(int i=1;i<=n;i++)
    {
           int val=a[i];
           int mx=0;
           int flag=0;
           for(int j=2;j<=sqrt(val);j++)
           {
             if(val%j==0)
             {
                 if(is_prime[j])mx=max(mx,dp[number[j]]);
                 if(is_prime[val/j])mx=max(mx,dp[number[val/j]]);

             }
           }
              for(int j=2;j<=sqrt(val);j++)
              {
                if(val%j==0)
                {
                    flag=1;
                 if(is_prime[j])dp[number[j]]=mx+1;
                 if(is_prime[val/j])dp[number[val/j]]=mx+1;

                 }
              }

              if(!flag)dp[number[val]]=1;// this is prime


    }
    int c=0;
    F(i,N)c=max(c,dp[i]);
    if(c==0)cout<<"1\n";
    else cout<<c<<"\n";



  


}





int32_t main()
{
#ifndef ONLINE_JUDGE
 freopen("input.txt","r",stdin);
 freopen("output.txt","w",stdout);
#endif
    io;
    int t=1;
    sieve();
    while (t--)we_have_choices();
    return 0;
}