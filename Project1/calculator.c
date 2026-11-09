#include <stdio.h>
#include "header.h"

int total(int a, int b, int c) {
    return a + b + c;
}

float avg(int a, int b, int c) {
    return total(a, b, c) / 3.0;
}

float percentage(int a, int b, int c) {
    return (total(a, b, c) / 300.0) * 100;
}

void grade(float x) {
    if (x >= 90)
        printf("A+");
    else if (x >= 80)
        printf("A");
    else if (x >= 70)
        printf("B");
    else if (x >= 60)
        printf("C");
    else if (x >= 40)
        printf("D");
    else
        printf("F");
}
