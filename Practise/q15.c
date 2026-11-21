#include <stdio.h>
#include <stdlib.h>

int main(){
    int n, found=0, returnSize=3,pos=0;
    scanf("%d", &n);
    int *arr = malloc(n*sizeof(int));
    
    for(int i=0; i<n; i++){
        scanf("%d", &arr[i]);
    }

    for(int i=0; i<n; i++){
        for(int j=i+1; j<n; j++){
            for(int k=j+1; k<n; k++){
                if(arr[i]+arr[j]+arr[k]==0){
                    found++;
                }
            }
        }
    }

    int *result = malloc(found*returnSize*sizeof(int));

    for(int i=0; i<n; i++){
        for(int j=i+1; j<n; j++){
            for(int k=j+1; k<n; k++){
                if(arr[i]+arr[j]+arr[k]==0){
                    *(result + pos) = arr[i];
                    *(result + pos + 1) = arr[j];
                    *(result + pos + 2) = arr[k];
                    pos += 3;
                }
            }
        }
    }

    for(int i=0; i<found*returnSize; i++){
        if(i%3==0){
            printf("\n");
        }
        printf("%d ", *(result+i));
    }

    return 0;
}