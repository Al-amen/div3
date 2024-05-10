#include <bits/stdc++.h>
using namespace std;

typedef long long ll;
#define PI acos(-1.0)
#define endl '\n'
int countSubstr(const string& str, const string& sub) {
    int count = 0;
    size_t pos = 0;
    while ((pos = str.find(sub, pos)) != string::npos) {
        count++;
        pos += sub.length();
    }
    return count;
}

void CloSolveKori() {
    int n;
    cin >> n;
    string s;
    cin >> s;

   int mapCount = countSubstr(s, "map");
        int pieCount = countSubstr(s, "pie");
        int mapieCount = countSubstr(s, "mapie");

    cout <<  mapCount + pieCount - mapieCount << endl;
}

int main() {
    ios_base::sync_with_stdio(0);
    cin.tie(0);
    cout.tie(0);

    int tc;
    cin >> tc;
    while (tc--) {
        CloSolveKori();
    }
    return 0;
}
