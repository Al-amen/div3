#include<bits/stdc++.h>
using namespace std;
typedef long long ll;
#define sq(x)   (x)*(x)
#define PI      acos(-1.0)
#define endl   '\n' 
#include <ext/pb_ds/assoc_container.hpp>
using namespace __gnu_pbds;

bool is_matching_template(const std::string &a, const std::string &b, const std::string &c)
{
    int n = a.size();

    // Check if there exists a template t
    for (int i = 0; i < (1 << n); ++i)
    {
        std::string t;
        for (int j = 0; j < n; ++j)
        {
            if ((i & (1 << j)) != 0)
            {
                // If the j-th bit is set, make it uppercase
                t += toupper(a[j]);
            }
            else
            {
                // If the j-th bit is not set, make it lowercase
                t += a[j];
            }
        }

        // Check if a and b match the template and c does not
        bool match_a = (t == a) || (t == b);
        bool match_b = (t == b) || (t == a);
        bool not_match_c = (t != c);

        if (match_a && match_b && not_match_c)
        {
            return true; // Found a valid template
        }
    }

    return false; // No valid template found
}
void CloSolveKori() {
    int n;
    cin >> n;
    string a, b, c;
    cin >> a >> b >> c;
    vector<int> v(26, 0);
    int cnt = 0;
    for (int i= 0; i < n; i++) {
        if (a[i] == c[i] || b[i] == c[i])
        {
            cnt++;
        }
       
    }
    if(cnt  == n)
        cout << "NO\n";
    else
        cout << "YES\n";
}

int main() {
ios_base::sync_with_stdio(0);cin.tie(0);cout.tie(0);
 int tc; cin>>tc;
 while(tc--)
 CloSolveKori();
return 0;
}