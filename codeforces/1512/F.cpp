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
#define mod 998244353
#define inf 1e18
using namespace std;
const int maxn=100005;

/*
1
2 1000000000
1 1
1
*/
void Not_Stable()
{
 
 int n;
 int c;
 cin>>n;
 cin>>c;
 int a[n+1];
 int b[n+1];
 F(i,n)cin>>a[i];
 F(i,n-1)cin>>b[i];
 int mi=inf;
 int days=0;
 int sum=0;
 F(i,n){
  // check if I end this on this day;
  int val;
  if(c-sum<=0)break;
  else val=c-sum;
  int check=((val%a[i]==0)?val/a[i]:((val/a[i])+1));
  mi=min(days+check,mi);
  // move forward;
  if(i==n)break;
  if(b[i]-sum<=0){ sum-=b[i];++days;continue;}
  val=b[i]-sum;// make it;
  check=((val%a[i]==0)?val/a[i]:((val/a[i])+1));
  sum+=(check*a[i]);
  sum-=b[i];
  days+=check;
  days++;

 }





cout<<mi;
tr;

}
 
 
 
 
int32_t main() {
    io;
    int g=1;
    cin>>g;
    while (g--)Not_Stable();
    return 0;
}