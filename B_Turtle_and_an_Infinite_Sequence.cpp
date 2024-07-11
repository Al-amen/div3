#include<bits/stdc++.h>
using namespace std;
typedef long long ll;
#define sq(x)   (x)*(x)
#define PI      acos(-1.0)
#define endl   '\n' 
#include <ext/pb_ds/assoc_container.hpp>
using namespace __gnu_pbds;


int tutle(int l , int r) {
    int temp = 0;
    for (int i = 31; i >= 0; i--) {
        int x = ((1 << i) & l) ? 1 : 0;
        int y = ((1 << i) & r) ? 1 : 0;
        
        if(x xor y) {
            temp = (1 << i);
            temp = (temp | temp - 1);
            break;
        }
    }
    return (l | temp);
}
void CloSolveKori() {
    int n, m;
    cin >> n >> m;
   
    cout << tutle(max(0,n-m), m+n) << endl;
}
int main() {
ios_base::sync_with_stdio(0);cin.tie(0);cout.tie(0);
 int tc; cin>>tc;
 while(tc--)
 CloSolveKori();
return 0;
}