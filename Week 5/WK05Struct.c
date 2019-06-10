/**********************************************************************
Name:           Cameron Gray
Section:        QQ
Date:           2017-10-03
Description:    Structures:
                - Declaration (derived type)
                - Instantiation (variable declaration)
                - Member access
                - Setting member values
**********************************************************************/

#include<stdio.h>

// Derived type declared
struct Student {
    int studentID;
    int semester;
    float grade;
};

int main(void) {

    // 1. Initialized
    struct Student studentA = { 5001, 1, 80.5f };
    
    // 1. Show Initialized studentA
    printf("Variable: studentA\n");
    printf("Student ID Semester Grade\n");
    printf("---------- -------- -----\n");
    printf("%-10d %8d %5.1f\n", studentA.studentID, studentA.semester, studentA.grade);
    printf("\n\n");

    /*------------------------------------------------------------------------------------*/
    // 2. Uninitialized
    struct Student studentB;

    // 2. Manually Set values for uninitialized
    studentB.studentID = 5002;
    studentB.semester = 1;
    studentB.grade = 90.8f;

    // 2. Show post-initialized studentB
    printf("Variable: studentB\n");
    printf("Student ID Semester Grade\n");
    printf("---------- -------- -----\n");
    printf("%-10d %8d %5.1f\n", studentB.studentID, studentB.semester, studentB.grade);
    printf("\n\n");

    // 2. Get user input to set the values using standard input (keyboard)
    printf("Enter new information for studentB\n");
    printf("Student ID:");
    scanf("%d", &studentB.studentID);
    printf("Semester:");
    scanf("%d", &studentB.semester);
    printf("Grade:");
    scanf("%f", &studentB.grade);
    printf("\n");

    // 2. Show post-initialized studentB
    printf("Variable: studentB\n");
    printf("Student ID Semester Grade\n");
    printf("---------- -------- -----\n");
    printf("%-10d %8d %5.1f\n", studentB.studentID, studentB.semester, studentB.grade);
    printf("\n\n");

    return 0;
}