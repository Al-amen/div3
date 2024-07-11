#include<bits/stdc++.h>
using namespace std;
typedef long long ll;
#define sq(x)   (x)*(x)
#define PI      acos(-1.0)
#define endl   '\n' 
#include <ext/pb_ds/assoc_container.hpp>
using namespace __gnu_pbds;
void CloSolveKori() {
     int n, m, k;
    cin >> n >> m >> k;
    string s;
    cin >> s;

    vector<bool> visited(n + 2, false);
    queue<pair<int, int>> q;
    q.push({0, 0}); 

    bool canReach = false;

    while (!q.empty()) {
        int pos = q.front().first;
        int swims = q.front().second;
        q.pop();

        if (pos > n + 1 || visited[pos]) continue; 
        visited[pos] = true;

        if (pos == n + 1) { 
            canReach = true;
            break;
        }

        if (s[pos - 1] == 'L' || pos == 0) { 
            for (int i = 1; i <= m; ++i) {
                int nextPos = pos + i;
                if (nextPos <= n + 1 && !visited[nextPos]) {
                    q.push({nextPos, swims});
                }
            }
        }

        if (s[pos - 1] == 'W' && swims < k) { 
            int nextPos = pos + 1;
            if (nextPos <= n + 1 && !visited[nextPos]) {
                q.push({nextPos, swims + 1});
            }
        }
    }

    if (canReach) {
        cout << "YES\n";
    } else {
        cout << "NO\n";
    }
}
int main() {
ios_base::sync_with_stdio(0);cin.tie(0);cout.tie(0);
 int tc; cin>>tc;
 while(tc--)
 CloSolveKori();
return 0;
}

