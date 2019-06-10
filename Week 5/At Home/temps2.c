/*
	Name: Marquise Daye
	Student #: 102174174
	Date: October 6, 2017
	Section: SQQ
	Desc: Workshop 4 - At Home
*/

#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h> 
#define NUMS 10




int main(void) {

	int i;
	int HighV[10];
	int LowV[10];
	int flag = 1;
	int HighD;
	int LowD;
	int HighT = 0;
	int LowT = 10;
	float TotalT = 0;
	int Days;
	int Days2;

	printf("---=== IPC Temperature Calculator V2.0 ===---\n");

	//user selects how many days
	printf("Please enter the number of days, between 3 and %d, inclusive: ", NUMS);
	scanf("%d", &Days);
	

	do {

		//if conditions by the user aren't met
		if (Days < 3 || Days > 10) {
			//display error message
			printf("Invalid entry, please enter a number between 3 and %d, inclusive: ", NUMS);
			scanf("%d", &Days);
			printf("\n");
			flag = 1;
		}
		else {
			printf("\n");
			flag = 0;
		}

	} while (flag == 1);

	for (i = 0; i < Days; i++) {

		//user enters High Temp
		printf("Day %d - High: ", (i + 1));
		//store information 
		scanf("%d", &HighV[i]);


		//if the Highest Value is higher than the Higher Temperature
		if (HighV[i] > HighT) {
			HighT = HighV[i];
			HighD = (i + 1);
		}
		//User eneters low temp
		printf("Day %d - Low: ", (i + 1));
		scanf("%d", &LowV[i]);


		//if the Lowest Value is lower than the Lower Temperature
		if (LowV[i] < LowT) {
			LowT = LowV[i];
			LowD = (i + 1);
		}

	}

	printf("\n");
	printf("Day  Hi  Low\n");

	for (i = 0; i < Days; i++) {
		//print the high and the low temperatures
		printf("%d    %d    %d\n", (i + 1), HighV[i], LowV[i]);
	}

	printf("\n");
	printf("The highest temperature was %d, on day %d\n", HighT, HighD);
	printf("The lowest temperature was %d, on day %d\n", LowT, LowD);


	do {
		printf("\n");
		printf("Enter a number between 1 and %d to see the average temperature for the entered number of days, enter a negative number to exit: ", Days);
		scanf("%d", &Days2);
		printf("\n");

		if (Days2 < 0) {
			printf("Goodbye!\n");
			printf("\n");
			flag = 0;
			return 0;
		}

		for (i = 0; i < Days2; i++) {



			if (Days2 > Days) {
				printf("Invalid entry, please enter a number between 1 and %d, inclusive: ", Days);
				scanf("%d", &Days2);
				printf("\n");
				flag = 1;
			}
			else
				flag = 0;

			TotalT += HighV[i] + LowV[i];
		}

		printf("The average temperature up to day %d is: %.2f", Days2, TotalT / (Days2 * 2));
		printf("\n");
		TotalT = 0;
		flag = 1;


	} while (flag == 1);

	return 0;
}