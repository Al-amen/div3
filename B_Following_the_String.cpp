#include<bits/stdc++.h>
using namespace std;
typedef long long ll;
#define sq(x)   (x)*(x)
#define PI      acos(-1.0)
#define endl   '\n' 
#include <ext/pb_ds/assoc_container.hpp>
using namespace __gnu_pbds;
void CloSolveKori() {
    string s;cin >> s;
    int cnt1 = 0, cnt2=0;
    for(int i = 0; i < s.size(); i++) {
        if(s[i] == 'A')cnt1++;
        else cnt2++;
    }
    if(cnt1 > cnt2) cout << "A\n";
    else cout << "B\n";
}
int main() {
ios_base::sync_with_stdio(0);cin.tie(0);cout.tie(0);
 int tc; cin>>tc;
 while(tc--)
 CloSolveKori();
return 0;
}