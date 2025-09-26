#include <stdio.h>
// Experiment3_BMI.c: Calculate Body Mass Index (BMI)
int main() {
    float w, h, bmi;
    printf("Enter your weight in kg: ");
    scanf("%f", &w);
    printf("Enter your height in m: ");
    scanf("%f", &h);
    bmi = w / (h * h);
    printf("Your BMI is %.2f\n", bmi);
    return 0;
}
// Made by Shorya Bhardwaj