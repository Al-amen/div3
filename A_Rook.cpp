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
    for (int i = 1; i <= 8; i++) {
        if(s[0] + to_string(i) != s) {
            cout << s[0] << i << endl;
        }
    }
    ///string x = "abcdefgh";
    for (int i = 0; i < 8; i++) {
        if(s[0] - 'a' != i) {
            cout << char('a'+i) << s[1] << endl;
        }
    }
       
    // for (int i = 0; i < x.size(); i++) {

    //     if(to_string(x[i])+s[1] != s) {
    //         cout << x[i] << s[1] << endl;
    //     }
    // }
}
int main() {
ios_base::sync_with_stdio(0);cin.tie(0);cout.tie(0);
 int tc; cin>>tc;
 while(tc--)
 CloSolveKori();
return 0;
}