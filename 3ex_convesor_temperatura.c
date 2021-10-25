#include<stdio.h>
//Conversor de celcius para Fahrenheit
int main()
{
    float C,F;
    printf("\nConversor de Temperatura");
    printf("\n\nQuantos graus celcius?: ");
    scanf("%f", &C);
    F = ((9 * C)/5) + 32;
    printf("\n\n %.2fem Fahrenheit: %.2f\n", C, F);

}
