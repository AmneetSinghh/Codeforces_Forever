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
io;
int t=1;
// cin>>t;
while(t--){
/* Practice Never Ends */


    int n,k;
    cin>>n>>k;
    vector<int> vc[100005];
    string s;cin>>s;
    for(int i=0;i<n;i++)vc[s[i]-'a'].pb(i);


    for(int i=0;i<=25;i++){
        vc[i].pb(-inf);
        vc[i].pb(inf);
    }
    for(int i=0;i<=25;i++)sort(vc[i].begin(),vc[i].end());


// for(int i=0;i<=25;i++)
// {
//     cout<<"--> "<<i;
//     tr;
//     for(auto sd:vc[i])cout<<sd<<" ";
//         tr;
// }
// cout<<"(((((((((((((((((((\n";
    F(i,k)
    {
        int l,r;
        cin>>l>>r;
        --l,--r;
        int c=0;

        for(int j=0;j<=25;j++)
        {
            auto lo=lower_bound(vc[j].begin(),vc[j].end(),l)-vc[j].begin();
            if(lo==inf)continue;
            auto ro=lower_bound(vc[j].begin(),vc[j].end(),r)-vc[j].begin();
            if(ro==inf)--ro;
            if(lo==inf)continue;
            if(vc[j][lo]==inf or vc[j][lo]>r)continue;
            // cout<<
            if(vc[j][ro]<=r);
            else --ro;


            // cout<<vc[j][lo]<<" "<<vc[j][ro]<<" "<<j<<" "<<lo<<" "<<ro;

            // tr;
            int val=(ro-lo+1)*(j+1);
            c+=val;

        }



        cout<<c;
        tr;

    }











 
}
}
 
