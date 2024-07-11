#include <iostream>
#include <vector>

using namespace std;
typedef long long ll;



// Calculate the maximum volume that can be obtained
ll calculateMaxVolume(ll length, ll width, ll height, ll divisor) {
    
    
    ll maxVolume = 0;
    for (ll lengthIndex = 1; lengthIndex <= length; lengthIndex++) { // Iterate through length elements
        for (ll widthIndex = 1; widthIndex <= width; widthIndex++) {
            if (divisor % (lengthIndex * widthIndex) == 0 && (divisor / (lengthIndex * widthIndex)) <= height) {
                // Check if the current combination is valid and update maxVolume
                maxVolume = max(maxVolume, (length - lengthIndex + 1) * (width - widthIndex + 1) * (height - (divisor / (lengthIndex * widthIndex)) + 1));
            }
        }
    }
    return maxVolume; 
}

// Process each test case
void processTestCase() {
    ll length, width, height, divisor;
    cin >> length >> width >> height >> divisor;
    cout << calculateMaxVolume(length, width, height, divisor) << endl; // Output the result
}

int main() {
    int numTestCases;
    cin >> numTestCases; // Number of test cases

    while (numTestCases--) { // Process each test case
        processTestCase(); 
    }
    return 0;
}