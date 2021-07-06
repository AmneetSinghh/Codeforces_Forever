#include<bits/stdc++.h>
#define int long long int
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

bool check(char val)
{
    return (val=='a' or val=='e' or val=='i' or val=='o' or val=='u');
}



int32_t main()
{
    io;
    int t=1;
//    cin>>t;
    while(t--){
/* Practice Never Ends */
string s;cin>>s;
int i=0;
int n=s.size();
int cut=0;
vector<int> vc;
while(i<n)
{
    int flag=0,have=0,c=0,j=i,doo=0;
    while(j<n and check(s[j])==false)
    {
        if(doo==1 and c==2){vc.pb(j);flag=1;break;}// break on this current;

        if(j==i)++c;
        else
        {
            ++c;
          if(s[j]!=s[j-1])
          {
              doo=1;
              if(c>=3)
              {
                  vc.pb(j);
                  flag=1;
                  break;
              }

          }
        }
        ++j;
    }


    if(flag==1)i=j;
  else  i=j+1;


}


int j=0;
for(int i=0;i<n;i++)
{
    if(j<vc.size() and vc[j]==i)cout<<" "<<s[i],++j;
    else cout<<s[i];
}





    }
}

