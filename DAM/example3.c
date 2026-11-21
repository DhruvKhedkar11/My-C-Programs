#include <stdio.h>
#include <stdlib.h>

int main(){
    int n;
    scanf("%d", &n);

    int *arr = malloc(n*sizeof(int));
    if(arr==NULL){
        printf("Invalid");
        return 1;
    }

    for(int *p=arr; p<arr+n; p++){
        scanf("%d", p);
    }

    for(int *q=arr+n-1; q>=arr; q--){
        printf("%d ", *q);
    }
    printf("\n");

    free(arr);
    arr = NULL;
    return 0;
}