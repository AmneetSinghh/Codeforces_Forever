// /Code by : Harry_Singh/
#include<bits/stdc++.h>
#define int long long
#define double double
#define io ios_base::sync_with_stdio(false),cin.tie(nullptr);
#define ipair pair<int,int>
#define pb push_back
#define f(i,n) for(int i=0;i<n;i++)
#define fo(i,n) for(int i=n;i>=0;i--)
#define F(i,n) for(int i=1;i<=n;i++)
#define f_a(a,i,n) for(int i=a;i<=n;i++)
#define f_b(a,i,b) for(int i=a;i<=b;i++)
#define FO(i,n) for(int i=n;i>=1;i--)
#define mod 1000000007
using namespace std;
#define inf 100000000000000009
#define tr cout<<"\n" 
#define br break
#define N 100001
// directions

void Pencho()
{
   int n;
   cin>>n;
   vector<int> vc;
   int mx=0,a;
   F(i,n)cin>>a,vc.pb(a),mx=max(a,mx);
   int ans=0;
   vc.pb(inf);
   sort(vc.begin(),vc.end());
   map<int,int> hash;
   for(int i=0;i<vc.size()-1;i++){
    int rem=0;
    if(hash[vc[i]])continue;
    else hash[vc[i]]++;
    int flag=0;
    for(int j=2*vc[i];;j+=vc[i])
    {
      int l=lower_bound(vc.begin(),vc.end(),j-1)-vc.begin();
      if(l==vc.size()-1 && flag==0)
      {
        flag=1;
        if(vc[l]>j-1)--l;
        rem=max(rem,vc[l]%vc[i]);
      }
      else if(l==vc.size()-1 && flag==1)break;
      else
      {
        if(vc[l]>j-1)--l;
        rem=max(rem,vc[l]%vc[i]);
      }
      
    }
    ans=max(ans,rem);
   }


   cout<<ans;
   tr;


}


    


 
 
 
int32_t main()
{
#ifndef ONLINE_JUDGE
 freopen("input.txt","r",stdin);
 freopen("output.txt","w",stdout);
#endif
    io;
    int g=1;
    while (g--)Pencho();
    return 0;
}