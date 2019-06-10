/* -------------------------------------------
Name:				Marquise Daye
Student number:		102174174
Email:				mdaye1@mysenece.ca
Section:			SQQ
Date:				December 1,2017
----------------------------------------------
Assignment: 1
Milestone:  2
---------------------------------------------- */

#define _CRT_SECURE_NO_WARNINGS

#include <stdio.h>
#include "contacts.h"


// This source file needs to "know about" the structures you declared
// in the header file before referring to those new types:
// HINT: put the header file name in double quotes so the compiler knows
//       to look for it in the same directory/folder as this source file
// #include your contacts header file on the next line:


int main(void)
{
	// Declare variables here:
	char uInput;
	struct Name name = { { 0 } };
	struct Address address = { 0 };
	struct Numbers numbers = { { 0 } };


	// Display the title
	printf("Contact Management System\n");
	printf("-------------------------\n");

	// Contact Name Input:
	printf("Please enter the contact's first name: ");
	scanf(" %30[^\n]", name.firstName);


	printf("Do you want to enter a middle initial(s)? (y or n): ");
	scanf(" %c", &uInput);


	if (uInput != 'Y' && uInput != 'y') {
		printf("Do you want to enter a middle initial(s)? (y or n): ");
		scanf(" %c", &uInput);

	}
	else {
		printf("Please enter the contact's middle initial(s): ");
		scanf(" %s", name.middleInitial);

	}


	printf("Please enter the contact's last name: ");
	scanf(" %35[^\n]", name.lastName);


	// Contact Address Input:

	printf("Please enter the contact's street number: ");
	scanf("%d", &address.streetNumber);

	printf("Please enter the contact's street name: ");
	scanf(" %40[^\n]", address.street);

	printf("Do you want to enter an apartment number? (y or n): ");
	scanf(" %c", &uInput);

	if (uInput != 'Y' && uInput != 'y') {
		printf("Do you want to enter an apartment number? (y or n): ");
		scanf(" %c", &uInput);

	}
	else {
		printf("Please enter the contact's apartment number: ");
		scanf(" %d", &address.apartmentNumber);
	}


	printf("Please enter the contact's postal code: ");
	scanf(" %7[^\n]", address.postalCode);

	printf("Please enter the contact's city: ");
	scanf(" %s", address.city);

	// Contact Numbers Input:
	printf("Do you want to enter a cell phone number? (y or n): ");
	scanf(" %c", &uInput);

	if (uInput != 'y' && uInput != 'Y') {
		printf("Do you want to enter a cell phone number? (y or n): ");
		scanf(" %c", &uInput);

	}
	else {
		printf("Please enter the contact's cell phone number: ");
		scanf(" %s", numbers.cell);

	}

	printf("Do you want to enter a home phone number? (y or n): ");
	scanf(" %c", &uInput);

	if (uInput != 'y' && uInput != 'Y') {
		printf("Do you want to enter a home phone number? (y or n): ");
		scanf(" %c", &uInput);

	}
	else {
		printf("Please enter the contact's home phone number: ");
		scanf(" %s", numbers.home);

	}

	printf("Do you want to enter a business phone number? (y or n): ");
	scanf(" %c", &uInput);

	if (uInput != 'y' && uInput != 'Y') {
		printf("Do you want to enter a business phone number? (y or n): ");
		scanf(" %c", &uInput);

	}
	else {
		printf("Please enter the contact's business phone number: ");
		scanf(" %s", numbers.business);

	}

	printf("\n");

	// Display Contact Summary Details
	printf("Contact Details\n");
	printf("---------------\n");
	printf("Name Details\n");
	printf("First name: %s\n", name.firstName);
	printf("Middle initial(s): %s\n", name.middleInitial);
	printf("Last name: %s\n", name.lastName);
	printf("\n");

	printf("Address Details\n");
	printf("Street number: %d\n", address.streetNumber);
	printf("Street name: %s\n", address.street);
	printf("Apartment: %d\n", address.apartmentNumber);
	printf("Postal code: %s\n", address.postalCode);
	printf("City: %s\n", address.city);
	printf("\n");

	printf("Phone Numbers:\n");
	printf("Cell phone number: %s\n", numbers.cell);
	printf("Home phone number: %s\n", numbers.home);
	printf("Business phone number: %s\n", numbers.business);
	printf("\n");




	// Display Completion Message
	printf("Structure test for Name, Address, and Numbers Done!\n");


	return 0;
}