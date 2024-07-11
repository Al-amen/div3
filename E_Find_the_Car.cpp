#include <iostream>
#include <vector>
#include <algorithm>

using namespace std;

int main() {
    long long INF = 1e18;
    long long MOD = 998244353;

    int num_cases;
    cin >> num_cases;

    while (num_cases--) {
        int len_str, count, queries;
        cin >> len_str >> count >> queries;

        vector<int> alpha(count);
        vector<int> beta(count);

        for (int i = 0; i < count; i++) {
            cin >> alpha[i];
        }

        for (int i = 0; i < count; i++) {
            cin >> beta[i];
        }

        for (int q = 0; q < queries; q++) {
            int x;
            cin >> x;

            auto pos = lower_bound(alpha.begin(), alpha.end(), x) - alpha.begin();

            if (pos < len_str && alpha[pos] == x) {
                cout << beta[pos] << " ";
            } else {
                int dl = (pos > 0) ? alpha[pos - 1] : 0;
                int dr = alpha[pos];
                int tl = (pos > 0) ? beta[pos - 1] : 0;
                int tr = beta[pos];

                cout << tl + (x - dl) * (tr - tl) / (dr - dl) << " ";
            }
        }

        cout << endl;
    }

    return 0;
}
