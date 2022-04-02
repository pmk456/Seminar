/* Program for understand strcat() */
#include<stdio.h>
#include<string.h>
int main(){
    char first_name[100];
    char last_name[100];
    // Reading String from user
    printf("Enter First Name: ");
    gets(first_name);
    printf("Enter Last Name: ");
    gets(last_name);
    strcat(first_name, " ");
    strcat(first_name, last_name);
    printf("Full Name is %s", first_name);
    getch();
}
    
                   
  
