/* not_stable */
/* Practice to Improve */
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
#define br break
#define oo (1<<30)
#define mod 1000000007
#define inf 7e18
using namespace std; 

void Not_Stable()
{   

int n,k;
cin>>n>>k;
string s;
cin>>s;
int hash[29]={0};
for(auto sd:s)hash[sd-'a']++;



int ind=-1;
int val=-1;
int sm=-1;
for(int i=0;i<26;i++){
   if(hash[i]){sm=i;break;}
}


if(k>n){
cout<<s;
k-=n;
while(k--)cout<<char(sm+'a');

return;
}


for(int i=min(n-1,k-1);i>=0;i--){
   // present larger;
  for(char v=s[i]+1;v<='z';v++){
    if(hash[v-'a']){ind=i;val=v-'a';break;}

  }
  if(ind!=-1)break;
}

if(ind==-1){
  for(int i=0;i<k;i++)cout<<s[0];
}
else{
  for(int i=0;i<ind;i++){
    cout<<s[i];
    --k;
  }
  --k;
  cout<<char(val+'a');
  while(k--)cout<<char(sm+'a');
}


}




 
 
 
int32_t main() {
    io;
   int g=1;
    // cin>>g;
    while (g--)Not_Stable();
    return 0;
}