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
    set<char> ch;
    for (int i = 0; i < s.size(); i++) {
        ch.insert(s[i]);
    }
    if(ch.size() == 1) {
        cout << "NO\n";
    }
    else {
        cout << "YES\n";
        for (int i = 1; i < s.size(); i++) {
            cout << s[i];
        }
        cout << s[0] << endl;
    }
}
int main() {
ios_base::sync_with_stdio(0);cin.tie(0);cout.tie(0);
 int tc; cin>>tc;
 while(tc--)
 CloSolveKori();
return 0;
}