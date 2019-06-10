/* -------------------------------------------
Name:
Student number:
Email:
Section:
Date:
----------------------------------------------
Assignment: 2
Milestone:  3
---------------------------------------------- */

#define _CRT_SECURE_NO_WARNINGS

#include <stdio.h>

// +-------------------------------------------------+
// | NOTE:  Include additional header files...       |
// +-------------------------------------------------+
#include "contactHelpers.h"
#include "contacts.h"



// +---------------------------------------------------+
// | NOTE:  Copy/Paste your Assignment-2 Milestone-2   |
// |        function definitions below...              |
// |                                                   |
// | *** See hint regarding the getNumbers function    |
// +---------------------------------------------------+


// getName:
void getName(struct Name * name) {
	int uInput = 0;


	printf("Please enter the contact's first name: ");
	scanf(" %30[^\n]", name->firstName);


	printf("Do you want to enter a middle initial(s)? (y or n): ");
	uInput = yes();


	if (uInput == 1) {
		printf("Please enter the contact's middle initial(s): ");
		scanf(" %06s", name->middleInitial);
	}
	else {
		name->middleInitial[0] = '\0';
	}


	printf("Please enter the contact's last name: ");
	scanf(" %35[^\n]", name->lastName);


};


// getAddress:
void getAddress(struct Address * address) {

	int uInput = 8;

	printf("Please enter the contact's street number: ");
	address->streetNumber = getInt();

	printf("Please enter the contact's street name: ");
	scanf(" %40[^\n]", address->street);

	printf("Do you want to enter an apartment number? (y or n): ");
	uInput = yes();

	if (uInput == 1) {
		printf("Please enter the contact's apartment number: ");
		scanf(" %d", &address->apartmentNumber);

	}
	else {
		address->apartmentNumber = '\0';
	}

	printf("Please enter the contact's postal code: ");
	scanf(" %7[^\n]", address->postalCode);

	printf("Please enter the contact's city: ");
	scanf(" %40[^\n]", address->city);
};


// getNumbers:
// HINT:  Update this function to use the new helper 
//        function "getTenDigitPhone" where applicable

void getNumbers(struct Numbers * numbers) {

	int uInput = 12;


	printf("Please enter the contact's cell phone number: ");
	getTenDigitPhone(numbers->cell);



	printf("Do you want to enter a home phone number? (y or n): ");
	uInput = yes();

	if (uInput == 1) {

		printf("Please enter the contact's home phone number: ");
		getTenDigitPhone(numbers->home);

	}
	else {
		numbers->home[0] = '\0';
	}

	printf("Do you want to enter a business phone number? (y or n): ");
	uInput = yes();

	if (uInput == 1) {
		printf("Please enter the contact's business phone number: ");
		getTenDigitPhone(numbers->business);

	}
	else {
		numbers->business[0] = '\0';

	}
};


// getContact

void getContact(struct Contact *contact) {

	getName(&contact->name);
	getAddress(&contact->address);
	getNumbers(&contact->numbers);

};
