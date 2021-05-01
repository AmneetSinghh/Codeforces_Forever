#include<bits/stdc++.h>
#define int long long
#define pb push_back
#define tr cout<<"\n";
#define iPair pair<int,int>
#define mod 1000000007
#define INF 500000000000000000
using namespace std;
const int maxn=100005;


int32_t main() {
    int t=1;
    // cin>>t;
    while(t--){

int n;
cin>>n;
int c[n+1],d[n+1];
for(int i=1;i<=n;i++){
    cin>>c[i]>>d[i];

}

if(d[1]==2){
    int i=1;
    int act=0;
    int ne=0;
    while(i<=n && d[i]==2){
        ne=max(act,ne);
        act+=c[i];
        ++i;
    }

    if(i>n){
        // means, all are the two; check whether it reaches border line or not;
        cout<<1899+act-ne;
        continue;

    }

        int flag=0;
        int ori=0;
        int mx=-INF;
        int first,second;
        for(int j=1900;j<=2000;j++){
            second=j-act;
            for(int i=1;i<=n;i++){
                if(d[i]==2 && second<=1899)second+=c[i];
                else if(d[i]==1 && second>=1900)second+=c[i];
                else {flag=1;break;}
            }
            if(flag==1){flag=0;continue;}
            if(mx<=second){ori=1;mx=second;}
        }

        if(ori==1)cout<<mx;
        else cout<<"Impossible";


    
}
else{
    // division one;
    int i=1;
    int act=0;
    while(i<=n && d[i]==1){
        act+=c[i];
        ++i;
    }

    if(i>n)cout<<"Infinity";// always in one, then infinity;
    else{
        int flag=0;
        int mx=-INF;
        int ori=0;
        int first,second;
        for(int j=1700;j<=1900;j++){
            first=j+abs(act);
            second=j+abs(act);
            for(int i=1;i<=n;i++){
                if(d[i]==2 && second<=1899)second+=c[i];
                else if(d[i]==1 && second>=1900)second+=c[i];
                else {flag=1;break;}
            }
            if(flag==1){flag=0;continue;}
            if(mx<=second){ori=1;mx=second;}
        }

        if(ori==1)cout<<mx;
        else cout<<"Impossible";

    }
  

}






tr;










    }
     
}