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
cin>>t;
while(t--){
/* Practice Never Stops */



string s;cin>>s;
map<char,int> hash;
for(auto sd:s) hash[sd]++;

vector<char> vc;
string res="";
for(auto sd:hash){
	vc.push_back(sd.first);
}

int start=vc.size()/2;
if(vc.size()%2==0)start--;

int i=start;
int j=vc.size()-1;

if(vc.size()==3)
{
    int i=vc.size()/2;
    char pre=vc[i+1]+1;
    char next=vc[i+1]-1;
   string res="";
    if(vc[i]==pre or vc[i]==next)
    {
        for(int i=0;i<hash[vc[1]];i++) res+=vc[1];
 		for(int i=0;i<hash[vc[0]];i++) res+=vc[0];
  		for(int i=0;i<hash[vc[2]];i++) res+=vc[2];
    }
    else
    {
        for(int i=0;i<hash[vc[1]];i++) res+=vc[1];
 		for(int i=0;i<hash[vc[2]];i++) res+=vc[2];
  		for(int i=0;i<hash[vc[0]];i++) res+=vc[0];
    }




// cout<<res<<"\n";
// continue;

int flag=0;
for(int i=1;i<res.size();i++)
{
	char pre=res[i-1]-1;
	char next=res[i-1]+1;

	if(res[i]!=pre and res[i]!=next);
	else flag=1;
}
if(flag)cout<<"No answer";
else cout<<res;


tr;
continue;






    // check;
}










while(i>=0)
{
   int have=hash[vc[i]];
   for(int k=0;k<have;k++)res+=vc[i];

   	if(j>start)
   	{
   int have=hash[vc[j]];
   for(int k=0;k<have;k++)res+=vc[j];


   	}

   --i,--j;
}


int flag=0;
for(int i=1;i<res.size();i++)
{
	char pre=res[i-1]-1;
	char next=res[i-1]+1;

	if(res[i]!=pre and res[i]!=next);
	else flag=1;
}
if(flag)cout<<"No answer";
else cout<<res;


tr;


}
}