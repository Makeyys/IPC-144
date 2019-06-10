/* -------------------------------------------
Name:				Marquise Daye
Student number:		102174174
Email:				mdaye1@myseneca.ca
Section:			SQQ
Date:				December 19, 2017
----------------------------------------------
Assignment: 2
Milestone:  4
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

// ----------------------------------------------------------
// define MAXCONTACTS for sizing contacts array (5):

#define	MAXCONTACTS 5


//------------------------------------------------------
// Function Definitions
//------------------------------------------------------

// +-------------------------------------------------+
// | NOTE:  Copy/Paste your Assignment-2 Milestone-3 |
// |        function definitions below...            |
// +-------------------------------------------------+

// clearKeyboard
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

	uSelect = getIntInRange(0, 5);

	printf("\n");

	return uSelect;

}

// ContactManagerSystem:
void ContactManagerSystem(void) {

	struct Contact contact[MAXCONTACTS] =

	{ { { "Rick",{ '\0' }, "Grimes" },
		{ 11, "Trailer Park", 0, "A7A 2J2", "King City" },
		{ "4161112222", "4162223333", "4163334444" } },
	{
		{ "Maggie", "R.", "Greene" },
		{ 55, "Hightop House", 0, "A9A 3K3", "Bolton" },
		{ "9051112222", "9052223333", "9053334444" } },
	{
		{ "Morgan", "A.", "Jones" },
		{ 77, "Cottage Lane", 0, "C7C 9Q9", "Peterborough" },
		{ "7051112222", "7052223333", "7053334444" } },
	{
		{ "Sasha",{ '\0' }, "Williams" },
		{ 55, "Hightop House", 0, "A9A 3K3", "Bolton" },
		{ "9052223333", "9052223333", "9054445555" } },
	};


	int flag = 1;
	int uSelect = 0;
	int uInput = 8;


	


	do {

		uSelect = menu();

		if (uSelect == 1) {
			displayContacts(contact, MAXCONTACTS);
			pause();
			printf("\n");
			
			
		}
		else if (uSelect == 2) {
			addContact(contact, MAXCONTACTS);
			pause();
			printf("\n");
			
			
		}
		else if (uSelect == 3) {
			updateContact(contact, MAXCONTACTS);
			pause();
			printf("\n");
			
			
		}
		else if (uSelect == 4) {
			deleteContact(contact, MAXCONTACTS);
			pause();
			printf("\n");
			
			
		}
		else if (uSelect == 5) {
			searchContacts(contact, MAXCONTACTS);
			pause();
			printf("\n");
			
			
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
				flag = 1;

			}
		}
		else
			flag = 0;

	} while (flag == 1);
}

// +-------------------------------------------------+
// | NOTE:  Copy/Paste your Assignment-2 Milestone-3 |
// |        empty function definitions below...      |
// +-------------------------------------------------+

// getTenDigitPhone:
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
	int m = 0;
	int inputOut;

	for (m = 0; m < size; m++) {
		inputOut = strcmp(contacts[m].numbers.cell, cellNum);

		if (inputOut == 0) {
			return m;
		}

	}
	return -1;
}


// displayContactHeader
// Put empty function definition below:

void displayContactHeader(void) {


	printf("+-----------------------------------------------------------------------------+\n");
	printf("|                              Contacts Listing                               |\n");
	printf("+-----------------------------------------------------------------------------+\n");

}

// displayContactFooter
// Put empty function definition below:
void displayContactFooter(int displayC) {

	
	
	printf("+-----------------------------------------------------------------------------+\n");
	printf("Total contacts: %d\n\n", displayC);

}


// displayContact:
// Put empty function definition below:
void displayContact(const struct Contact*contact) {

	if (*contact->name.middleInitial != '\0') {
		printf(" %s %s %s\n", contact->name.firstName, contact->name.middleInitial, contact->name.lastName);
		printf("    C: %-10s   H: %-10s   B: %-10s\n", contact->numbers.cell, contact->numbers.home, contact->numbers.business);
	}
	else {

		printf(" %s %s\n", contact->name.firstName, contact->name.lastName);
		printf("    C: %-10s   H: %-10s   B: %-10s\n", contact->numbers.cell, contact->numbers.home, contact->numbers.business);

	}
	if (contact->address.apartmentNumber > 0) {
		printf("       %d %s, Apt# %d, %s, %s\n", contact->address.streetNumber, contact->address.street, contact->address.apartmentNumber, contact->address.city, contact->address.postalCode);
	}
	else {
		printf("       %d %s, %s, %s\n", contact->address.streetNumber, contact->address.street, contact->address.city, contact->address.postalCode);
	}

}


// displayContacts:
// Put empty function definition below:
void displayContacts(const struct Contact contact[], int d) {
	
	int i = 0;
	int tContacts = 0;

	displayContactHeader();

	for (i = 0; i < d; i++) {

		if (strlen(contact[i].numbers.cell) > 0) {
			displayContact(&contact[i]);
			tContacts++;
		}
		
	}
		displayContactFooter(tContacts);
}


// searchContacts:
// Put empty function definition below:

void searchContacts(const struct Contact contact[], int search) {

	char uInputCell[11];
	int i;

	printf("Enter the cell number for the contact: ");
	getTenDigitPhone(uInputCell);

	i = findContactIndex(contact, search, uInputCell);

	if (i == -1) {
		printf("*** Contact NOT FOUND ***\n");

	}
	else {
		printf("\n");
		displayContact(&contact[i]);
		printf("\n");
	}
		
}


// addContact:
// Put empty function definition below:

void addContact(struct Contact contact[], int add) {

	
	char emy[11] = "\0";
	int found = 8;
	
	found = findContactIndex(contact, add, emy);

	

		if (found != -1) {
			getContact(&contact[found]);
			printf("--- New contact added! ---\n");
		}
		else
			printf("*** ERROR: The contact list is full! ***\n");



}

// updateContact:
// Put empty function definition below:

void updateContact(struct Contact contact[], int update) {

	char uInputCell[11];
	int i;
	int Input;
	
	printf("Enter the cell number for the contact: ");
	getTenDigitPhone(uInputCell);	

	i = findContactIndex(contact, update, uInputCell);

	if (i == -1) {
		printf("*** Contact NOT FOUND ***\n");

	}
	else {
		printf("\n");
		printf("Contact found:\n");
		displayContact(&contact[i]);
		printf("\n");
		



		printf("Do you want to update the name? (y or n): ");
		Input = yes();

		if (Input == 1) {
			getName(&contact[i].name);

		}

			printf("Do you want to update the address? (y or n): ");
			Input = yes();

			if (Input == 1) {
				getAddress(&contact[i].address);


			}

			printf("Do you want to update the numbers? (y or n): ");
			Input = yes();

			if (Input == 1) {
				getNumbers(&contact[i].numbers);

			} 

			printf("--- Contact Updated! ---\n");
			
		}
	
}


	// deleteContact:
	// Put empty function definition below:

void deleteContact(struct Contact contact[], int delete) {

	char uInputCell[11];
	int i;
	int Input;

	printf("Enter the cell number for the contact: ");
	getTenDigitPhone(uInputCell);

	i = findContactIndex(contact, delete, uInputCell);

	if (i == -1) {
		printf("*** Contact NOT FOUND ***\n");
		
	}
	else {
		printf("\n");
		printf("Contact found:\n");
		displayContact(&contact[i]);
		printf("\n");

	}

		printf("CONFIRM: Delete this contact? (y or n): ");
		Input = yes();

		if (Input == 1) {
			contact[i].numbers.cell[0] = '\0';
			printf("--- Contact deleted! ---\n");

		}
						
	
}


