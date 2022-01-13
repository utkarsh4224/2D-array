#include<stdio.h>
int main()
{
    int r,c;
    printf("Enter number of rows: ");
    scanf("%d",&r);
    printf("Enter number of coloums: ");
    scanf("%d",&c);
    int array1[r][c];
    int i, j;
    for(i=0; i<r; i++) {
        for(j=0;j<c;j++) {
            printf("Enter value for disp[%d][%d]:", i, j);
            scanf("%d", &array1[i][j]);
        }
    }
    printf("Two Dimensional array elements:\n");
    for(i=0; i<r; i++) {
        for(j=0;j<c;j++) {
            printf("%d ",array1[i][j]);
            if(j==r-1){
                printf("\n");
            }
        }
    }
    return 0;
}
