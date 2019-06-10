// Name:				Marquise Daye
// Student Number:		102174174
// Email:				mdaye1@myseneca.ca
// Section:				SQQ
// Workshop:			Workshop 3 - At Home 

#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h> 
#define NUMS 4

int main(void)
{

	int HighV = 0, LowV = 0, HighT = 0, LowT = 10;
	int days, HighD, LowD, flag = 1;
	float TotalT = 0;

	printf("---=== IPC Temperature Analyzer ===---\n");

   
	 
	for (days = 1; days <= NUMS; days++) {
	do {
	//make user enter high value
	printf("Enter the high value for day %d: ", days);
	scanf("%d", &HighV);

	printf("\n");
	//add high value to total
			

	//make user enter low value
	printf("Enter the low value for day %d: ", days);
	scanf("%d", &LowV);
	printf("\n");
	//if the high value is greater than 40 and the low value is lower than 40
	if (HighV < LowV || HighV > 40 || LowV < -40) {
	printf("Incorrect values, temperatures must be in the range -40 to 40, high must be greater than low.\n\n");
	flag = 1;
	} else {
	TotalT += HighV + LowV;
	flag = 0;

	}
	
	//if the High Value is higher than the Highest Temperature
	if (HighV > HighT) {
	HighT = HighV;
	HighD = days;

	}
	
	//if the Lowest Value is lower than the Lower Temperature
	if (LowV < LowT) {
	LowT = LowV;
	LowD = days;

	}

	} while (flag == 1);

	}
	
	// print the user results
	printf("The average (mean) temperature was: %.2f\n", TotalT / (NUMS * 2));
	printf("The highest temperature was %d, on day %d\n", HighT, HighD);
	printf("The lowest temperature was %d, on day %d\n", LowT, LowD);
	

	return 0;
}
