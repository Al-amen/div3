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
    if(a<b and b<c) {
        cout << "STAIR\n";
    }
    else if(a<b and b>c){
        cout << "PEAK\n";
    }
    else {
        cout << "NONE\n";
    }
}
int main() {
ios_base::sync_with_stdio(0);cin.tie(0);cout.tie(0);
 int tc; cin>>tc;
 while(tc--)
 CloSolveKori();
return 0;
}