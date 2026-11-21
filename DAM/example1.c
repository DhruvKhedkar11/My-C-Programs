#include <stdio.h>
#include <stdlib.h>

int main(){
    int n,lar;
    scanf("%d", &n);

    int *p =  (int *)malloc(n*sizeof(int));
    
    for(int i=0; i<n; i++){
        scanf("%d", p+i);
    }

    lar = *p;

    for(int *a=p+1; a<p+n; a++){
        lar = *a>lar ? *a : lar ;
    }
    printf("The Largest Element is: %d\n", lar);

    free(p);
    return 0; 
}