/*
     Name:      Jameson Bui
     Student#:  123160178
     Section:   Q


 ***TO CAMERON** 
 Can I get feedback on how my formating is on this source code compared to my "in_lab"

		 thanks! -Jameson
*/

// Start your code below:
#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>

int main(void)
{
	float input, remainder, GST = 0;
	int loonReq, quartReq, dimeReq, nickReq, penReq, int_remainder = 0;

	printf("Please enter the amount to be paid: $");
	scanf("%f", &input);
	printf("GST: 1.13\n");

	GST = input * .13 + .005;
	input += GST;

	printf("Balance owing: $%.2f\n", input);

	// *** Method used in "in_lab" workshop ***
	loonReq = input / 1;
	remainder = input - loonReq;
	printf("Loonies required: %d, balance owing $%.2f\n", loonReq, remainder);

	// *** Using Integer and Modulus ***
	int_remainder = (int) (remainder*100); // Casting remainder into an integer

	quartReq = int_remainder / 25; 
	int_remainder %= 25; // Modulus takes the remainder of (int_remainder / 25)
	printf("Quarters required: %d, balance owing $%1.2f\n", quartReq, (float)int_remainder/100);

	dimeReq = int_remainder / 10;
	int_remainder %= 10;
	printf("Dimes required: %d, balance owing $%1.2f\n", dimeReq, (float)int_remainder / 100); 
	// casts int_remainder to a float and moves 2 decimal places to print as a decimal number

	nickReq = int_remainder / 5;
	int_remainder %= 5;
	printf("Nickels required: %d, balance owing $%1.2f\n", nickReq, (float)int_remainder / 100);;

	penReq = int_remainder / 1;
	int_remainder %= 1;
	printf("Pennies required: %d, balance owing $%1.2f\n", penReq, (float)int_remainder / 100);

	return 0;
}