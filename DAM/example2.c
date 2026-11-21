#include <stdio.h>
#include <stdlib.h>

int main(){
    int n,m;
    scanf("%d", &n);

    int *p =  (int *)malloc(n*sizeof(int));

    if(p==NULL){
        printf("Invalid");
        return 1;
    }
    
    for(int i=0; i<n; i++){
        scanf("%d", p+i);
    }

    printf("*****************************************************************************\n");

    scanf("%d", &m);
    int *q = realloc(p, m*sizeof(int));

    if(q==NULL){
        printf("Invalid");
        return 1;
    }

    for(int *a=q+n; a<q+m; a++){
        scanf("%d", a);
    }

    for(int *x=q; x<q+m; x++){
        printf("%d ", *x);
    }

    free(q);
    q=NULL;
    return 0;
}