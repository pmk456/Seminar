/* Program To Multiply Two given matrices by Patan Musthakheem Khan  */
#include <stdio.h>
int main(){
    int i, j, k, row, col;
    int a[10][10], b[10][10], c[10][10];
    printf("Enter Total Rows: "); 
    scanf("%d", &row);
    printf("Enter Total Colums: "); 
    scanf("%d", &col);
    printf("Enter Matrix 1: \n");
    for(i=0;i<row;i++){
        for(j=0;j<col;j++)
            scanf("%d", &a[i][j]);
    }
    printf("Enter Matrix 2: \n");
    for(i=0;i<row;i++){
        for(j=0;j<col;j++)
            scanf("%d", &b[i][j]);
    }
    for(i=0;i<row;i++){
        for(j=0;j<col;j++){
            c[i][j] = 0;
            for(k=0;k<row;k++){
                c[i][j] = c[i][j] + a[i][k] * b[k][j];
            }
        }
    }
    printf("Multiplication of Matrix is: \n");
    for(i=0;i<row;i++){
        for(j=0;j<col;j++)
            printf("%d\t", c[i][j]);
        printf("\n");
    }
    getch();
    return 0;
}
