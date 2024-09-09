#include <bits/stdc++.h>

using namespace std;

int main() {
    int t;
    cin >> t; // Read number of test cases

    while (t--) {
        int a, b, c; // Declare a, b, and c inside the loop
        cin >> a >> b >> c;

        double average = (a + b) / 2.0; // Calculate the average

        if (average > c) {
            cout << "YES" << endl;
        } else {
            cout << "NO" << endl;
        }
        // Print the average after each comparison
    }
    return 0;
}