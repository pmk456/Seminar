/* Program To Add Two Given matrices by Patan Musthakheem Khan*/
#include <stdio.h>
#include<conio.h>
int main(){
    int row, colum, total_rows, total_colums;
    int matrix1[10][10], matrix2[10][10], matrix3[10][10];
    printf("Enter Total Rows: "); 
    scanf("%d", &total_rows);
    printf("Enter Total Colums: "); 
    scanf("%d", &total_colums);
    printf("Enter Matrix 1: \n");
    for(row=0;row<total_rows;row++){
        for(colum=0;colum<total_colums;colum++)
            scanf("%d", &matrix1[row][colum]);
    }
    printf("Enter Matrix 2: \n");
    for(row=0;row<total_rows;row++){
        for(colum=0;colum<total_colums;colum++)
            scanf("%d", &matrix2[row][colum]);
    }
    for(row=0;row<total_rows;row++){
        for(colum=0;colum<total_colums;colum++)
            matrix3[row][colum] = matrix1[row][colum] + matrix2[row][colum];
    }
    printf("Addition of Matrix is: \n");
    for(row=0;row<total_rows;row++){
        for(colum=0;colum<total_colums;colum++)
            printf("%d\t", matrix3[row][colum]);
        printf("\n");
    }
    getch();
    return 0;
}
