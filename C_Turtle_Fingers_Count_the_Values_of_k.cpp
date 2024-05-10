// #include<bits/stdc++.h>
// using namespace std;
// typedef long long ll;
// #define sq(x)   (x)*(x)
// #define PI      acos(-1.0)
// #define endl   '\n' 
// #include <ext/pb_ds/assoc_container.hpp>
// using namespace __gnu_pbds;

// ll BinPow(ll a, ll b)
// {

//     ll result = 1;
//     while (b > 0)
//     {

//         if (b % 2 == 1)
//             result = result * a;
//         a = a * a;
//         b = b / 2;
//     }
//     return result;
// }
// void CloSolveKori() {
//          int a, b, l;
//         cin >> a >> b >> l;
        
//         set<int> ss;
        
//         for (int x = 0; ; x++) {
//             ll p = BinPow(a, x);
//             if (p > l) break;
            
//             for (int y = 0; ; y++) {
//                 ll d = p * BinPow(b, y);
//                 if (d > l) {
//                     break;
//                 }
                
//                 if (l % d == 0) {
//                     ss.insert(l / d);
//                 }
//             }
//         }
        
//         cout << ss.size() << endl;
    
// }
// int main() {
// ios_base::sync_with_stdio(0);cin.tie(0);cout.tie(0);
//  int tc; cin>>tc;
//  while(tc--)
//  CloSolveKori();
// return 0;
// }


#include <bits/stdc++.h>
using namespace std;
typedef long long ll;
#define sq(x)   (x)*(x)
#define PI      acos(-1.0)
#define endl    '\n'
#include <ext/pb_ds/assoc_container.hpp>
using namespace __gnu_pbds;

ll BinPow(ll a, ll b) {
    ll result = 1;
    while (b > 0) {
        if (b % 2 == 1)
            result = result * a;
        a = a * a;
        b = b / 2;
    }
    return result;
}

void CloSolveKori() {
    int a, b, l;
    cin >> a >> b >> l;
    
    set<int> ss;
    
    int x = 0;
    while (true) {
        ll p = BinPow(a, x);
        if (p > l) break;
        
        int y = 0;
        while (true) {
            ll d = p * BinPow(b, y);
            if (d > l) {
                break;
            }
            
            if (l % d == 0) {
                ss.insert(l / d);
            }
            y++;
        }
        x++;
    }
    
    cout << ss.size() << endl;
}

int main() {
    ios_base::sync_with_stdio(0);
    cin.tie(0);
    cout.tie(0);
    
    int tc;
    cin >> tc;
    while (tc--)
        CloSolveKori();
    
    return 0;
}
