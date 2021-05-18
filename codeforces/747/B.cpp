// Don't know when'll I get Blue Color :(   not_stable      //
#include<bits/stdc++.h>
#define int long long
#define pb push_back
#define tr cout<<"\n";
#define ipair pair<int,int>
#define mod 1000000007
#define INF 10000000000
using namespace std;
#define MAXN   1010


int32_t main() 
{
ios_base::sync_with_stdio(false);
cin.tie(NULL);
int t=1;
// cin>>t;
while(t--){
int n;cin>>n;

string s;cin>>s;
map<char,int> hash;
int mx=0;
int c=0;
for(int i=0;i<n;i++){
	hash[s[i]]++;
	if(s[i]!='?')mx=max(hash[s[i]],mx);
}

int flag=0;
vector<char>vc;
vc.pb('C');vc.pb('T');
vc.pb('G');
vc.pb('A');
for(auto sd:vc){
 int val=abs(hash[sd]-mx);
 for(int i=0;i<n;i++){
 	if(s[i]=='?' and val)s[i]=sd,--val;
 }
 if(val>=1)flag=1;
}


int val=0;
if(flag==1)cout<<"===\n";
else
{
c=0;
for(int i=0;i<n;i++){
	if(s[i]=='?')++c;
}
if(c%4==0){

val=c/4;
for(int i=0;i<n;i++){
	if(s[i]=='?' and val)--val,s[i]='A';
}
val=c/4;
for(int i=0;i<n;i++){
	if(s[i]=='?' and val)--val,s[i]='C';
}
val=c/4;
for(int i=0;i<n;i++){
	if(s[i]=='?' and val)--val,s[i]='G';
}
val=c/4;
for(int i=0;i<n;i++){
	if(s[i]=='?' and val)--val,s[i]='T';
}

cout<<s;
tr;
}
else cout<<"===\n";
}



}
}