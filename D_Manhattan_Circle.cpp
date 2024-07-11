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
    char arr[n+1][m+1];
    for (int i = 1; i <= n; i++) {
        for (int j = 1; j <= m; j++) {
            cin >> arr[i][j];
        }
    }

    int mx = 0;  // This will store the maximum frequency
    int mn = INT_MAX;
    map<int, int> mp;
    map<int, int> mp1;
    vector<int> v;
    for (int i = 1; i <= n; i++) {
        for (int j = 1; j <= m; j++) {
            if (arr[i][j] == '#') {
                mx = max(i, mx);
                mn = min(j, mn);
                mp[j]++;
                if (mp1[i] == 0) {
                    v.push_back(i);
                    mp1[i]++;
                }
            }
        }
    }

    int max_freq = 0;
    int y = -1;
    for (const auto& it : mp) {
        if (it.second > max_freq) {
            max_freq = it.second;
            y = it.first;
        }
        
    }

   

    int x = v.size() - 1;
    x = ceil(x / 2.0);
    cout << v[x] << " " << y << endl;
}

int main() {
    ios_base::sync_with_stdio(0); cin.tie(0); cout.tie(0);
    int tc; cin >> tc;
    while (tc--)
        CloSolveKori();
    return 0;
}
