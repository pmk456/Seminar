/* Program to find wheather given number is even */
#include<stdio.h>
int main(){
    int n;
    printf("Enter Number: ");
    scanf("%d", &n);
    if(n % 2 == 0)
        printf("Given number is even");
    getch();
}
