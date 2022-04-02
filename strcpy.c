/* Program for strcpy() */
#include<stdio.h>
#include<string.h>
int main(){
  char original[100];
  char duplicate[100];
  printf("Enter String: ");
  // Reading string from user
  gets(original);
  strcpy(duplicate, original);
  printf("Original String is %s\n" ,original);
  printf("Duplicate String is %s\n", duplicate);
  getch();
}
