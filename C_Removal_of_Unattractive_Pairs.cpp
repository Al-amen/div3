#include<bits/stdc++.h>
using namespace std;
typedef long long ll;
#define sq(x)   (x)*(x)
#define PI      acos(-1.0)
#define endl   '\n' 
#include <ext/pb_ds/assoc_container.hpp>
using namespace __gnu_pbds;


int main()
{
    int t;
    cin >> t;

    while (t--)
    {
        int n;
        cin >> n;

        string s;
        cin >> s;

        vector<int> v(26, 0);

        for (char c : s)
        {
            v[c - 'a'] += 1;
        }

        int maxFreq = *max_element(v.begin(),v.end());

        int result = (maxFreq > n / 2) ? (2 * maxFreq - n) : ((n % 2 == 1) ? 1 : 0);

        cout << result <<endl;
    }

    return 0;
}
