#include <iostream>
using namespace std;




int main()
{
    std::cout << "Enter a password, password much be between 8 characters \n";
    std::string password;
    std::cin >> password;

    if (password.size() >= 8) {
        cout << "You password is: " << password;
    }
    else {
        std::cout << "Please insert a password that is at least 8 characters long: ";
    }

    


}