#include<bits/stdc++.h>
using namespace std;
typedef long long ll;
#define sq(x)   (x)*(x)
#define PI      acos(-1.0)
#define endl   '\n' 
#include <ext/pb_ds/assoc_container.hpp>
using namespace __gnu_pbds;
void CloSolveKori() {
    int x, y; cin >> x >> y;
    int two_by_two = (y + 1) / 2;
    int used_tow = 4 * y;
    int tottal_screen_two_by_two = 15 * two_by_two;
    int remain_cells = tottal_screen_two_by_two - used_tow;
    int remaining_x = max(0, x - remain_cells);
    int screnn_1X1 = (remaining_x + 14) / 15;
    int total_screen = (two_by_two + screnn_1X1);

    cout << total_screen << endl;
}
int main() {
ios_base::sync_with_stdio(0);cin.tie(0);cout.tie(0);
 int tc; cin>>tc;
 while(tc--)
 CloSolveKori();
return 0;
}