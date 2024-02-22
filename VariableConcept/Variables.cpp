#include <iostream>
#include <tchar.h>
//To write Portuguese special characters we need to add another preprocessor: tchar.h

int main()
{
	
		//In order to be able show cedil and some other Portuguese special character we also need to add the following function:
		_tsetlocale(LC_ALL, _T("portuguese")); 
	
	
	int livesNumber = 5; // Alocates space in RAM to create a integer variable. It also sets its value to 5.
	int score = 1350; // Same as above. Value set to 1350.

	std::cout << "***********************BEGINNING OF THE GAME*******************" << std::endl;
	std::cout << "Player Lives: " << livesNumber << std::endl;
	std::cout << "Pontuação: " << score << std::endl; // Pontuação is score in Portuguese
	std::cout << "Size of livesNumber: " << sizeof(livesNumber) << " bytes" << std::endl; // Size of livesNumber variable
	std::cout << "Size of score: " << sizeof(score) << " bytes" << std::endl; // Size of score variable
	std::cout << "Address occupied by livesNumber in RAM memory: " << &livesNumber << std::endl; // Shows the address of variable in RAM
	std::cout << "Address occupied by score in RAM memory: " << &score << std::endl; // Shows the address of variable in RAM
	std::cout << "****************************************************************\n" << std::endl;

	std::cout << "***********************DURING GAME******************************" << std::endl;
	score += 150; // It will add 150 to 1350
	livesNumber -= 1; // It will subtract 1 from the total amount of lives
	std::cout << "Player Lives: " << livesNumber << std::endl; // Displays updated amount of lives
	std::cout << "Pontuação: " << score << std::endl; // Displays updated score
	std::cout << "****************************************************************\n" << std::endl;

	system("PAUSE");
}

// Part of Marcos Pacheco C++ course in Udemy