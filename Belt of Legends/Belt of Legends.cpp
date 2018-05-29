#include <iostream>
#include <conio.h>

using namespace std;

int main() {
	#pragma region Variables
		char letter1Input, letter2Input, repeatProgramInput;
		int numberSqrt, heightCounter, numberInput, numIterative;
	#pragma endregion

	do {
		numberSqrt = 0;																					// Variable that will hold the Square Root of the number input of the user
		numberInput = 0;																				// Variable that will hold the integer input of the user
		heightCounter = 0;																				// Variable that is used in printing "endl"

		cout << "Welcome to the Belt of Legends generator!" << endl << endl;							// Welcome Note

		cout << "Enter a number from 1-10 only." << endl;												// This will ask the user to input any integer from 1 - 10
		cin >> numberInput;

		if(numberInput < 0 || numberInput > 10 )														// End the program if the user input an invalid number
			break;

		cout << "Enter letter 1." << endl;																// Ask user to input any letter
		cin >> letter1Input;

		if(letter1Input <= 64 || letter1Input >= 91 && letter1Input <= 96 || letter1Input >= 123)		// End the program if the user input an invalid character/symbol
			break;

		cout << "Enter letter 2."  << endl;																// Ask user to input any letter
		cin >> letter2Input;

		if(letter2Input <= 64 || letter2Input >= 91 && letter2Input <= 96 || letter2Input >= 123)		// End the program if the user input an invalid character/symbol
			break;

		cout << endl << "Pick an iterative statement" << endl;											// Ask the user to pick an iterative statement
		cout << "1 - Basic Statement" << endl << "2 - For Loop" << endl									// List of Iterative statements
			<< "3 - While Loop" << endl << "4 - Do While Loop" << endl;

		cout << "Choice: ";																				// Ask the user to input his choice of statement
		cin >> numIterative;

		numberSqrt = numberInput * numberInput;															// Store the square root if the integer input by the user
		cout << endl;

		switch(numIterative) {
		case 1:
			#pragma region Basic Statement
																										// Exercise 2
			while(heightCounter < numberInput + 2) {													// Loop for the "endl" [vertical print]
				int lengthCounter = 0;																	// Variable the holds the length of print

				while(lengthCounter < numberSqrt) {														// Loop for the printing from left to right [horizontal print]
					if(heightCounter == 0 || heightCounter == numberInput + 1) {						// Prints series of letters at the top and bottom of the belt pattern
						if(numberInput % 2 == 0)														// Check if the number input by the user is Odd or Even
							cout << letter1Input;														// If Even print the first letter input
						else
							cout << letter2Input;														// If Odd print the second letter input

						lengthCounter++;																// Variable increment for the [horizontal print]
					}
					else {
						int letterCounter = 0;															// Variable for the printing of letter
						if(lengthCounter == 0)															// Check if the length of the counter is at 0
							letterCounter = numberInput + 1;											// Set the counter to number plus 1 so it will print the letter once

						for(; letterCounter < numberInput + 2; letterCounter++) {						// Loop for printing the letters inside the belt
							if(lengthCounter < numberSqrt) {											// Continue printing if the [horizontal print] is less than squareRoot of the number input by user
								if(numberInput % 2 == 0)												// Check if the number input by the user is Odd or Even
									cout << letter2Input;												// If Even print the first letter input
								else
									cout << letter1Input;												// If Odd print the second letter input
							}

							lengthCounter++;															// Variable increment for the [horizontal print]
						}

						for(int spaceCounter = 0; spaceCounter < numberInput - 2; spaceCounter++) {		// Loop for printing the space in between the letters
							if(lengthCounter < numberSqrt)												// Continue printing if the [horizontal print] is less than squareRoot of the number input by user
								cout << " ";															// Print space

							lengthCounter++;															// Variable increment for the [horizontal print]
						}
					}
				}
		
				cout << endl;
				heightCounter++;																		// Variable increment for the [vertical print]
			}

			#pragma endregion
			break;

		case 2:
			#pragma region For Loop Statement																												

			for(int heightCounter = 0; heightCounter < numberInput + 2; heightCounter++) {				// Loop for the "endl" [vertical print]
				for(int lengthCounter = 0; lengthCounter < numberSqrt;) {								// Loop for the printing from left to right [horizontal print]
					if(heightCounter == 0 || heightCounter == numberInput + 1) {						// Prints series of letters at the top and bottom of the belt pattern
						if(numberInput % 2 == 0)														// Check if the number input by the user is Odd or Even
							cout << letter1Input;														// If Even print the first letter input
						else
							cout << letter2Input;														// If Odd print the second letter input

						lengthCounter++;																// Variable increment for the [horizontal print]
					}
					else {
							int letterCounter = 0;														// Variable for the printing of letter
							if(lengthCounter == 0)														// Check if the length of the counter is at 0
								letterCounter = numberInput + 1;										// Set the counter to number plus 1 so it will print the letter once

							for(; letterCounter < numberInput + 2; letterCounter++) {					// Loop for printing the letters inside the belt
								if(lengthCounter < numberSqrt) {										// Continue printing if the [horizontal print] is less than squareRoot of the number input by user
									if(numberInput % 2 == 0)											// Check if the number input by the user is Odd or Even
										cout << letter2Input;											// If Even print the first letter input
									else
										cout << letter1Input;											// If Odd print the second letter input
								}

								lengthCounter++;														// Variable increment for the [horizontal print]
							}

							for(int spaceCounter = 0; spaceCounter < numberInput - 2; spaceCounter++) {	// Loop for printing the space in between the letters
								if(lengthCounter < numberSqrt)											// Continue printing if the [horizontal print] is less than squareRoot of the number input by user
									cout << " ";														// Print space

								lengthCounter++;														// Variable increment for the [horizontal print]
							}
					}
				}
				cout << endl;
			}

			#pragma endregion
			break;

		case 3:
			#pragma region While Loop Statement																																					

			while(heightCounter < numberInput + 2) {													// Loop for the "endl" [vertical print]
				int lengthCounter = 0;																	// Variable the holds the length of print

				while(lengthCounter < numberSqrt) {														// Loop for the printing from left to right [horizontal print]
					if(heightCounter == 0 || heightCounter == numberInput + 1) {						// Prints series of letters at the top and bottom of the belt pattern
						if(numberInput % 2 == 0)														// Check if the number input by the user is Odd or Even
							cout << letter1Input;														// If Even print the first letter input
						else
							cout << letter2Input;														// If Odd print the second letter input

						lengthCounter++;																// Variable increment for the [horizontal print]
					}
					else {
						int letterCounter = 0;															// Variable for the printing of letter
						if(lengthCounter == 0)															// Check if the length of the counter is at 0
							letterCounter = numberInput + 1;											// Set the counter to number plus 1 so it will print the letter once

						while(letterCounter < numberInput + 2){											// Loop for printing the letters inside the belt
							if(lengthCounter < numberSqrt) {											// Continue printing if the [horizontal print] is less than squareRoot of the number input by user
								if(numberInput % 2 == 0)												// Check if the number input by the user is Odd or Even
									cout << letter2Input;												// If Even print the first letter input
								else
									cout << letter1Input;												// If Odd print the second letter input
							}

							lengthCounter++;															// Variable increment for the [horizontal print]
							letterCounter++;															// Variable increment for the letter counter
						}

						int spaceCounter = 0;															// Variable for the printing of spaces
						while(spaceCounter < numberInput - 2) {											// Loop for printing the space in between the letters
							if(lengthCounter < numberSqrt)												// Continue printing if the [horizontal print] is less than squareRoot of the number input by user
								cout << " ";															// Print space														

							lengthCounter++;															// Variable increment for the [horizontal print]
							spaceCounter++;																// Variable increment for the space counter
						}
					}
				}
		
				cout << endl;
				heightCounter++;																		// Variable increment for the [vertical print]
			}

			#pragma endregion
			break;

		case 4:
			#pragma region Do While Statement																						

			do {																						// Loop for the "endl" [vertical print]
				int lengthCounter = 0;																	// Variable the holds the length of print

				do {																					// Loop for the printing from left to right [horizontal print]
					if(heightCounter == 0 || heightCounter == numberInput + 1) {						// Prints series of letters at the top and bottom of the belt pattern
						if(numberInput % 2 == 0)														// Check if the number input by the user is Odd or Even
							cout << letter1Input;														// If Even print the first letter input
						else
							cout << letter2Input;														// If Odd print the second letter input

						lengthCounter++;																// Variable increment for the [horizontal print]
					}
					else {
						int letterCounter = 0;															// Variable for the printing of letter
						if(lengthCounter == 0)															// Check if the length of the counter is at 0
							letterCounter = numberInput + 1;											// Set the counter to number plus 1 so it will print the letter once

						do {																			// Loop for printing the letters inside the belt
							if(lengthCounter < numberSqrt) {											// Continue printing if the [horizontal print] is less than squareRoot of the number input by user
								if(numberInput % 2 == 0)												// Check if the number input by the user is Odd or Even
									cout << letter2Input;												// If Even print the first letter input
								else
									cout << letter1Input;												// If Odd print the second letter input
							}

							lengthCounter++;															// Variable increment for the [horizontal print]
							letterCounter++;															// Variable increment for the letter counter
						} while(letterCounter < numberInput + 2);

						int spaceCounter = 0;															// Variable for the printing of spaces
						do {
							if(lengthCounter < numberSqrt)												// Continue printing if the [horizontal print] is less than squareRoot of the number input by user
								cout << " ";															// Print space		

							lengthCounter++;															// Variable increment for the [horizontal print]
							spaceCounter++;																// Variable increment for the space counter
						} while(spaceCounter < numberInput - 2);
					}

				} while(lengthCounter < numberSqrt);

				cout << endl;
				heightCounter++;																		// Variable increment for the [vertical print]
			} while(heightCounter < numberInput + 2);

				#pragma endregion
			break;
		}

		cout << endl;
		cout << "Do you want to try again? (y/n)" << endl;												// Ask the user if he wants to repeat the program
		cin >> repeatProgramInput;

	} while(repeatProgramInput == 'y');																	// Repeat the program if the user input is "y"
																										// And end the program if the user input any letter that is not "y"
	cout << endl;
	cout << "Thank you!";

	getch();
	return 0;
}