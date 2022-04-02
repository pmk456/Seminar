/* Example program for structer */
#include<stdio.h>
int main(){
    struct student{
        int pin_no;
        float marks;
        char grade;
    };
    struct student s1 = {98, 92.12, 'A'};
    printf("\nStudent Pin No = %d\n", s1.pin_no);
    printf("Student Marks = %f\n", s1.marks);
    printf("Student Grade = %c\n", s1.grade);
    getch();
}
    
