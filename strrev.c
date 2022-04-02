/* Program for strrev() */
#include<stdio.h>
#include<string.h>
int main(){
    char str[100], str_backup[100];
    printf("Enter String: ");
    gets(str);
    strcpy(str_backup, str);
    strrev(str);
    printf("Reverse of %s is %s", str_backup, str);
    getch();
}
