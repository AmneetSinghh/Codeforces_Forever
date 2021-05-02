#include<bits/stdc++.h>
#define int long long
#define pb push_back
#define tr cout<<"\n";
#define iPair pair<int,int>
#define mod 1000000007
#define INF 500000000000000000
using namespace std;
#define MAXN   10000003
  // Function to check if x is power of 2

int32_t main() 
{
int t=1;
cin>>t;



while(t--)
{
/* Practice never ends */




int n,l,r;
cin>>n>>l>>r;
int a[n+1];


for(int i=1;i<=n;i++)
{
    cin>>a[i];
}

int L[n+1]={0},R[n+1]={0};
for(int i=1;i<=l;i++)L[a[i]]++;
for(int i=l+1;i<=n;i++)R[a[i]]++;
int ans=0;
int lo=l,ro=r;


for(int i=1;i<=n;i++)
{
    int c=L[i];
    int val=i;

    // cout<<c<<" ";
    while(c>=1)
    {
        if(R[val]>=1)R[val]--,c--,lo--,ro--;
        else break;
    }

    L[i]=c;
}



// cout<<lo<<" "<<ro;
// tr;


if(lo<ro)
{
  int flag=0;
  for(int i=1;i<=n;i++)
  {
    auto c=R[i];
    auto val=i;
    // cout<<val<<" "<<c<<"one-> ";
    // tr;
    while(c>=2)
    {
        ans++;
        ro-=2;
        c-=2;
        if(lo==ro){flag=1;break;}
    }

    // cout<<lo<<" "<<ro<<" two-> "<<c<<" "<<ans;
    // tr;
    R[i]=c;
    if(flag==1)break;
  }
}
else if(ro<lo)
{
  int flag=0;
  for(int i=1;i<=n;i++)
  {
    auto c=L[i];
    auto val=i;
    while(c>=2)
    {
        ans++;
        lo-=2;
        c-=2;
        if(lo==ro){flag=1;break;}
    }
    L[i]=c;
    if(flag==1)break;
  }
}
else {cout<<lo<<"\n";continue;}

// lo=2;
// ro=3;




// cout<<"final-> "<<lo<<" "<<ro;
// tr;

while(lo!=ro && lo>=1 && ro>=1)
{
    ans++;
    ro--;
    lo--;
}

// cout<<ans<<" "<<lo;
// tr;
cout<<ans+max(lo,ro);
tr;


}
}