/* Program to print array elements  */
#include<stdio.h>
int main(){
  int a[10], n, i;
  printf("Enter Array Size upto 10: ");
  scanf("%d", &n);
  for(i=0;i<n;i++)
    scanf("%d", &a[i]);
  for(i=0;i<n;i++)
    printf("%d\t", a[i]);
  getch();
}
