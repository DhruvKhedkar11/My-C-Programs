#include <stdio.h>
#include "header.h"

int main(){
    int a,b,c;
    float x;
    printf("Enter Physics Marks: ");
    scanf("%d", &a);
    printf("Enter Chemistry Marks: ");
    scanf("%d", &b);
    printf("Enter Maths Marks: ");
    scanf("%d", &c);
    x = percentage(a,b,c);
    
    printf("\n");
    printf("----Student Report------\n");
    printf("\n");

    printf("Total Marks: %d\n", total(a,b,c));
    printf("Average: %.2f\n", avg(a,b,c));
    printf("Percentage: %.2f\n", percentage(a,b,c));
    printf("Grade: ");
    grade(x);
    printf("\n");

    return 0;
}