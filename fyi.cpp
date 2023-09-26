#include <iostream>
#include <string>
using namespace std;

int main() {
    string phoneNumber;
    getline(cin,phoneNumber);

    if (phoneNumber.size() == 7 && phoneNumber.substr(0, 3) == "555") {
        cout << "1" << endl;
    } else {
        cout << "0" << endl; 
    }

    return 0;
}