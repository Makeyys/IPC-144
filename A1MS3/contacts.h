/* -------------------------------------------
Name:				Marquise Daye
Student number:		102174174
Email:				mdaye1@myseneca.ca
Section:			SQQ
Date:				December 1, 2017
----------------------------------------------
Assignment: 1
Milestone:  3
---------------------------------------------- */

// Structure type Name declaration
struct Name {
	char firstName[31];
	char middleInitial[7];
	char lastName[36];
};

// Structure type Address declaration
// Place your code from Milestone #2 here...

struct Address {
	int streetNumber;
	char street[41];
	int apartmentNumber;
	char postalCode[8];
	char city[41];
};

// Structure type Numbers declaration
// Place your code from Milestone #2 here...

struct Numbers {
	char cell[21];
	char home[21];
	char business[21];
};


// Structure type Contact declaration
// Place your code here...

struct Contacts {
	struct Name name;
	struct Address address;
	struct Numbers numbers;
};

void getName(Name *);
void getAddress(Address *);
void getNumbers(Numbers *);