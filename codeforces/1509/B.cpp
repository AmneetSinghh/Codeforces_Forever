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
#define mod 1000000007
#define inf 1e18
using namespace std; 
const int maxn=100005;

void Not_Stable()
{    

int n;
cin>>n;
string s;
cin>>s;
int flag=0;
set<int> store;
for(int i=0;i<n;i++){
	if(s[i]=='T')store.insert(i);
}

int tom=0;

for(int i=0;i<n;i++){
	if(s[i]=='M'){
		tom=1;
		if(store.size()>=1){
		  auto it=*(store.begin());
          if(*(store.begin())<i)store.erase(store.begin());
          else flag=1;
		}	    
		else flag=1;
	}
}


for(int i=0;i<n;i++){
	if(s[i]=='M'){
		tom=1;
		if(store.size()>=1){
          if(*(store.begin())>i)store.erase(store.begin());
          else flag=1;
		}	    
		else flag=1;
	}
}






if(store.size()!=0)flag=1;
if(tom==1 && flag==0)cout<<"YES";
else cout<<"NO";





tr;

}
 
 
 
 
int32_t main() {
    io;
   int g=1;
    cin>>g;
    while (g--)Not_Stable();
    return 0;
}