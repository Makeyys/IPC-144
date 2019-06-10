/* -------------------------------------------
Name:				Marquise Daye
Student number:		102174174
Email:				mdaye1@myseneca.ca
Section:			SQQ
Date:				December 15, 2017
----------------------------------------------
Assignment: 2
Milestone:  3
---------------------------------------------- */

#define _CRT_SECURE_NO_WARNINGS

#include <stdio.h>

// This source file needs to "know about" the SYSTEM string library functions.
// HINT: The library name is string.h.
//       #include the string.h header file on the next line:

#include "string.h"

// ----------------------------------------------------------
// Include your contactHelpers header file on the next line:

#include "contactHelpers.h"

//------------------------------------------------------
// Function Definitions
//------------------------------------------------------

// +-------------------------------------------------+
// | NOTE:  Copy/Paste your Assignment-2 Milestone-2 |
// |        function definitions below...            |
// +-------------------------------------------------+

// clearKeyboard:
void clearKeyboard(void)
{
	while (getchar() != '\n'); // empty execution code block on purpose
}

// pause function definition goes here:
void pause(void) {
	printf("(Press Enter to Continue)");

	clearKeyboard();

}

// getInt:
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


// getIntInRange:
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

// yes:
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
// menu:
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

// ContactManagerSystem:
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

// +-------------------------------------------------+
// | ====== Assignment 2 | Milestone 3 =======       |
// +-------------------------------------------------+
// | Put empty function definitions below...         |
// +-------------------------------------------------+

// Generic function to get a ten-digit phone number (ensures 10 chars entered)
void getTenDigitPhone(char telNum[11])
{
	int needInput = 1;

	while (needInput == 1) {
		scanf("%10s", telNum);
		clearKeyboard();

		// (String Length Function: validate entry of 10 characters)
		if (strlen(telNum) == 10)
			needInput = 0;
		else
			printf("Enter a 10-digit phone number: ");
	}
}

// findContactIndex:
int findContactIndex(const struct Contact contacts[], int size, const char cellNum[])
{
	return -1;
}


// displayContactHeader
// Put empty function definition below:

void displayContactHeader(void) {


}

// displayContactFooter
// Put empty function definition below:
void displayContactFooter(int displayC) {

}


// displayContact:
// Put empty function definition below:
void displayContact(const struct Contact* display) {

}


// displayContacts:
// Put empty function definition below:
void displayContacts(const struct Contact dc[], int dContracts) {

}


// searchContacts:
// Put empty function definition below:

void searchContacts(const struct Contact contactList[], int searchC) {

}


// addContact:
// Put empty function definition below:

void addContact(struct Contact add[], int addC) {

}

// updateContact:
// Put empty function definition below:

void updateContact(struct Contact update[], int updateC) {

}

// deleteContact:
// Put empty function definition below:

void deleteContact(struct Contact delete[], int deleteC) {

}

// sortContacts:
// Put empty function definition below:

void sortContacts(struct Contact sort[], int sortC) {

}