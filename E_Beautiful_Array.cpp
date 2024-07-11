#include<bits/stdc++.h>
using namespace std;
typedef long long ll;
#define sq(x)   (x)*(x)
#define PI      acos(-1.0)
#define endl   '\n' 
#include <ext/pb_ds/assoc_container.hpp>
using namespace __gnu_pbds;
void CloSolveKori() {

    int n,k;
cin>>n>>k;
vector<int>a(n);
for (int i = 0; i < n; i++) {
    cin >> a[i];
}
    map<int, set<int>> mp;
       
for(int x:a){
mp[x%k].erase(x);
mp[x%k].insert(x);
int cnt = 0 ,val = -1;
for(auto x:mp){
int sz=x.second.size();
if(sz%2){
cnt++;
val=x.first;
}





}
if(cnt >1) {

    cout << -1 << endl;

    return;

}

int ans = 0;

for(auto x:mp){
continue;
while(x.second.size()>0){
int b=*x.second.begin();
x.second.erase(b);
int tp=*x.second.begin();
ans += (tp - b);
x.second.erase(tp);

}
}
cn
for(int
v.pb(x);
//pv(v);
int n=v.size();
if(n==l){
return;
vi pref(n,O),suf(n,O);
for(int i-
suf[n-2]-
-vln-11-v[n-2];
for(int i=n-4;i>=O;i—){

}
int main() {
ios_base::sync_with_stdio(0);cin.tie(0);cout.tie(0);
 int tc; cin>>tc;
 while(tc--)
 CloSolveKori();
return 0;
}