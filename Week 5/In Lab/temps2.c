/*
	Name: Marquise Daye
	Student #: 102174174
	Date: October 6, 2017
	Section: SQQ
	Desc: Workshop 4 - In Lab
*/

#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h> 


int main(void) {

	int i;
	int HighV[10];
	int LowV[10];
	int NUMS;
	
	printf("---=== IPC Temperature Calculator V2.0 ===---\n");

	//user selects how many days
	printf("Please enter the number of days, between 3 and 10, inclusive: ");
	scanf("%d", &NUMS);
	printf("\n");

	//if conditions by the user aren't met
	if (NUMS < 3 || NUMS > 10)

		//display error message
		printf("Invalid entry, please enter a number between 3 and 10, inclusive: ");
	scanf("%d", &NUMS);
	printf("\n");

	for (i = 0; i < NUMS; i++) {

		//user enters High Temp
		printf("Day %d - High: ", (i + 1));
		//store information 
		scanf("%d", &HighV[i]);
		
		
		//User eneters low temp
		printf("Day %d - Low: ", (i + 1));
		scanf("%d", &LowV[i]);
		

	}

	printf("Day Hi Low\n");

	for (i = 0; i < NUMS; i++) {

		printf("%d  %d  %d\n", (i + 1), HighV[i], LowV[i]);
	}

	return 0;
}