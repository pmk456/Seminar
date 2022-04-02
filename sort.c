/* Program to print array in ascending order (OR) Program to sort a given array */
#include<stdio.h>
int main(){
    int a[100], i, j, n, temp;
    printf("Enter Array Size upto 100: ");
    scanf("%d", &n);
    printf("Enter Array Elements: ");
    for(i=0;i<n;i++)
        scanf("%d", &a[i]);
    for(i=0;i<n;i++){
        for(j=0;j<n-i-1;j++){
            if(a[j] > a[j+1]){
                temp=a[j];
                a[j]=a[j+1];
                a[j+1]=temp;
            }
        }
    }
    printf("Array in Ascending Order: \n");
    for(i=0;i<n;i++)
        printf("%d\t", a[i]);
    getch();
}
                  
