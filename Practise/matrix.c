#include <stdio.h>

int main(){
    int arow, acolumn, brow, bcolumn,p;

    printf("Enter Rows and Columbs of matrix A: ");
    scanf("%d %d", &arow, &acolumn);
    int a[arow][acolumn];

    for(int i=0; i<arow; i++){
        for(int j=0; j<acolumn; j++){
            scanf("%d", &a[i][j]);
        }
    }
    printf("***************************************************************************************\n");

    printf("Enter Rows and Columbs of matrix B: ");
    scanf("%d %d", &brow, &bcolumn);
    int b[brow][bcolumn];

    for(int i=0; i<brow; i++){
        for(int j=0; j<bcolumn; j++){
            scanf("%d", &b[i][j]);
        }
    }
    printf("***************************************************************************************\n");

    if(acolumn!=brow){
        printf("MF Invalid.");
        return 0;
    }
    p = acolumn;

    int r[arow][bcolumn];

    for(int i=0; i<arow; i++){
        for(int j=0; j<bcolumn; j++){
            r[i][j] = 0;
        }
    }

    for(int i=0; i<arow; i++){
        for(int j=0; j<bcolumn; j++){
            for(int k=0; k<p; k++){
                r[i][j] += a[i][k] * b[k][j] ;
            }
        }
    }

    for(int i=0; i<arow; i++){
        for(int j=0; j<bcolumn; j++){
            printf("%d ", r[i][j]);
        }
        printf("\n");
    }

    return 0;
}