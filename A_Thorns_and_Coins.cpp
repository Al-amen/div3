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
    int ind;
    int ok = 0;
    for (int i = 0; i < n-1; i++) {
        if(s[i] == '*' and s[i+1] == '*') {
            ind = i;
            ok = 1;
            break;
        }
        else {
            ind = i;
        }
    }
    int cnt = 0;
    if(ok){
        for (int i = 0; i <= ind; i++)
        {
            if (s[i] == '@')
                cnt++;
        }
        cout << cnt << endl;
    }
    else {
        for (int i = 0; i <= ind+1; i++)
        {
            if (s[i] == '@')
                cnt++;
        }
        cout << cnt << endl;
    }
   
}
int main() {
ios_base::sync_with_stdio(0);cin.tie(0);cout.tie(0);
 int tc; cin>>tc;
 while(tc--)
 CloSolveKori();
return 0;
}