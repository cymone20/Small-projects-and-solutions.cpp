#include <iostream>
using namespace std;

int main() {
    int points[5] = {0}; 
    for (int i = 0; i < 5; ++i) {
        for (int j = 0; j < 4; ++j) {
            int grade;
            cin >> grade;
            points[i] += grade;
        }
    }

    int winner = 0;
    int maxPoints = points[0];

    for (int i = 1; i < 5; ++i) {
        if (points[i] > maxPoints) {
            maxPoints = points[i];
            winner = i;
        }
    }

    cout << winner + 1 << " " << maxPoints << endl;

    return 0;
}
