#include <iostream>
#include <iomanip>
#include <sstream>
#include <vector>
using namespace std;

// Function to convert 24-hour format to 12-hour format
string convertTo12HourFormat(const string& time24) {
    int hours = stoi(time24.substr(0, 2));
    int minutes = stoi(time24.substr(3, 2));
    
    string period = (hours >= 12) ? "PM" : "AM";
   

    // Convert hours to 12-hour format
    hours = hours % 12;
    if (hours == 0) {
        hours = 12; // Adjust 00 to 12 for 12-hour format
    }
     if(minutes == 0 and hours !=12) {
         minutes = hours;
    }

    // Create a formatted output string
    ostringstream oss;
    oss << setw(2) << setfill('0') << hours << ":" << setw(2) << setfill('0') << minutes << " " << period;

    return oss.str();
}

int main() {
    int t;
    cin >> t;
    vector<string> results(t);
    
    for (int i = 0; i < t; ++i) {
        string time24;
        cin >> time24;
        results[i] = convertTo12HourFormat(time24);
    }

    for (const auto& result : results) {
        cout << result << endl;
    }

    return 0;
}

