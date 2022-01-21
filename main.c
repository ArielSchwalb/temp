#include <stdio.h>
#include <stdlib.h>

int main()
{

//Ask for user input and convert the user input to the temp variable.
    float temp;
    printf("Input temperature in degree celsius:");
    scanf("%f", &temp);

//Convert celsius to fahrenheit and print the solution.
    printf("Equivalent temperature in degree fahrenheit is %f", temp*1.8+32);


    printf("\n");
    return 0;
}
