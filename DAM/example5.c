#include <stdio.h>
#include <stdlib.h>

int main(){
    int n;
    scanf("%d", &n);

    int *arr = calloc(n, sizeof(int));
    for(int *p=arr; p<arr+n; p++){
        printf("%d ", *p);
    }
    printf("\n");
    printf("*****************************************************************************\n");

    for(int *p=arr; p<arr+n; p++){
        scanf("%d ", p);
    }

    for(int *p=arr; p<arr+n; p++){
        printf("%d ", *p);
    }

    return 0;
}