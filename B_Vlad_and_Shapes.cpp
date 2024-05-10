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
    cin >> n;
    //zero = 0;
    vector<int> v;
    set<int> s;
    for (int i = 0; i < n; i++) {
        int one = 0;
        for (int j = 0; j < n; j++)
        {
            char c;
            cin >> c;
            if (c == '1')
                one++;
      }
       // cout << one << endl;
       if(one > 0)
        s.insert(one);
     }
   
      if(s.size() == 1) {
          cout << "SQUARE\n";
         
      }
      else {
          cout << "TRIANGLE\n";
      }
    
     
}
int main() {
ios_base::sync_with_stdio(0);cin.tie(0);cout.tie(0);
 int tc; cin>>tc;
 while(tc--)
 CloSolveKori();
return 0;
}