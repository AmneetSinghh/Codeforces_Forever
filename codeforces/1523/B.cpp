#include<bits/stdc++.h>
#define int long long
#define io ios_base::sync_with_stdio(false),cin.tie(nullptr);
#define ipair pair<int,int>
#define pb push_back
#define F(i, n) for(int i=1;i<=n;i++)
#define all(v) v.begin(),v.end()
#define tr cout<<"\n"
#define mod 1000000007
#define inf 1e18
using namespace std; 
void db(int a) {cout<<a<<"\n";}
void db(int a,int b){ cout<<a<<" "<<b<<"\n";}
void db(int a,int b,int c) {cout<<a<<" "<<b<<" "<<c<<"\n"; }
void db(int a,int b,int c,int d) {cout<<a<<" "<<b<<" "<<c<<" "<<d<<"\n";}
void db(int a,int b,int c,int d,int e){ cout<<a<<" "<<b<<" "<<c<<" "<<d<<" "<<e<<"\n";}
void db(int a,int b,int c,int d,int e,int f) {cout<<a<<" "<<b<<" "<<c<<" "<<d<<" "<<e<<" "<<f<<"\n";}
void db(int a,int b,int c,int d,int e,int f,int g) {cout<<a<<" "<<b<<" "<<c<<" "<<d<<" "<<e<<" "<<f<<" "<<g<<"\n";}
void db(int a,int b,int c,int d,int e,int f,int g,int h){ cout<<a<<" "<<b<<" "<<c<<" "<<d<<" "<<e<<" "<<f<<" "<<g<<" "<<h<<"\n"; }



const int maxn=100005;



vector<pair<int,pair<int,int>>> vc;
int a[100005];



void second_case(int i,int j)
{
  a[j]=a[j]-a[i];
  vc.push_back({2,{i,j}});
}

void first_case(int i,int j)
{
  a[i]=a[i]+a[j];
  vc.push_back({1,{i,j}});
}
int32_t main()
{
int t=1;
cin>>t;
while(t--){
/* Practise Never Ends */
int n;
cin>>n;
for(int i=1;i<=n;i++)cin>>a[i];
for(int i=1;i<=n;i+=2)
{

  {
  	// first case;
  	second_case(i,i+1);
  	first_case(i,i+1);
  	second_case(i,i+1);
  	first_case(i,i+1);
  	second_case(i,i+1);
  	first_case(i,i+1);
    
  }

}

// F(i,n)cout<<a[i]<<" ";
// tr;

cout<<vc.size();
tr;
for(auto sd:vc)db(sd.first,sd.second.first,sd.second.second);

vc.clear();
 
} 
}
 
 
 

 
 
 
 