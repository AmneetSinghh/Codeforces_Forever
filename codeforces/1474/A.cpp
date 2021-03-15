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

  int n;
  cin>>n;
  string b;
  cin>>b;
  string a="";
  int pre=0;
  int temp=-1;
  for(int i=0;i<b.size();i++)
  {
   pre=b[i]-'0';
   if(i==0)pre+=1,a+='1',temp=pre;
   else
   {
     if(temp==2)
     {
      if(pre==1)a+='0';
      else pre+=1,a+='1';
     }
      if(temp==1)
     {
      if(pre==1)pre+=1,a+='1';
      else a+='0';
     }
      if(temp==0)
     {
      a+='1';
      pre+=1;
     }

   }


   temp=pre;
  }



  cout<<a;
  tr;

}



int32_t main() {
    io;
    int g;cin>>g;
    while (g--)Not_Stable();
    return 0;
}