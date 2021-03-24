/* Harry Singh :) not_stable */
// Practice Never ends;
#include<bits/stdc++.h>
#define int long long
#define io ios_base::sync_with_stdio(false),cin.tie(nullptr);
#define ipair pair<int,int>
#define pb push_back
#define f(i, n) for(int i=0;i<n;i++)
#define F(i, n) for(int i=1;i<=n;i++)
#define rep(i,a,b) for(int i=a;i<=b;i++)
#define all(v) v.begin(),v.end()
#define tr cout<<"\n"
using namespace std;
const int maxn=2e7;
int spf[maxn]={0};
void sieve()
{
    for (int i=2; i<=maxn; i++)
    {
        if (spf[i])continue;
            for (int j=i; j<=maxn; j+=i)spf[j]++;
   }
}
void Not_Stable()
{
/* Either Up or Down Practice Never Ends */
int c,d,x;
cin>>c>>d>>x;
// A.B=x/g+d/c;// check answer; manl

// First find all factors of X;
vector<int> f;
for(int i=1;i*i<=x;i++){
   if(x%i==0){
      f.pb(i);
     if(i*i!=x)f.pb(x/i);
   }
}

int ans=0;
for(auto g:f)// iterate though all the g's
{
   if((d+g)%c)continue;
   // (x/g)+d %==c now follows;   // find hte number of prime divisors of y;
   ans+=(1ll<<spf[(d+g)/c]);

}

cout<<ans;
tr;

}

 
int32_t main() {
    io;
    sieve();
    int g;cin>>g;
    while (g--)Not_Stable();
    return 0;
}