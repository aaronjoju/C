// Write a C program to read the roll no, name and Semester Marks for 5 Subjects( each Semester) for 3 students  and calculate the total percentage. The conditions must be followed 
// If Percentage <= 40 then and Check all the subjects marks if  marks < = 40 then Print Result Fail
// Percentage > = 60  and < = 80 then Print Result as First Class 
// Percentage > = 80 then < = 90  Print Result as First Class with Distinction
// Percentage > = 90 - 100 then Print Result as Outstanding 
// Print the Cummulative Mark sheet for all 6 Semesters with each semester 5 subjects and check eligibility to get the degree 


#include <stdio.h>

typedef struct {
    char rollNo[15];
    char name[50];
    int marks[5];
    float percentage;
} Student;

void calculatePercentage(Student *student) {
    int totalMarks = 0;
    for (int i = 0; i < 5; i++) {
        totalMarks += student->marks[i];
    }
    student->percentage = (float)totalMarks / 5;
}

void printResult(Student *student) {
    printf("Roll No: %s\n", student->rollNo);
    printf("Name: %s\n", student->name);
    printf("Percentage: %.2f\n", student->percentage);

    if (student->percentage <= 40) {
        printf("Result: Fail\n");
        for (int i = 0; i < 5; i++) {
            if (student->marks[i] <= 40) {
                printf("Subject %d: Fail (Marks: %d)\n", i + 1, student->marks[i]);
            }
        }
    } else if (student->percentage >= 60 && student->percentage < 80) {
        printf("Result: First Class\n");
    } else if (student->percentage >= 80 && student->percentage <= 90) {
        printf("Result: First Class with Distinction\n");
    } else if (student->percentage > 90 && student->percentage <= 100) {
        printf("Result: Outstanding\n");
    }
    printf("\n");
}

int main() {
    Student students[3];
    for (int i = 0; i < 3; i++) {
        printf("Enter details for Student %d:\n", i + 1);
        printf("Roll No: ");
        scanf("%s", students[i].rollNo);
        printf("Name: ");
        scanf("%s", students[i].name);
        for (int j = 0; j < 5; j++) {
            printf("Enter marks for Subject %d: ", j + 1);
            scanf("%d", &students[i].marks[j]);
        }
        calculatePercentage(&students[i]);
        printf("\n");
    }

    printf("Cumulative Mark Sheet:\n");
    for (int i = 0; i < 3; i++) {
        printf("Student %d:\n", i + 1);
        printResult(&students[i]);
    }

    return 0;
}
