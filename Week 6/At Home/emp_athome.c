/*
Name:				Marquise Daye
Student number:		102174174
Email:				mbdaye1@myseneca.ca
Workshop:			Workshop 5 - At Home
Section:			SQQ
Date:				October 13, 2017
*/

#define _CRT_SECURE_NO_WARNINGS

#include <stdio.h>

// Define Number of Employees "SIZE" to be 2
#define SIZE 4

// Declare Struct Employee 
struct Employee
{
	int ID;
	int Age;
	double Salary;
};

/* main program */
int main(void) {

	int empCount = 0;
	int i;
	int option = 0;
	int flag = 1;
	int uInput = 0;

	printf("---=== EMPLOYEE DATA ===---\n\n");

	// Declare a struct Employee array "emp" with SIZE elements 
	// and initialize all elements to zero
	struct Employee emp[SIZE] = { { 0 } };

	do {
		// Print the option list
		printf("1. Display Employee Information\n");
		printf("2. Add Employee\n");
		printf("3. Update Employee Salary\n");
		printf("4. Remove Employee\n");
		printf("0. Exit\n\n");
		printf("Please select from the above options: ");

		// Capture input to option variable
		scanf("%d", &option);
		printf("\n");

		switch (option) {
		case 0:	// Exit the program
			printf("Exiting Employee Data Program. Good Bye!!!\n");

			break;
		case 1: // Display Employee Data
				// @IN-LAB

			printf("EMP ID  EMP AGE EMP SALARY\n");
			printf("======  ======= ==========\n");

			// Use "%6d%9d%11.2lf" formatting in a   
			// printf statement to display
			// employee id, age and salary of 
			// all  employees using a loop construct 
			for (i = 0; i < SIZE; i++) {

				if (empCount <= 0) {
					printf("No Employee's Detected\n");
					printf("\n");
				}
				else if (emp[i].ID == 0) {
					emp[i].Age = 0;
					emp[i].Salary = 0;
				}
				else {




					// The loop construct will be run for SIZE times 
					// and will only display Employee data 
					// where the EmployeeID is > 0



					printf("%6d%9d%11.2lf\n", emp[i].ID, emp[i].Age, emp[i].Salary);
					
					;
				}
			}

			printf("\n");

			break;

		case 2:	// Adding Employee
				// @IN-LAB

			printf("Adding Employee\n");
			printf("===============\n");

			// Check for limits on the array and add employee 
			// data accordingly.




			if (empCount >= SIZE) {

				printf("ERROR!!! Maximum Number of Employees Reached\n");
				printf("\n");


			}
			// 
			else {
				printf("Enter Employee ID: ");
				scanf("%d", &emp[empCount].ID);
				printf("Enter Employee Age: ");
				scanf("%d", &emp[empCount].Age);
				printf("Enter Employee Salary: ");
				scanf("%lf", &emp[empCount].Salary);
				printf("\n");
				empCount++;

			}


			break;
		case 3: // Update Employee Salary
			printf("Update Employee Salary\n");
			printf("======================\n");

			do {

				printf("Enter Employee ID: ");
				scanf("%d", &uInput);

				for (i = 0; i < SIZE; i++) {

					if (uInput == emp[i].ID) {
						printf("The current salary is %.2lf\n", emp[i].Salary);
						printf("Enter Employee New Salary: ");
						scanf("%lf", &emp[i].Salary);
						printf("\n");
						flag = 1;
					}
				}

			} while (flag == 0);


				break;	
		case 4: //Remove Employee
			printf("Remove Employee\n");
			printf("===============\n");

			do {

				printf("Enter Employee ID: ");
				scanf("%d", &uInput);

				for (i = 0; i < SIZE; i++) {

					if (uInput == emp[i].ID) {						
						printf("Employee %d will be removed\n", emp[i].ID);
						emp[i].ID = 0;
						printf("\n");
						flag = 1;
						empCount--;
					}
				}

			} while (flag == 0);

			break;
	

		default:

			printf("ERROR: Incorrect Option: Try Again\n\n");
		}

	} while (option != 0);


	return 0;
}





//PROGRAM OUTPUT IS SHOW BELOW

/*
---=== EMPLOYEE DATA ===---

1. Display Employee Information
2. Add Employee
0. Exit

Please select from the above options: 2

Adding Employee
===============
Enter Employee ID: 111
Enter Employee Age: 34
Enter Employee Salary: 78980.88

1. Display Employee Information
2. Add Employee
0. Exit

Please select from the above options: 2

Adding Employee
===============
Enter Employee ID: 112
Enter Employee Age: 41
Enter Employee Salary: 65000

1. Display Employee Information
2. Add Employee
0. Exit

Please select from the above options: 2

Adding Employee
===============
ERROR!!! Maximum Number of Employees Reached

1. Display Employee Information
2. Add Employee
0. Exit

Please select from the above options: 1

EMP ID  EMP AGE EMP SALARY
======  ======= ==========
111       34   78980.88
112       41   65000.00

1. Display Employee Information
2. Add Employee
0. Exit

Please select from the above options: 0

Exiting Employee Data Program. Good Bye!!!

*/