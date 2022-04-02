/* Example Program For Else if */
#include<stdio.h>
int main(){
  int num;
  printf("Enter Num: ");
  scanf("%d", &num);
  
  if(num == 10)
    printf("Number is 10");
  else if(num == 20)
    printf("Number is 20");
  else
    printf("Number is neither 10 nor 20");
  getch();
 }
