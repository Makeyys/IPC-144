/**********************************************************************
Name:           Cameron Gray
Section:        QQ
Date:           2017-10-03
Description:    Structures:
                - Structure members with ANOTHER STRUCTURE
                - Member access
                - Setting member values
**********************************************************************/

#include<stdio.h>

#define MAXSTUDENTS 3

// Derived type declared
struct Student {
    int studentID;
    int semester;
    float grade;
};

// Derived type declared with another derived type (struct inside another struct)!
struct IPC144 {
    int year;
    struct Student students[MAXSTUDENTS]; // array of type struct Student
};

int main(void) {
   
    int i;

    /*--------------------------------------------------------------------------------------------*/
    // Struct type with another derived type (struct type "Student")
    struct IPC144 ipcLM = { 2017,{                        // <--- year
                                    { 5001, 1, 80.5f },  // <--- Student[0] has 3 members:id, semester, grade
                                    { 5002, 1, 60.4f },  // <--- Student[1] has 3 members:id, semester, grade
                                    { 5003, 1, 40.3f }   // <--- Student[2] has 3 members:id, semester, grade
                                } };

    printf("\n\n");
    printf("IPC144: Year(%4d)\n", ipcLM.year);  // Structure member "year"
    printf("------------------\n\n");
    printf("Student ID Semester Grade\n");
    printf("---------- -------- -----\n");
    for (i = 0; i < MAXSTUDENTS; i++) {
        // The below line is fine... but for demonstration purposes see below for more readable format
        //printf("%-10d %8d %5.1f\n", ipcLM.students[i].studentID, ipcLM.students[i].semester, ipcLM.students[i].grade);
        
        // Split print statement into parts for readability... but above line is just as good
        printf("%-10d ", ipcLM.students[i].studentID);
        printf("% 8d ", ipcLM.students[i].semester);
        printf("%5.1f\n", ipcLM.students[i].grade);
    }
    printf("\n\n");

    // Get from standard input (keyboard) a new value for the 3rd student: INDEX 2
    printf("Enter new information for the 3rd student\n");
    printf("Student ID:");
    scanf("%d", &ipcLM.students[2].studentID);
    printf("Semester:");
    scanf("%d", &ipcLM.students[2].semester);
    printf("Grade:");
    scanf("%f", &ipcLM.students[2].grade);

    // Show results:
    printf("\n");
    printf("Student ID Semester Grade\n");
    printf("---------- -------- -----\n");
    for (i = 0; i < MAXSTUDENTS; i++) {
        // The below line is fine... but for demonstration purposes see below for more readable format
        //printf("%-10d %8d %5.1f\n", ipcLM.students[i].studentID, ipcLM.students[i].semester, ipcLM.students[i].grade);

        // Split print statement into parts for readability... but above line is just as good
        printf("%-10d ", ipcLM.students[i].studentID);
        printf("% 8d ", ipcLM.students[i].semester);
        printf("%5.1f\n", ipcLM.students[i].grade);
    }
    printf("\n\n");

    return 0;
}