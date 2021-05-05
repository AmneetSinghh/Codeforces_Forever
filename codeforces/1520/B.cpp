// Either up or down pracice never ends  :not_stable      //
#include<bits/stdc++.h>
#define int long long
#define pb push_back
#define tr cout<<"\n";
#define ipair pair<int,int>
#define mod 1000000007
#define INF 1e18
using namespace std;
#define MAXN   100005

int32_t main() 
{
int t=1;
cin>>t;
while(t--){

int n;
cin>>n;
int c=0;

if(n<=9)cout<<n;
else
{
  c=9;
  int m=10;
  int val=10;
  while(m*10<=n)
  {
    m*=10;
    c+=9;
    val*=10;
  }

  int total=0;



  while(m+val<=n)
  {
   m+=val;
   ++c;
   ++total;
  }



string pop=to_string(val);

  string s="";
  for(int i=0;i<pop.size();i++){
    s+=to_string(total+1);
  }



  int tt=stoi(s);
  if(n>=tt)++c;  




cout<<c;
tr;


}



tr;

}
}