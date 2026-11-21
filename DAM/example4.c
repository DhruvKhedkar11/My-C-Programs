#include <stdio.h>
#include <stdlib.h>

int main(){
    int row,col,n;
    scanf("%d %d", &row, &col);
    n = row * col ;

    int *arr = (int *)malloc(row*col*sizeof(int));

    if(arr==NULL){
        return 1;
    }

    for(int *p=arr; p<arr+n; p++){
        scanf("%d", p);
    }

    for(int i=0; i<row; i++){
        for(int j=0; j<col; j++){
            printf("%d ", *(arr + i*col + j));
        }
        printf("\n");
    }
    printf("\n");

    free(arr);
    arr = NULL;
    return 0;
}