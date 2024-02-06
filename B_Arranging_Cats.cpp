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
    string s1, s2;
    cin >> s1 >> s2;
    int cnt = 0;
    int one = 0;
    int two = 0;
    for (int i = 0; i < n; i++) {
        if(s1[i] == '1'){
            one++;
        }
        if(s2[i] == '1')
            two++;

        if(s2[i] == '1' and s1[i] == '1') {
            cnt++;
        }
        
    }
    cout <<  abs(cnt - max(one,two)) << endl;
}
int main() {
ios_base::sync_with_stdio(0);cin.tie(0);cout.tie(0);
 int tc; cin>>tc;
 while(tc--)
 CloSolveKori();
return 0;
}