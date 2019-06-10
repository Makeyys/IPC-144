/* 
:::::::::::::::  REVISED WITH SUGGESTED MODIFICATIONS :::::::::::::::
            :  Note the comments for further refinement regarding 
            :  variables and printing as you go
            
Name:		Marquise Daye
Date:		Sept 22, 2017
Section:	SQQ
Desc:		Workshop 2 - At Home 
*/

#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>										//Standard Input/Output Header

int main(void)
{
    double amount = 0;
    int LooniesR = 0, QuartersR = 0;
    // NOTE: you really only need one variable for remainder
    //       if you print the results as you go and then
    //       reassign the new remainder after each calculation
    float remainder1 = 0, remainder2 = 0;

    printf("Please enter the amount to be paid: $");
    scanf("%lf", &amount);

    LooniesR = amount / 1;
    remainder1 = amount - LooniesR;
    // NOTE:  as mentioned above, if you print the results as you go you wouldn't
    //        need to have two variables for remainder: print the results for loonies here...

    QuartersR = remainder1 / 0.25;
    remainder2 = remainder1 - (QuartersR*0.25);	

    // NOTE:  as mentioned above, if you print the results as you go you wouldn't
    //        need to have two variables for remainder
    printf("Loonies required: %d, balance owing $%.2f\n", LooniesR, remainder1);
    printf("Quarters required: %d, balance owing $%.2f\n", QuartersR, remainder2);

    return 0;
}


/* YOUR ORIGINAL CODE BELOW:
int main(void)											// main function (return int type and has “void” parameters)
{
	
	double amount = 0;									//amount of money the uer inserts into the program	
	
		printf("Please enter the amount to be paid: $");	//ask the user the amount of money they want to be paid in change
			scanf("%lf", &amount);							//scans the amount that the user inserted in


			int LooniesR = amount / 1;						//calculates how many loonies can go into the amount the user inserted
			float remainder1 = amount - LooniesR;						//the remaining amount after subracting the amount by the amount of loonies		
			
			int QuartersR = remainder1 / 0.25;					//calculates how many quaters can go into the amount the user inserted
			float remainder2 = remainder1 - (QuartersR*0.25);	

				printf("Loonies required: %d, balance owing $%.2f\n", LooniesR, remainder1);	//display how many loonies we owe to the user and their remaining balance
 				printf("Quarters required: %d, balance owing $%.2f\n", QuartersR, remainder2);	//display how many quarters we owe to the user and their remaining balance
				


		return 0;											//interger value
}


*/