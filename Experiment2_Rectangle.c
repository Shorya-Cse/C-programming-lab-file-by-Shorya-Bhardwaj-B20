// Made by Shorya Bhardwaj
// Experiment2_Rectangle.c: Calculate area and perimeter of a rectangle
#include <stdio.h>
int main() {
    float l, w, a, p;
    printf("Enter length: ");
    scanf("%f", &l);
    printf("Enter width: ");
    scanf("%f", &w);
    a = l * w;
    p = 2 * (l + w);
    printf("Area is %.2f\n", a);
    printf("Perimeter is %.2f\n", p);
    return 0;
}
// Made by Shorya Bhardwaj