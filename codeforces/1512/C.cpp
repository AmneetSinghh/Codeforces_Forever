/* not_stable */
/* Practice to Improve */
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

void Not_Stable()
{

int a,b;
cin>>a>>b;
int aaa=a;
int bbb=b;
int flag=0;

string s;cin>>s;
for(int i=0;i<s.size();i++){
  if(s[i]=='0')a--;
  else if(s[i]=='1')b--;
}

if(a<0 || b<0)flag=1;


int i=0;
int n=s.size();
int j=n-1;


if(n==1){
    if(s[0]=='?'){
      if(a)s[0]='0';
      else if(b)s[0]='1';
      else flag=1;
    }

    if(flag){cout<<"-1\n";return;}
    cout<<s;
    tr;
    return;
}
while(i<=n/2){
  if(i>=j)break;
  if((s[i]=='0' && s[j]=='0') || (s[i]=='1' && s[j]=='1') || (s[i]=='?' && s[j]=='?'));
  else if((s[i]=='0' && s[j]=='1')   || (s[i]=='1' && s[j]=='0'))flag=1;
  else{
    if(s[i]=='1' || s[j]=='1'){
      s[i]='1';
      s[j]='1';
      --b;
    }
    else{
       s[i]='0';
       s[j]='0';
      --a;
    }
  }

  ++i,--j;
}




// cout<<s<<" "<<a<<" "<<b;
// tr;

if(a<0 || b<0)flag=1;


if(flag==1){cout<<"-1\n";return;}

i=0;
j=n-1;
while(i<=n/2){


if(i>j)break;
if(i==j){
  if(s[i]=='?'){
    if(a)s[i]='0',--a;
    else if(b) s[i]='1',--b;
    else flag=1;
  }

  break;

}


 if(s[i]!='?');
else{
    if(a>=2){
      s[i]='0';
      s[j]='0';
      a-=2;
    }
    else if(b>=2){
        s[i]='1';
        s[j]='1';
      b-=2;
    }
    else flag=1;
}



++i,--j;
}



// cout<<a<<" "<<b<<" "<<" "<<s<<" "<<flag;
// tr;


if(flag==1){cout<<"-1\n";return;}



int aa=0;
int bb=0;

for(int i=0;i<n;i++){
  if(s[i]=='0')++aa;
  else ++bb;
}

i=0,j=n-1;
while(i<=n/2){
  if(i>=j)break;

  if(s[i]!=s[j])flag=1;

  ++i,--j;
}


// cout<<aa<<" "<<bb<<" "<<flag;
// tr;
if(aa==aaa && bb==bbb  && flag==0)cout<<s;
else cout<<"-1";


tr;
}



int32_t main() {
    io;
    int g=1;
    cin>>g;
    while (g--)Not_Stable();
    return 0;
}