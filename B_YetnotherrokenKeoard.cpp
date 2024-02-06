#include<bits/stdc++.h>
using namespace std;
typedef long long ll;
#define sq(x)   (x)*(x)
#define PI      acos(-1.0)
#define endl   '\n' 
#include <ext/pb_ds/assoc_container.hpp>
using namespace __gnu_pbds;
void CloSolveKori() {
    string s; cin >> s;
    int n = s.size();
    vector<char> v1, v2;
    vector<int> uper, lower,c(n,-1);

    for (int i = 0; i < s.size();i++) {
        if(isupper(s[i]) and s[i] != 'B') {
            uper.push_back(i); // track the last index of upercase
        }
        else if (islower(s[i]) and s[i] != 'b')
        {
            lower.push_back(i); // track the last index of lowercase
        }
        if(s[i] == 'B') {
            if(!uper.empty()) {
                int p = uper.back(); // take last index of upercase
                c[p] = p; // put this index at p th postion in the vector c
                uper.pop_back(); // remove last index
            }
        }
        if (s[i] == 'b')
        {
            if (!lower.empty())
            {
                int p = lower.back(); // take last index of lowercase
                c[p] = p;         // put this index at p th postion in the vector c
                lower.pop_back();     // remove last index
            }
        }

    }

    if(uper.size() == 0  and lower.size() ==0) {
        cout << endl;
        return;
    }
    else {

        for (int i = 0; i < s.size(); i++)
        {
            if (c[i] == -1 )
            {
                 if(s[i] == 'B' or s[i] == 'b')continue;
                 else
                     cout << s[i];
            }
           
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