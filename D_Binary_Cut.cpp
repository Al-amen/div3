#include<bits/stdc++.h>
using namespace std;
typedef long long ll;
#define sq(x)   (x)*(x)
#define PI      acos(-1.0)
#define endl   '\n' 
#include <ext/pb_ds/assoc_container.hpp>
using namespace __gnu_pbds;
void CloSolveKori() {
    string s;
    cin >> s;
    int cnt = 1;
    int x = 0;
    for (int i = 1; i < s.size(); i++) {
        if(s[i-1] == s[i]) {
            continue;
        }
        else {
            cnt++;
        }
        if(s[i-1] == '0' and s[i] == '1') {
            x = 1;
        }
    }
    cout << cnt - x << endl;
}
int main() {
ios_base::sync_with_stdio(0);cin.tie(0);cout.tie(0);
 int tc; cin>>tc;
 while(tc--)
 CloSolveKori();
return 0;
}