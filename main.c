#include <stdio.h>
#include <stdlib.h>

int main()
{

    float temp;
    printf("Input temperature in degree celsius:");
    scanf("%f", &temp);

    printf("Equivalent temperature in degree fahrenheit is %f", temp*1.8+32);


    printf("\n");
    return 0;
}
