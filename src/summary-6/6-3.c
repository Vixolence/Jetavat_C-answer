#include <stdio.h>

void main() 
{
    int number;
    int count = 1;

    printf("Input Number = ");
    scanf("%d", &number);

    do 
        printf("Number = %d \n", count++);
    while (count <= number);
}