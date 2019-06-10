/* -------------------------------------------
Name:				Marquise Daye
Student number:		102174174
Email:				mdaye1@myseneca.ca
Section:			SQQ
Date:				Decemeber 11, 2017
----------------------------------------------
Assignment: 2
Milestone:  2
---------------------------------------------- */

#define _CRT_SECURE_NO_WARNINGS

#include <stdio.h>

// This source file needs to "know about" the functions you prototyped
// in the contact helper header file.
// HINT: Put the header file name in double quotes so the compiler knows
//       to look for it in the same directory/folder as this source file
//       #include your contactHelpers header file on the next line:

#include "contactHelpers.h"
//------------------------------------------------------
// Function Definitions
//------------------------------------------------------

// +-------------------------------------------------+
// | ====== Assignment 2 | Milestone 2 =======       |
// +-------------------------------------------------+
// | NOTE:  Copy/Paste your Assignment-2 Milestone-1 |
// |        empty function definitions below and     |
// |        complete the definitions as per the      |
// |        Milestone-2 specifications               | 
// |                                                 |
// | - The clearKeyboard function is done for you    |
// +-------------------------------------------------+


// Clear the standard input buffer
void clearKeyboard(void)
{
	while (getchar() != '\n'); // empty execution code block on purpose
}

// pause function definition goes here:
void pause(void) {
	printf("(Press Enter to Continue)");

	clearKeyboard();

}

// getInt function definition goes here:
int getInt(void) {

	char NL = 'x';
	int tstInteger = 0;
	int flag = 0;


	scanf(" %d%c", &tstInteger, &NL);

	do {


		if (NL != '\n') {
			clearKeyboard();
			printf("*** INVALID INTEGER *** <Please enter an integer>: ");
			scanf(" %d%c", &tstInteger, &NL);
			flag = 1;

		}
		else {
			flag = 0;

	}

	} while (flag == 1);
		
	return tstInteger;

}



// getIntInRange function definition goes here:
int getIntInRange(int min, int max) {

	
	int tstInteger = 0;
	int flag = 0;


	tstInteger = getInt();

	do {

		if (tstInteger < min || tstInteger > max) {
			printf("*** OUT OF RANGE *** <Enter a number between %d and %d>: ", min, max);
			tstInteger = getInt();
			flag = 1;

		}
		else
			flag = 0;
		

	} while (flag == 1);

	return tstInteger;

}

// yes function definition goes here:
int yes(void) {

	char uInput = 's';
	int result;
	char NL = 'm';
	int flag = 0;

	scanf(" %c%c", &uInput, &NL);
	
	do {

		if (NL != '\n') {
			clearKeyboard();
			printf("*** INVALID ENTRY *** <Only (Y)es or (N)o are acceptable>: ");
			scanf(" %c%c", &uInput, &NL);
			flag = 1;

		}
		else {
			if (uInput == 'Y' || uInput == 'y') {
				result = 1;
				flag = 0;
			}

			else if (uInput == 'N' || uInput == 'n') {
				result = 0;
				flag = 0;
			}
		}

		
	} while (flag == 1);

	return result;

}

// menu function definition goes here:
int menu(void) {

	int uSelect = 0;

	printf("Contact Management System\n");
	printf("-------------------------\n");
	printf("1. Display contacts\n");
	printf("2. Add a contact\n");
	printf("3. Update a contact\n");
	printf("4. Delete a contact\n");
	printf("5. Search contacts by cell phone number\n");
	printf("6. Sort contacts by cell phone number\n");
	printf("0. Exit\n");
	printf("\n");
	printf("Select an option:> ");

	uSelect = getIntInRange(0, 6);

	printf("\n");
	
	return uSelect;

}

// ContactManagerSystem function definition goes here:
void ContactManagerSystem(void) {

	int flag = 0;
	int uSelect = 0;
	int uInput = 8;

	uSelect = menu();


	do {


		if (uSelect == 1) {
			printf("<<< Feature 1 is unavailable >>>\n\n");
			pause();
			printf("\n");
			uSelect = menu();
			flag = 1;
		}
		else if (uSelect == 2) {
			printf("<<< Feature 2 is unavailable >>>\n\n");
			pause();
			printf("\n");
			uSelect = menu();
			flag = 1;
		}
		else if (uSelect == 3) {
			printf("<<< Feature 3 is unavailable >>>\n\n");
			pause();
			printf("\n");
			uSelect = menu();
			flag = 1;
		}
		else if (uSelect == 4) {
			printf("<<< Feature 4 is unavailable >>>\n\n");
			pause();
			printf("\n");
			uSelect = menu();
			flag = 1;
		}
		else if (uSelect == 5) {
			printf("<<< Feature 5 is unavailable >>>\n\n");
			pause();
			printf("\n");
			uSelect = menu();
			flag = 1;
		}
		else if (uSelect == 6) {
			printf("<<< Feature 6 is unavailable >>>\n\n");
			pause();
			printf("\n");
			uSelect = menu();
			flag = 1;
		}
		else if (uSelect == 0) {
			printf("Exit the program? (Y)es/(N)o: ");
			uInput = yes();
			flag = 1;
			printf("\n");

			if (uInput == 1) {
				printf("Contact Management System: terminated");
				flag = 0;
				printf("\n");

			}
			else if (uInput == 0) {
				menu();
				flag = 1;

			}
		}
		else
			flag = 0;

	} while (flag == 1);
}