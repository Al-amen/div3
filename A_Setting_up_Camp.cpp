#include<bits/stdc++.h>
using namespace std;
typedef long long ll;
#define sq(x)   (x)*(x)
#define PI      acos(-1.0)
#define endl   '\n' 
#include <ext/pb_ds/assoc_container.hpp>
using namespace __gnu_pbds;
void CloSolveKori() {
    int a, b, c;
    cin >> a >> b >> c;
    int x = a + b / 3;
     b = b % 3;

    if(b == 1) {
        if(c < 2) {
            cout << "-1\n";
            return;
        }
        else {
            x += 1;
            c -= 2;
        }
    }
    else if(b==2) {
        if(c ==0){
             cout << "-1\n";
            return;

        }
        else {
             x += 1;
            c -= 1;
        }
    }

    x += c / 3;
    
    if(c%3 ==0) {
        cout << x << endl;
    }
    else {
        cout << x + 1 << endl;
    }
}
int main() {
ios_base::sync_with_stdio(0);cin.tie(0);cout.tie(0);
 int tc; cin>>tc;
 while(tc--)
 CloSolveKori();
return 0;
}