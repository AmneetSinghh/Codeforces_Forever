#include<bits/stdc++.h>
#define int long long
#define io ios_base::sync_with_stdio(false),cin.tie(nullptr);
#define ipair pair<int,int>
#define pb push_back
#define F(i, n) for(int i=1;i<=n;i++)
#define all(v) v.begin(),v.end()
#define tr cout<<"\n"
#define mod 1000000007
#define inf 1000000000000000
using namespace std; 
void db(int a) {cout<<a<<"\n";}
void db(int a,int b){ cout<<a<<" "<<b<<"\n";}
void db(int a,int b,int c) {cout<<a<<" "<<b<<" "<<c<<"\n"; }
void db(int a,int b,int c,int d) {cout<<a<<" "<<b<<" "<<c<<" "<<d<<"\n";}
void db(int a,int b,int c,int d,int e){ cout<<a<<" "<<b<<" "<<c<<" "<<d<<" "<<e<<"\n";}
void db(int a,int b,int c,int d,int e,int f) {cout<<a<<" "<<b<<" "<<c<<" "<<d<<" "<<e<<" "<<f<<"\n";}
void db(int a,int b,int c,int d,int e,int f,int g) {cout<<a<<" "<<b<<" "<<c<<" "<<d<<" "<<e<<" "<<f<<" "<<g<<"\n";}
void db(int a,int b,int c,int d,int e,int f,int g,int h){ cout<<a<<" "<<b<<" "<<c<<" "<<d<<" "<<e<<" "<<f<<" "<<g<<" "<<h<<"\n"; }


int32_t main()
{
int t=1;
// cin>>t;
while(t--){
/* Practice Never Ends */





int n,m,q;
cin>>n>>m>>q;
string s,t;
cin>>s;
cin>>t;

vector<int> vc;
for(int i=0;i<n;i++){
    int flag=0;
    int k=0;
    for(int j=i;j<n;j++)
    {
       if(s[j]==t[k])++k;
       else
       {
        break;
       }

       if(k>=t.size()){flag=1;break;}
    }
    if(flag)vc.pb(i);
}

for(int i=1;i<=q;i++)
{
    int l,r;
    cin>>l>>r;
    --l,--r;
    if(r-l+1<t.size()){cout<<"0\n";continue;}
    auto lo=lower_bound(vc.begin(),vc.end(),l)-vc.begin();
    auto up=upper_bound(vc.begin(),vc.end(),r-(t.size()-1))-vc.begin();;
    --up;
    cout<<max(0,up-lo+1);
    tr;


}



















} 
}
 
 
 
 