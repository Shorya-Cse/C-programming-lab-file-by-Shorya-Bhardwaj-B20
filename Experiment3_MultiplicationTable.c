#include <stdio.h>
// Experiment3_MultiplicationTable.c: Print multiplication table for a given number
int main() {
    int n;
    printf("Enter a number: ");
    scanf("%d", &n);
    printf("Multiplication table for %d:\n", n);
    for(int i=1; i<=10; i++) {
        printf("%d x %d = %d\n", n, i, n*i);
    }
    return 0;
}
// Made by Shorya Bhardwaj