/* not_stable but Believer */
#include<bits/stdc++.h>
#define int long long
#define io ios_base::sync_with_stdio(false),cin.tie(nullptr);
#define ipair pair<int,int>
#define pb push_back
#define f(i, n) for(int i=0;i<n;i++)
#define F(i, n) for(int i=0;i<n;i++)
#define rep(i,a,b) for(int i=a;i<=b;i++)
#define all(v) v.begin(),v.end()
#define tr cout<<"\n"
#define br break
#define mod 998244353
#define inf 1000000000009
using namespace std;
const int maxn=100005;

int k;
// lets

void merge(int a[],int l,int mid,int r){
   std::vector<int> vc;
   for(int i=mid;i<r;i++)vc.pb(a[i]);
   for(int i=l;i<mid;i++)vc.pb(a[i]);
   for(int i=l,j=0;i<r;i++,j++)a[i]=vc[j];
}
void merge_sort(int a[],int l,int r)
{

      if(r-l==1)return;
      sort(a+l,a+r);
      reverse(a+l,a+r);
      int mid=(l+r)/2;
      if(k>=2)
      {
      k-=2;
      merge_sort(a,l,mid);
      merge_sort(a,mid,r);
      }
      else reverse(a+l,a+r);
}

void Not_Stable(){          
/*   Practice Never Ends Either Up or Down */
int n;
cin>>n>>k;
if(k>n*2-1 || k%2==0)cout<<"-1";
else
{
  int a[n+1];
  F(i,n)a[i]=i;
  --k;
  merge_sort(a,0,n);
  F(i,n)cout<<a[i]+1<<" ";

}


tr;


}
 
 

 
int32_t main() {
    io;
    int g=1;
    while (g--)Not_Stable();
    return 0;
}