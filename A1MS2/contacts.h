/* -------------------------------------------
Name:				Marquise Daye
Student number:		10217174	
Email:				mdaye1@myseneca.ca
Section:			SQQ
Date:				November 25, 2017
----------------------------------------------
Assignment: 1
Milestone:  2
---------------------------------------------- */

// Structure type Name declaration
struct Name {
	char firstName[31];
	char middleInitial[7];
	char lastName[36];
};

// Structure type Address declaration
// Place your code from Milestone #1 here...
struct Address{
	int streetNumber;
	char street[41];
	int apartmentNumber;
	char postalCode[8];
	char city[41];
};

// Structure type Numbers declaration
// Place your code from Milestone #1 here...
struct Numbers {
	char cell[21];
	char home[21];
	char business[21];
};
