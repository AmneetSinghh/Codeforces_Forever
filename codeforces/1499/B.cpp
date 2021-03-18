/* not_stable but Believer */
#include<bits/stdc++.h>
#define int int
#define io ios_base::sync_with_stdio(false),cin.tie(nullptr);
#define ipair pair<int,int>
#define pb push_back
#define f(i, n) for(int i=0;i<n;i++)
#define F(i, n) for(int i=1;i<=n;i++)
#define rep(i,a,b) for(int i=a;i<=b;i++)
#define all(v) v.begin(),v.end()
#define tr cout<<"\n"
#define br break
#define oo (1<<30)
#define mod 998244353
using namespace std;
const int maxn=100005;
void Not_Stable(){
// ******************************* EITHER UP OR DOWN BUT PRACTICE NEVER ENDS ****************************************** //

string s;cin>>s;
int flag=0;
int last=-1;


int n=s.size();
std::vector<char> o,z;

for(int i=0;i<n-1;i++)
{
   if(s[i]=='1' && s[i+1]=='1')
   {
     int time=0,pos=-1,val=0,mi=INT_MAX;
     int j=i;
     while(j<n){
      if(s[j]=='1')++j;
      else break;
     }
     while(j<n){
      if(s[j]=='0')z.pb(j);
      ++j;
     }

     for(auto sd:z){
      if(pos==-1)pos=1;
      else mi=min(abs(val-sd),mi);
      val=sd;
     }

     if(mi<=1){cout<<"NO";tr;return;}
    break;

   }

 
}


cout<<"YES";


tr;

}



int32_t main() {
    io;
    int g;cin>>g;
    while (g--)Not_Stable();
    return 0;
}