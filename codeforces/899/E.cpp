/*input
16
1 2 2 3 3 3 4 4 4 4 3 3 3 2 2 1
*/
#include <bits/stdc++.h>
using namespace std;
long long a[200005],n,len[200005],ans=0;
struct comp{
    bool operator () (pair<int,int> i,pair<int,int> j){
        if(i.second!=j.second) return i.second>j.second;
        return i.first<j.first;
    }
};
set<pair<int,int>,comp> s;
set<int> idx;
int main(){

#ifndef ONLINE_JUDGE
 freopen("input.txt","r",stdin);
 freopen("op2.txt","w",stdout);
#endif
    ios_base::sync_with_stdio(0);
    cin>>n;
    for(int i=0;i<n;cin>>a[i++]);
    
    for(int i=0,j;i<n;i=j){
        for(j=i;j<n&&a[i]==a[j];++j);
        len[i]=j-i;
        s.insert({i,len[i]});
        idx.insert(i);
    }

    for(;!s.empty();++ans){
        auto cur=*s.begin();
        auto it=idx.find(cur.first);
        auto nt=it;++nt;
        s.erase(cur);
        if(it!=idx.begin() && nt!=idx.end()){
            auto itpre = it;
            auto itnex = it;
            advance(itpre,-1);
            advance(itnex,1);
            if(a[*itpre] == a[*itnex]){
                 s.erase({*itpre,len[*itpre]});// erasing both indexes because we alreays put it in the new index baby

                len[*itpre]+=len[*itnex];
                s.insert({*itpre,len[*itpre]});// itpre is the previous starting index bro
                idx.erase(*itnex);// erasing the next index
                s.erase({*itnex,len[*itnex]});
            }
        }
        idx.erase(cur.first);
    }
    cout<<ans;
}