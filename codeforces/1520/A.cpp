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

string s;cin>>s;
int flag=0; 
int count=0;
map<int,int> hash;
for(auto sd:s)hash[sd]++;
  int val=1;
for(int i=0;i<n-1;i++)
{
 if(s[i]==s[i+1]){
  ++val;
 }
 else{
   if(hash[s[i]]!=val)flag=1;
   val=1;
 }
}

if(hash[s[n-1]]!=val)flag=1;


if(flag==1)cout<<"NO";
else cout<<"YES";



tr;

}
}