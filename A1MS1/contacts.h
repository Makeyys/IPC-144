/* -------------------------------------------
Name:					Marquise Daye
Student number:			102174174
Email:					mdaye1@myseneca.ca
Section:				SQQ
Date:					Nov 24, 2017
----------------------------------------------
Assignment: 1
Milestone:  1
---------------------------------------------- */

// Structure type Name declaration
struct Name {
	char firstName[31];
	char middleInitial[7];
	char lastName[36];
};

// Structure type Address declaration
// Place your code here...
struct Adress {
	int streetNumber;
	char street[41];	
	int apartmentNumber;
	char postalCode[8];
	char city[41];
};


// Structure type Numbers declaration
// Place your code here...
struct Numbers {
	char cell[21];
	char home[21];
	char business[21];
};
