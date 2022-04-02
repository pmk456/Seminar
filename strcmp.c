/* Program for strcmp */
#include<stdio.h>
#include<string.h>
int main(){
    char str[100], str2[100];
    printf("Enter String: ");
    gets(str);
    printf("Enter String 2: ");
    gets(str2);
    if(strcmp(str, str2) == 0)
        printf("Two Strings are same");
    else
        printf("Two Strings are different");
}
            
            
