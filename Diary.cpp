#include <iostream>
#include <string>



int main() 
{
	std::cout << "*****************************************" << "\n";
	std::cout << "   * DAILY DIARY MANAGEMENT SYSTEM * " << "\n";
	std::cout << "*****************************************" << "\n";

	std::cout << "MAIN MENU: " << "\n";

	std::cout << "ADD STORY  [1]" << "\n";
	std::cout << "VIEW STORY [2]" << "\n";
	std::cout << "EDIT STORY [3]" << "\n";
	std::cout << "DELETE STORY [4]" << "\n";
	std::cout << "EDIT PASSWORD [5]" << "\n";
	std::cout << "EXIT [6]" << "\n";

	std::cout << "ENTER YOUR CHOICE: " << "\n";

	int choice;
	std::cin >> choice;

	if (choice == 1) {
		std::cout << "Add your story";
	}
	else if (choice == 2) {
		std::cout << "Previous story";
	}
	else if (choice == 3) {
		std::cout << "Edit story";
	}
	else if (choice == 4) {
		std::cout << "Are you sure you want to delete?";
	}
	else if (choice == 5) {
	     std::cout << "Edit password:";
	}
	else if (choice == 6) {
		std::cout << "Are you sure you want to delete";
	}

	return 0;

}