/* Program For strlen() */
#include<stdio.h>
#include<string.h>
int main(){
    char str[100];
    printf("Enter String: ");
    gets(str);
    printf("Length of %s is %d", str, strlen(str));
    getch();
}
   
