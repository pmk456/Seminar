/* Program for strcmp */
#include<stdio.h>
#include<string.h>
int main(){
    char str1[100], str2[100];
    int i;
    printf("Enter String 1: ");
    gets(str1);
    printf("Enter String 2: ");
    gets(str2);
    i = strcmp(str1, str2);
    if(i == 0)
        printf("Two Strings are same\n");
    else
        printf("Two Strings are different\n");
    printf("Difference Between strings is %d", i);
}
