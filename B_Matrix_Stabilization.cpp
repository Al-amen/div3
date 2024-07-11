#include<bits/stdc++.h>
using namespace std;
typedef long long ll;
#define sq(x)   (x)*(x)
#define PI      acos(-1.0)
#define endl   '\n' 
#include <ext/pb_ds/assoc_container.hpp>
using namespace __gnu_pbds;
void CloSolveKori() {
     int n, m;
        cin >> n >> m;
        vector<vector<int>> a(n, vector<int>(m));
         for (int i = 0; i < n; ++i) {
        for (int j = 0; j < m; ++j) {
            cin >> a[i][j];
        }
    }


     bool p = true;
    while (p) {
        p = false;
        vector<vector<int>> vv = a;

        
        for (int i = 0; i < n; ++i) {
            for (int j = 0; j < m; ++j) {
                int top = (i > 0) ? a[i - 1][j] : 0;
                int left = (j > 0) ? a[i][j - 1] : 0;
                int bottom = (i < n - 1) ? a[i + 1][j] : 0;
                int right = (j < m - 1) ? a[i][j + 1] : 0;

                int max_neighbor = max({top, left, bottom, right});
                if (a[i][j] > max_neighbor) {
                    vv[i][j] = max_neighbor;
                    p = true;
                }
            }
        }

        
        a = vv;
    }
        for (int i = 0; i < n; ++i) {
        for (int j = 0; j < m; ++j) {
            cout << a[i][j] << " ";
        }
        cout << endl;
    }
}
int main() {
ios_base::sync_with_stdio(0);cin.tie(0);cout.tie(0);
 int tc; cin>>tc;
 while(tc--)
 CloSolveKori();
return 0;
}




