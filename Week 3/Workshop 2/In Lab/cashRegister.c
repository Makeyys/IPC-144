/* 

Name:		Marquise Daye
Date:		Sept 22, 2017
Section:	SQQ
Desc:		Workshop 2 - At Home 
*/

#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>										//Standard Input/Output Header

// main function (return int type and has “void” parameters)
int main(void)											
{
	
	double amountOwing = 0, amount = 0;	
	int	LooniesR = 0 , QuartersR = 0, DimesR = 0, NickelsR = 0, PenniesR = 0, GST = 1.13;
	float remainder = 0, remainder2 = 0, remainder3 = 0, remainder4 = 0, remainder5 = 0;

	
			printf("Please enter the amount to be paid: $");	
			scanf("%lf", &amountOwing);		
			printf("GST: 1.13\n");

			amount = amountOwing * GST;
			printf("Balance owing: $%lf\n", amount);

			amount / 1;
			LooniesR = amount % 1;
			remainder = amount - LooniesR;						
			
			remainder / 0.25;
			QuartersR = remainder % 0.25;					
			remainder2 = remainder - (QuartersR*0.25);	

			DimesR = remainder2 % 0.10;
			remainder3 = remainder2 - (DimesR*0.10);

			NickelsR = remainder3 % 0.05;
			remainder4 = remainder3 - (NickelsR*0.05);

			PenniesR = remainder4 % 0.01;
			remainder5 = remainder4 - (PenniesR*0.01);

			printf("Loonies required: %d, balance owing $%.2f\n", LooniesR, remainder);	
 			printf("Quarters required: %d, balance owing $%.2f\n", QuartersR, remainder2);	
			printf("Dimes required : %d, balance owing $%.2f\n", DimesR, remainder3);
			printf("Nickels required : %d, balance owing $%.2f\n", NickelsR, remainder4);
			printf("Pennies required : %d, balance owing $%.2f\n", PenniesR, remainder5);



			return 0;											//interger value
}


