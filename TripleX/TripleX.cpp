#include <iostream>

int main()
{
	//Print intro messages to the terminal
	std::cout << "You're a master hacker thief breaking into a high level computer security system\n";
	std::cout << "You need to enter the correct codes to get through the security measures\n";

	//Declare 3 number code
	const int CodeA = 4, CodeB = 2, CodeC = 6;

	int CodeSum = CodeA + CodeB + CodeC;
	int CodeProduct = CodeA * CodeB * CodeC;
	
	//Print sum and product to the terminal
	std::cout << "There are 3 numbers in the code\n";
	std::cout << "The codes add up to: " << CodeSum << std::endl;
	std::cout << "When multiplied, they become: " << CodeProduct << std::endl;

	std::cout << "Enter your code guesses seperated by spaces followed by an x: ";

	//Player enters guesses and they are stored in variables.
	int GuessA, GuessB, GuessC;
	std::cin >> GuessA;
	std::cin >> GuessB;
	std::cin >> GuessC;

	//Store GuessSum and GuessProduct into variables
	int GuessSum = GuessA + GuessB + GuessC;
	int GuessProduct = GuessA * GuessB * GuessC;

	//Check if the GuessSum and GuessProduct equals the CodeSum and CodeProduct.
	if (GuessSum == CodeSum && GuessProduct == CodeProduct)
	{
		std::cout << "You guessed correctly! You've hacked this level's security!\n";
	}

	return 0;
}