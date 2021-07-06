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

int n;cin>>n;
//set<string> vc;
map<string,set<int>> store;
for(int i=1;i<=n;i++)
{
    string s;cin>>s;
    for(int j=0;j<s.size();j++) {
        string res="";
        for (int k = j; k < s.size(); k++) {
            res+=s[k];
            store[res].insert(i);
//            cout<<res<<" "<<i<<"\n";
        }
    }
}



unordered_map<int,string> hash;
for(auto sd:store)
{
    string s=sd.first;
    if(store[sd.first].size()==1)
    {
        int i=0;
        for(auto c:sd.second)i=c;
        if(hash.count(i)==0)hash[i]=s;
        else
        {
            string pre=hash[i];
            if(pre.size()>s.size())hash[i]=s;
        }
    }
}


for(int i=1;i<=n;i++)cout<<hash[i]<<"\n";















    }
}

