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

    for (int i = 1; i <= 5; i++) {
        if(a<=b and a <=c) {
            a++;
        }
        else if(b<=a and b<=c) {
            b++;
        }
        else {
            c++;
        }
    }
    cout << a * b * c << endl;
}
int main() {
ios_base::sync_with_stdio(0);cin.tie(0);cout.tie(0);
 int tc; cin>>tc;
 while(tc--)
 CloSolveKori();
return 0;
}