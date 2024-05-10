#include<bits/stdc++.h>
using namespace std;
typedef long long ll;
#define sq(x)   (x)*(x)
#define PI      acos(-1.0)
#define endl   '\n' 
#include <ext/pb_ds/assoc_container.hpp>
using namespace __gnu_pbds;
void CloSolveKori() {
    int n, k, pb, ps;
    cin >> n >> k >> pb >> ps;
    --pb;
    --ps;
    vector<int> a(n), b(n);
     
     for(int i = 0; i < n; i++) {
        cin >> b[i];
    }
    
    // Input for vector b
    for(int i = 0; i < n; i++) {
        cin >> a[i];
    }
    int j =0;
    k;
    int b_cnt = 0, s_cnt = 0;
    for (int i = 0; i < n; i++)
    {
       
        b_cnt += a[pb];
        s_cnt += a[ps];

        int x = b[pb];
       if(a[x] >= a[pb]) {
           pb = x;
          // cout << 'a';
       }
       int y = b[ps];
      
       if(a[y] > a[ps]) {
           ps = y;
          // cout << 'b';
       }
    }
    if(b_cnt > s_cnt) {
        cout << "Bodya\n";
    }
    else if(b_cnt < s_cnt){
        cout << "Sasha\n";
    }
    else {
        cout << "Draw\n";
    }
    //cout << b_cnt << " " << s_cnt << endl;
}
int main() {
ios_base::sync_with_stdio(0);cin.tie(0);cout.tie(0);
 int tc; cin>>tc;
 while(tc--)
 CloSolveKori();
return 0;
}