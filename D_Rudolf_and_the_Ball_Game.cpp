#include <iostream>
#include <set>
#include <vector>
#include <algorithm>

using namespace std;

int main() {
    int t;
    cin >> t;
    while (t--) {
        int n, m, x;
        cin >> n >> m >> x;
        
        set<int> b;
        b.insert(x);
        
        for (int i = 0; i < m; ++i) {
            int r;
            char c;
            cin >> r >> c;
            
            set<int> present;
            for (int player : b) {
                int current;
                if (c == '0') {
                    current = (player + r) % n;
                    if (current == 0)
                        current = n;
                } else if (c == '1') {
                    current = (player - r + n) % n;
                    if (current == 0)
                        current = n;
                } else {
                    int cureent_clockwise = (player + r) % n;
                    if (cureent_clockwise == 0)
                        cureent_clockwise = n;
                    int current_anti_clock = (player - r + n) % n;
                    if (current_anti_clock == 0)
                        current_anti_clock = n;
                    present.insert(cureent_clockwise);
                    present.insert(current_anti_clock);
                    continue;
                }
                present.insert(current);
            }
            
            b = present;
        }
        
        cout << b.size() << endl;
        for (int player : b)
            cout << player << " ";
        cout << endl;
    }
    return 0;
}
