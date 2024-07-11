#include<bits/stdc++.h>
using namespace std;
typedef long long ll;
#define sq(x)   (x)*(x)
#define PI      acos(-1.0)
#define endl   '\n' 
#include <ext/pb_ds/assoc_container.hpp>
using namespace __gnu_pbds;
void CloSolveKori() {
    int n;
    cin >> n;
    char arr[2 * n + 1][2 * n + 1];
    for (int i = 1; i <= 2*n; i++) {
       
        for (int j = 1; j <= 2*n;j++) {
            arr[i][j] = '.';
        }
    }
    int x = (2 * n) / 4;
    int y = (2 * n) / 4;
    for (int i = 1; i <= n; i++) {
        if(i&1) {
            for (int j = 1; j <= n; j++) {
                if(j&1) {
                    cout << "##\n##";
                }
                else{
                    cout << "..\n..";
                }
            }
            cout << "\n";
        }
        else {
            for (int j = 1; j <= n; j++) {
                if(j&1) {
                    cout << "..\n..";
                }
                else{
                    cout << "##\n##";
                }
            }
            cout << "\n";
        }
    }
}
int main() {
ios_base::sync_with_stdio(0);cin.tie(0);cout.tie(0);
 int tc; cin>>tc;
 while(tc--)
 CloSolveKori();
return 0;
}