// Don't know when'll I get Blue Color :(   not_stable      //
#include<bits/stdc++.h>
#define int long long
#define ld long double
#define pb push_back
#define tr cout<<"\n";
#define ipair pair<int,int>
#define mod 998244353
#define INF 1e18
using namespace std;
#define MAXN   100005



int32_t main() 
{
int t=1;
// cin>>t;
while(t--){
/* After making logic think for best and easy way of implementation, don't be rush  */
int n;cin>>n;
int val=0;
int mx=pow(2,32)-1;
int i=1;
int flag=0;
multiset<int> vc1;
vector<int> vc;
while(i<=n)
{
   string s;
   int time;
   cin>>s;
    
    if(s=="add" and flag==0)
    {
      if(vc.size()==0)++val;
      else
      {
         int ans=1;
         if(vc1.size()>=50){flag=1;continue;}
         for(auto lo:vc1){
           ans*=lo;
          if(val+ans>mx){flag=1;break;}
         }
         val+=ans;
      }
    }
    else
    {
      if(s=="for")
      {
        cin>>time;
        if(flag==0)
        {
        vc.push_back(time);
        if(time!=1)vc1.insert(time);    
        }

      }
      else
      {
        if(flag==0)
        {
        int os=vc[vc.size()-1];
        vc.pop_back();
        if(os!=1)
        {
         multiset<int>::iterator it, it1;
         it = vc1.find(os);
         it1 = it;
         it1++;
         vc1.erase (it, it1);         
        }
      
        }

      }



    }
    ++i;
    if(val>mx)flag=1;

}


if(flag==1)cout<<"OVERFLOW!!!";
else cout<<val;
tr;



}}
 