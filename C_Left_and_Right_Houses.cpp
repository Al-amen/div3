#include<bits/stdc++.h>
using namespace std;
typedef long long ll;
#define sq(x)   (x)*(x)
#define PI      acos(-1.0)
#define endl   '\n' 
#include <ext/pb_ds/assoc_container.hpp>
using namespace __gnu_pbds;
void CloSolveKori() {
    int n;
    cin >> n;
    string s;
    cin >> s;
    int x = INT_MAX;
    int res = -1;
    int left_zero = 0, right_zero = 0;
    int left_one = 0, right_one = 0;
    right_zero = count(s.begin(), s.end(), '0');
    right_one = count(s.begin(), s.end(), '1');

    if(n/2 + n%2 <= right_one) {
        res = 0;
        x = n;
    }

    for(int i = 0; i < n; i++) {
        if(s[i] == '0') {
            left_zero++;
            right_zero--;
        }
        else {
            right_one--;
            left_one++;
        }

         int left = left_zero + left_one;
        int right = right_one + right_zero;
        int leftcnt=left_zero+left_one;
                int rightcnt=right_zero+right_one;

            if((leftcnt/2)+(leftcnt%2)<=left_zero && (rightcnt/2)+(rightcnt%2)<=right_one)
            {
                int hue=abs(right-left);
                if(hue<x)
                {
                    x=hue;
                    res=i+1;
                }
            }
    }

   
        
        cout<<res<<endl;
}

int main() {
ios_base::sync_with_stdio(0);cin.tie(0);cout.tie(0);
 int tc; cin>>tc;
 while(tc--)
 CloSolveKori();
return 0;
}