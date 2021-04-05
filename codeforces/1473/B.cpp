#include<bits/stdc++.h>
#define int long long
#define tr cout<<"\n";
#define iPair pair<int,int>
#define INF 10000000000009
#define pb push_back
#define un unordered_map
using namespace std;
const int maxn=100005;
int gcd(int a, int  b)
{
  if (b == 0)
    return a;
  return gcd(b, a % b);
}
 
// Function to return LCM of two numbers 
int  lcm(int a, int b)
{
    return (a / gcd(a, b)) * b;
}
  

bool check(string s,string t){
  int i=0,j=0;
  int flag=0;

  if(t.size()%s.size()!=0)return false;
  while(i<t.size()){
  if(s[j]==t[i]){
    ++i,++j;
  }
  else {flag=1;break;}
  if(j>=s.size())j=0;
}

if(flag==0)return true;
return false;

}

int32_t main() {
    int tt=1;
    cin>>tt;
    while(tt--){

string s,t;
cin>>s;
cin>>t;
int flag=0;

if(s.size()>t.size())swap(s,t);
int i=0;
int j=0;
string val="";
for(int i=0;i<s.size();i++){
  val+=s[i];
  if(check(val,t) && check(val,s)){flag=1;break;}
}


if(flag==1){
  for(int i=1;i<=lcm(s.size(),t.size())/val.size();i++)cout<<val;
}
else cout<<"-1";

tr;











}}
