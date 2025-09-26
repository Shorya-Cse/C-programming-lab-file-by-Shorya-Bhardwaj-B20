#include <stdio.h>
// Experiment4_StaticVariable.c: Demonstrate the use of static variable in C
int main() {
    static int count = 0;
    count++;
    printf("Static variable is %d\n", count);
    return 0;
}
// Made by Shorya Bhardwaj