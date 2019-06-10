/*

Name:		Marquise Daye
Date:		Sept 22, 2017
Section:	SQQ
Desc:		Workshop 2 - At Home
*/

#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>										//Standard Input/Output Header

int main(void)
{

	int LooniesR, QuartersR, DimesR, NickelsR, PenniesR, remainderT = 0;
	float remainder, amount, GST = 0;


	printf("Please enter the amount to be paid: $");
	scanf("%f", &amount);

	GST = amount * .13 + .005;
	printf("GST: 1.13\n");
	amount = amount + GST;
	printf("Balance owing: $%.2f\n", amount);


	LooniesR = amount / 1;
	remainder = amount - LooniesR;
	printf("Loonies required: %d, balance owing $%.2f\n", LooniesR, remainder);
	remainderT = (int)(remainder * 100); //coverts the  first remainder from a decimal to a whole number (interger)


	QuartersR = remainderT / 25;
	remainderT = remainderT % 25;
	printf("Quarters required: %d, balance owing $%1.2f\n", QuartersR, (float)remainderT / 100);	//divides the whole number by 100 to covert it to a decimal (float)


	DimesR = remainderT / 10;
	remainderT = remainderT % 10;
	printf("Dimes required: %d, balance owing $%1.2lf\n", DimesR, (float)remainderT / 100);

	NickelsR = remainderT / 5;
	remainderT = remainderT % 5;
	printf("Nickels required: %d, balance owing $%1.2f\n", NickelsR, (float)remainderT / 100);

	PenniesR = remainderT / 1;
	remainderT = remainderT % 1;
	printf("Pennies required: %d, balance owing $%1.2f\n", PenniesR, (float)remainderT / 100);


	return 0;
}


