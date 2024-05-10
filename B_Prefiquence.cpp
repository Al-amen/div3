#include<bits/stdc++.h>
using namespace std;
typedef long long ll;
#define sq(x)   (x)*(x)
#define PI      acos(-1.0)
#define endl   '\n' 
#include <ext/pb_ds/assoc_container.hpp>
using namespace __gnu_pbds;
int subsequence(string a, string b) {
    int ind = 0;
    int k = 0;
    for (char& c : b) {
        if (ind < a.length() && a[ind] == c) {
            ind++;
            k = max(k, ind);
        }
    }
    return k;
}
void CloSolveKori() {
    int n, m;
    cin >> n >> m;
    string s1, s2;
    cin >> s1 >> s2;
    int k = 0;
    int j = 0;
    cout << subsequence(s1, s2) << endl;
}
int main() {
ios_base::sync_with_stdio(0);cin.tie(0);cout.tie(0);
 int tc; cin>>tc;
 while(tc--)
 CloSolveKori();
return 0;
}