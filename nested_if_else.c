/* Program For Finding biggest among three given numbers using nested if else statements */
#include<stdio.h>
int main(){
  int a, b, c;
  printf("Enter A B C Values: ");
  scanf("%d%d%d", &a, &b, &c);
  if(a>b){
    if(a>c)
      printf("Largest = %d", a);
    else
      printf("Largest = %d", c);
  }
  else{
      if(b>c)
        printf("Largest = %d", b);
      else
        printf("Largest = %d", c);
  } 
}
