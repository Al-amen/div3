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
    vector<int> a(n), b(m);
    vector<int> c, d;
    set<int> s1, s2;
    for (int i = 0; i < n; i++) {
        cin >> a[i];
        if(a[i]<=k)
            s1.insert(a[i]);
    }
    for (int i = 0; i < m; i++) {
        cin >> b[i];
        if(b[i]<= k) {
            s2.insert(b[i]);
        }
        

    }

    // sort(a.begin(), a.end());
    // sort(b.begin(), b.end());

    // for (int i = 0; i < n; i++){
    //    if(a[i]<=k)
    //     s1.insert(a[i]);
    // }
    // for (int i = 0; i < m; i++)
    // {
    //     if(b[i]<=k)
    //     s2.insert(b[i]);
    // }
        if(s1.size()< k/2 or s2.size()<k/2) {
            cout << "NO\n";
            return;
        } 
        else 
        {
            int ok = 1;
            set<int> q;
            q.insert(s1.begin(), s1.end());
            q.insert(s2.begin(), s2.end());
            int p = 0;
            
            for (auto i : q)
            {
                 if(i <=k)
                     p++;
             }
                if (p == k)
                {
                    cout << "YES\n";
                }
                else
                {
                    cout << "NO\n";
                }
        }
        
}
int main() {
ios_base::sync_with_stdio(0);cin.tie(0);cout.tie(0);
 int tc; cin>>tc;
 while(tc--)
 CloSolveKori();
return 0;
}