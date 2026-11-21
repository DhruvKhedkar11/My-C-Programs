#include <stdlib.h>

int** threeSum(int* nums, int numsSize, int* returnSize, int** returnColumnSizes) {
    int *arr = malloc(numsSize*sizeof(int));
    for(int i=0; i<numsSize; i++){
        arr[i] = *(nums+i);
    }
    
}