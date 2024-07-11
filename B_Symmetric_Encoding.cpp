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
    string s;
    cin >> s;
    //cout << n << " " << s << endl;
    set<char> ss(s.begin(), s.end());
    vector<char> vv(ss.begin(), ss.end());
    
    
    int l = 0;
    int k = vv.size() - 1;
    vector<int> visited(n, 0);
    while(l<k) {
        for (int i = 0; i < n; i++) {
            if(s[i] == vv[l] and !visited[i]) {
                s[i] = vv[k];
                visited[i] = 1;
            }
            if(s[i] == vv[k] and !visited[i]) {
                s[i] = vv[l];
                visited[i] = 1;
            }
        }
        l++, k--;
    }
    cout << s << endl;
}
int main() {
ios_base::sync_with_stdio(0);cin.tie(0);cout.tie(0);
 int tc; cin>>tc;
 while(tc--)
 CloSolveKori();
return 0;
}