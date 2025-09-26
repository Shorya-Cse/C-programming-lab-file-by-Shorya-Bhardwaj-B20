#include <stdio.h>
// Experiment5_Frequency.c: Find the frequency of a number in an array
int main() {
    int n, num, count=0;
    printf("How many numbers? ");
    scanf("%d", &n);
    int arr[n];
    printf("Enter the numbers: ");
    for(int i=0;i<n;i++) scanf("%d", &arr[i]);
    printf("Which number to count? ");
    scanf("%d", &num);
    for(int i=0;i<n;i++) if(arr[i]==num) count++;
    printf("Count is %d\n", count);
    return 0;
}
// Made by Shorya Bhardwaj