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
const int maxn=300005;

void Not_Stable(){
/* Either Up or Down Practice Never Ends */
   int n;cin>>n;
   
 while(n>1)
 {

    if(n%2020==0){cout<<"YES";tr;return;}
    n-=2021;
        if(n%2020==0){cout<<"YES";tr;return;}

 }



 cout<<"NO";
 tr;

}


 
int32_t main() {
    io;
    int g;cin>>g;
    while (g--)Not_Stable();
    return 0;
}