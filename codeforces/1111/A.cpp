// Don't know when'll I get Blue Color :(   not_stable      //
#include<bits/stdc++.h>
#define int long long
#define pb push_back
#define tr cout<<"\n";
#define ipair pair<int,int>
#define mod 998244353
#define INF 1e18
using namespace std;
#define MAXN   100005



bool isvowel(char s){
  if(s=='u' || s=='a' || s=='e' || s=='i' || s=='o')return true;
  return false;
}

bool iscon(char s){
  if(s=='u' || s=='a' || s=='e' || s=='i' || s=='o')return false;
  return true;
}
int32_t main() 
{
int t=1;
// cin>>t;
while(t--){
/* After making logic think for best and easy way of implementation, don't be rush  */




string s;cin>>s;
string t;cin>>t;
int flag=0;
if(s.size()!=t.size()){cout<<"NO";continue;}
for(int i=0;i<s.size();i++){

if(isvowel(s[i]) && isvowel(t[i]));
else if(iscon(s[i]) && iscon(t[i]));
else flag=1;
}



if(flag==1)cout<<"NO";
else cout<<"YES";


tr;

}}




