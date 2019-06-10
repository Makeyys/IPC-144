/**********************************************************************
Name:           Cameron Gray
Section:        QQ
Date:           2017-10-03
Description:    Structures:
                - Structure with member array
                - Member access
                - Setting member values
**********************************************************************/

#include<stdio.h>

#define MAXGRADES 10     // Literal constant for maximum grades

// Derived type declared
struct StudentGrades {
    int studentID;
    int semester;
    float grades[MAXGRADES];
};


int main(void) {
    int i;
    float sum = 0.0f;

    /*--------------------------------------------------------------------------------------------*/
    // 1. StudentGrades - Initialized (with first 5 grades)
    struct StudentGrades studentA = {    11111,          // Member: studentID
                                        2,              // Member: semester
                                        {   75.0f,      // Member: grades[0] <--- initializing the array
                                            70.5f,      // Member: grades[1]
                                            80.8f,      // Member: grades[2]
                                            90.1f,      // Member: grades[3]
                                            60.4f} };   // Member: grades[4]

    // 1. Display student grades
    printf("Grades for Student ID: %d (Semester:%d)\n", studentA.studentID, studentA.semester);
    printf("Test# Grade\n");
    printf("----- -----\n");
    for (i = 0; i < MAXGRADES; i++) {
        printf("%-5d %5.1f\n", i+1, studentA.grades[i]);
    }
    printf("\n");

    // 1. Set values for remaining grades (6-10)
    // Get from standard input (keyboard) the new values 
    i = 5; // set to 6th grade index
    printf("Enter the remaining grades for the student\n");
    while (i < MAXGRADES) {
        printf("Grade for test-%d:", i+1);
        scanf("%f", &studentA.grades[i]);

        i++; // increase index to next grade
    }

    // 1. Display the student's grades
    printf("\n");
    printf("Grades for Student ID: %d (Semester:%d)\n", studentA.studentID, studentA.semester);
    printf("Test# Grade\n");
    printf("----- -----\n");
    for (i = 0; i < MAXGRADES; i++) {
        printf("%-5d %5.1f\n", i + 1, studentA.grades[i]);
        sum += studentA.grades[i];
    }
    printf("\n");

    // 1. Display average
    printf("Average grade: %.2f\n\n", (float)sum / MAXGRADES);

    // reset for next example
    sum = 0.0f;

    /*--------------------------------------------------------------------------------------------*/
    // 2. StudentGrades - Not Initialized
    struct StudentGrades studentB;

    // 2. We have to set the student ID and semester before trying to show it or it will error!
    studentB.studentID = 0;
    studentB.semester = 0;

    // 2. Display student grades (will be undertermined values!)
    printf("[BEFORE INITIALIZATION]\n", studentB.studentID, studentB.semester);
    printf("Grades for Student ID: %d (Semester:%d)\n", studentB.studentID, studentB.semester);
    printf("Test# Grade\n");
    printf("----- -----\n");
    for (i = 0; i < MAXGRADES; i++) {
        printf("%-5d %5.1f\n", i + 1, studentB.grades[i]);
    }
    printf("\n");

    // 2. Now let's get the data from the user!
    printf("Enter the student ID: ");
    scanf("%d", &studentB.studentID);
    printf("\n");
    printf("Enter the semester: ");
    scanf("%d", &studentB.semester);
    printf("\n");

    // 2. Get test results and set all the grades
    // Get from standard input (keyboard) the values 
    printf("Enter the student grades!\n");
    for (i = 0; i < MAXGRADES; i++) {
        printf("Grade for test-%d:", i + 1);
        scanf("%f", &studentB.grades[i]);
    }

    // 2. Display the student's grades
    printf("\n\n");
    printf("Grades for Student ID: %d (Semester:%d)\n", studentB.studentID, studentB.semester);
    printf("Test# Grade\n");
    printf("----- -----\n");
    for (i = 0; i < MAXGRADES; i++) {
        printf("%-5d %5.1f\n", i + 1, studentB.grades[i]);
        sum += studentB.grades[i];
    }
    printf("\n\n");

    // 1. Display average
    printf("Average grade: %.2f\n\n", (float)sum / MAXGRADES);

    return 0;
}