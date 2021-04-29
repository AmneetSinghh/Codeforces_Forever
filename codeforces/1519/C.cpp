#include<bits/stdc++.h>
#define int long long
#define pb push_back
#define tr cout<<"\n";
#define iPair pair<int,int>
#define mod 1000000007
#define INF 10000000000009
using namespace std;
const int maxn=100005;


int32_t main() {
    int t=1;
    cin>>t;
    while(t--){

int n;
cin>>n;
vector<int> vc[n+1];
vector<int> dp[n+1];
int a[n+1],s[n+1];
for(int i=1;i<=n;i++){
    cin>>a[i];
}
for(int i=1;i<=n;i++){
    cin>>s[i];
    int ind=a[i];
    vc[ind].pb(s[i]);
}

set<int> hash;
for(int i=1;i<=n;i++){
    if(vc[i].size()>=1)hash.insert(i);
}

for(int i=1;i<=n;i++){

   if(vc[i].size()>=1)
   {
       sort(vc[i].begin(),vc[i].end());
       reverse(vc[i].begin(),vc[i].end());
       int pre=0;
       for(int j=0;j<vc[i].size();j++){
        int val=vc[i][j];
        pre+=val;
        dp[i].pb(pre);
       }
   }
}
int one=1;
while(!hash.empty())
{
   int ans=0;
   vector<int> rem;
   for(auto i:hash)
   {
      if(vc[i].size()==one)rem.pb(i);

      int val=vc[i].size();
      if(val%one==0)ans+=dp[i][val-1];
      else{
        int cut=val%one;
        ans+=dp[i][val-cut-1];
      }
   }
   for(auto sd:rem){
    hash.erase(sd);
   }


cout<<ans<<" ";

   ++one;
}


while(one<=n){
    cout<<"0 ";
    ++one;
}
tr;



    }
     
}