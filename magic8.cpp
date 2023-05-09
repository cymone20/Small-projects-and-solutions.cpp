#include <iostream>
#include <string>
#include <cstdlib>

int main() 
{
	
	srand(time(0));
	std::string ask8bll;
	getline(std::cin, ask8bll);
	ask8bll = ask8bll.substr(0, 100);

	std::cout << "You asked: " << ask8bll << "\n";
	std::cout << "Magic 8 ball says: ";

	int answer = rand() % 20;

	if (answer == 0)
	{
		std::cout << "Yes, definitely";
	
	} else if (answer == 1) {
		
		std::cout << "It is decidedly so";
	
	} else if (answer == 2) {
		
		std::cout << "Without a doubt";
	
	} else if (answer == 3) {
		
		std::cout << "It is certain";
	
	} else if (answer == 4) {
		
		std::cout << "You may rely on it";
	
	} else if (answer == 5) {
		
		std::cout << "Most likely";
	
	} else if (answer == 6) {
		
		std::cout << "As I see it, yes";
	
	} else if (answer == 7) {
		
		std::cout << "Outlook good ";
	
	} else if (answer == 8) {
		
		std::cout << "Signs point to yes";
	
	} else if (answer == 9) {
		
		std::cout << "Yes";
	
	} else if (answer == 10) {
		
		std::cout << "Ask again later";
	
	} else if (answer == 11) {
		
		std::cout << "Concentrate and ask again";
	
	} else if (answer == 12) {
		
		std::cout << "Better not tell you now";
	
	} else if (answer == 13) {
		
		std::cout << "Cannot predict now";
	
	} else if (answer == 14) {
		
		std::cout << "Reply hazy, try again";
	
	} else if (answer == 15) {
		
		std::cout << "My sources say no ";
	
	} else if (answer == 16) {
		
		std::cout << "Very doubtful ";
	
	} else if (answer == 17) {
		
		std::cout << "No ";
	
	} else if (answer == 18) {
		
		std::cout << "Don't count on it";
	
	} else if (answer == 19) {
		
		std::cout << "Outlook not so good";
	
	} else if (answer == 20) {
		
		std::cout << "My reply is no ";
	
	}


	return 0;

}