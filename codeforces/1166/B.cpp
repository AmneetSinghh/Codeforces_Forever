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

int val(int n)
{
    int cnt = -1;
    for (int i = 1; i <= sqrt(n); i++) {
        if (n % i == 0) {
        if(i>=5 and n/i>=5){cnt=i;break;}
    }


    }
    return cnt;
}
int32_t main()
{
io;
int t=1;
// cin>>t;
while(t--){
/* Practice Never Ends */

int n;cin>>n;
int get=val(n);
if(get==-1)cout<<"-1";
else
{
string res="";
int N=get;
int M=n/get;

// db(N,M);
char a[N+1][M+1];
F(i,N)F(j,M)a[i][j]='a';
a[1][1]='a';
a[1][2]='e';
a[1][3]='i';
a[1][4]='o';
a[1][5]='u';


a[2][1]='e';
a[2][2]='i';
a[2][3]='o';
a[2][4]='u';
a[2][5]='a';

a[3][1]='i';
a[3][2]='o';
a[3][3]='u';
a[3][4]='a';
a[3][5]='e';


a[4][1]='o';
a[4][2]='u';
a[4][3]='a';
a[4][4]='e';
a[4][5]='i';

a[5][1]='u';
a[5][2]='a';
a[5][3]='e';
a[5][4]='i';
a[5][5]='o';

for(int j=6;j<=M;j++)
{
	// in top 5 positions. add a e i o u;
a[1][j]='u';
a[2][j]='a';
a[3][j]='e';
a[4][j]='i';
a[5][j]='o';
}

for(int j=6;j<=N;j++)
{
	// in top 5 positions. add a e i o u;
a[j][1]='u';
a[j][2]='a';
a[j][3]='e';
a[j][4]='i';
a[j][5]='o';
}
// F(i,N){
// 	F(j,M)cout<<a[i][j]<<" ";
// 	tr;
// }

F(i,N)F(j,M)res+=a[i][j];
cout<<res;
tr;

}













}
}



