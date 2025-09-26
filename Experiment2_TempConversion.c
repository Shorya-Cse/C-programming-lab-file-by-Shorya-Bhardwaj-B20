#include <stdio.h>
// Experiment2_TempConversion.c: Convert temperature from Celsius to Fahrenheit
int main() {
    float c, f;
    printf("Enter temperature in Celsius: ");
    scanf("%f", &c);
    f = (c * 9/5) + 32;
    printf("Fahrenheit is %.2f\n", f);
    return 0;
}
// Made by Shorya Bhardwaj