/* Example Program for Structer */
#include<stdio.h>
#include<string.h>
int main(){
    struct student{
        int pin_no;
        float marks;
        char grade;
    } s1 = {61, 86.12, 'B'}, s2;
    s2.pin_no = 62;
    s2.marks = 98.12;
    s2.grade = 'A';
    struct student s3 = {63, 35.12, 'C'};
    printf("Student 1 Details: \n");
    printf("Pin No = %d\n", s1.pin_no);
    printf("Marks = %f\n", s1.marks);
    printf("Grade = %c\n", s1.grade);
    printf("Student 2 Details: \n");
    printf("Pin No = %d\n", s2.pin_no);
    printf("Marks = %f\n", s2.marks);
    printf("Grade = %c\n", s2.grade);
    printf("Student 3 Details: \n");
    printf("Pin No = %d\n", s3.pin_no);
    printf("Marks = %f\n", s3.marks);
    printf("Grade = %c\n", s3.grade);
    getch();
}
