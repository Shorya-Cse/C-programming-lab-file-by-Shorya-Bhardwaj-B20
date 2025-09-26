#include <stdio.h>
// Experiment1_NameAge.c: Input and display user's name and age
int main() {
    char name[50];
    int age;
    printf("What is your name? ");
    scanf("%s", name);
    printf("How old are you? ");
    scanf("%d", &age);
    printf("Your name is %s\n", name);
    printf("Your age is %d\n", age);
    return 0;
}
// Made by Shorya Bhardwaj