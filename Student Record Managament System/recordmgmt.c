#include <stdio.h>

struct Student {
    char name[50];
    int marks;
    char grade;
};

char calculateGrade(int marks) {
    if (marks >= 90)
        return 'A';
    else if (marks >= 80)
        return 'B';
    else if (marks >= 70)
        return 'C';
    else if (marks >= 60)
        return 'D';
    else
        return 'F';
}

int main() {
    struct Student student;

    printf("Enter student's name: ");
    scanf("%s", student.name);

    printf("Enter marks (out of 100): ");
    scanf("%d", &student.marks);

    student.grade = calculateGrade(student.marks);

    printf("\nStudent Name: %s\n", student.name);
    printf("Marks: %d\n", student.marks);
    printf("Grade: %c\n", student.grade);

    return 0;
}
