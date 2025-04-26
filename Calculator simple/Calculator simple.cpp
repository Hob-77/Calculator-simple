#include <iostream>

int main()
{
	std::cout << "This calculator will lets you do simple addition, subtraction, multiplication, and division" << "\n";

	char continueCalculation{}; //used to start the calculator again after it has been run once

	do //start loop 
	{
		std::cout << "Enter your first number: " << "\n"; //holding first double
		double x{};
		std::cin >> x;

		std::cout << "Enter your operator (+-*/): " << "\n"; //holding operator
		char symbol{};
		std::cin >> symbol;

		std::cout << "Enter your second number: " << "\n";//holding second double
		double y{};
		std::cin >> y;

		if (symbol == '+') //start of if statements
		{
			std::cout << x << "+" << y << "=" << x + y << "\n";
		}
		else if (symbol == '-')
		{
			std::cout << x << "-" << y << "=" << x - y << "\n";
		}
		else if (symbol == '*')
		{
			std::cout << x << "*" << y << "=" << x * y << "\n";
		}
		else if (symbol == '/')
		{
			std::cout << x << "/" << y << "=" << x / y << "\n";
		}
		else
		{
			std::cout << "Wrong format" << "\n"; //if using wrong operator or characters instead of intergers
		}

		std::cout << "would you like to do another calculation? (y/n)" << "\n"; //ask for user input to repeat use of calculator
		std::cin >> continueCalculation;

	} while (continueCalculation == 'y' || continueCalculation == 'Y'); //when we call the calculator again using character from above

	return 0;
}