#include <iostream>
#include <string>
using namespace std;

int main()
{
    string S;
    cin >> S;

    size_t pos = S.rfind(".");

    string last_substring = S.substr(pos + 1);

    cout << last_substring << endl;

    return 0;
}