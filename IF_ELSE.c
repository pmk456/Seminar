/* Program to find wheather given number is even or odd*/
#include<stdio.h>
int main(){
    int n;
    printf("Enter Number: ");
    scanf("%d", &n);
    if(n % 2 == 0)
        printf("Given number is even");
    else
        printf("Given number is odd");
    getch();
}
