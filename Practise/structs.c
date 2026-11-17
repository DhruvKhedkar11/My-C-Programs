#include <stdio.h>

int main()
{
    typedef struct 
    {
        char *name[30];
        int age;
    } data;
    data.age = 17;
} 