/**********************************************************************
Name:           Cameron Gray
Section:        QQ
Date:           2017-10-03
Description:    Structures:
                - Structure array
                - Structure with member array
                - Member access
                - Setting member values
**********************************************************************/

#include<stdio.h>

#define MAXSTUDENTS 10  // Literal constant for maximum students in the array
#define MAXGRADES 5     // Literal constant for maximum grades

// Derived type declared
struct Student {
    int studentID;
    int semester;
    float grade;
};

// Derived type declared
struct StudentGrades {
    int studentID;
    float grades[MAXGRADES];
};


int main(void) {
    int i;

    /*--------------------------------------------------------------------------------------------*/
    // 1. Array of structures!
    struct Student sectionLM[MAXSTUDENTS] = {   { 5001, 1, 70.1f },     // Student 1, Element: 0
                                                { 5002, 1, 60.2f },     // Student 2, Element: 1
                                                { 5003, 1, 50.3f },     // Student 3, Element: 2
                                                { 5004, 1, 40.4f },     // Student 4, Element: 3
                                                { 5005, 1, 30.5f } };   // Student 5, Element: 4

    // Display students array
    printf("Student ID Semester Grade\n");
    printf("---------- -------- -----\n");
    for (i = 0; i < MAXSTUDENTS; i++) {
        // The below line is fine... but for demonstration purposes see below for more readable format
        //printf("%-10d %8d %5.1f\n", sectionLM[i].studentID, sectionLM[i].semester, sectionLM[i].grade);

        // Split print statement into parts for readability... but above line is just as good
        printf("%-10d ", sectionLM[i].studentID);
        printf("% 8d ", sectionLM[i].semester);
        printf("%5.1f\n", sectionLM[i].grade);
    }

    printf("\n\n");

    // Set values for remaining students (6-10)
    // Get from standard input (keyboard) the new values 
    i = 5; // set to 6th student index
    while (i < MAXSTUDENTS) {
        printf("Enter new information for the student %d\n", i+1);

        printf("Student ID:");
        scanf("%d", &sectionLM[i].studentID);

        printf("Semester:");
        scanf("%d", &sectionLM[i].semester);

        printf("Grade:");
        scanf("%f", &sectionLM[i].grade);
        printf("\n");

        i++; // increase index to next student
    }

    // Show results:
    printf("\n");
    printf("Student ID Semester Grade\n");
    printf("---------- -------- -----\n");
    for (i = 0; i < MAXSTUDENTS; i++) {
        // The below line is fine... but for demonstration purposes see below for more readable format
        //printf("%-10d %8d %5.1f\n", sectionLM[i].studentID, sectionLM[i].semester, sectionLM[i].grade);

        // Split print statement into parts for readability... but above line is just as good
        printf("%-10d ", sectionLM[i].studentID);
        printf("% 8d ", sectionLM[i].semester);
        printf("%5.1f\n", sectionLM[i].grade);
    }
    printf("\n\n");

    return 0;
}