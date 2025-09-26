// Made by Shorya Bhardwaj
// Experiment5_PosNegOddEven.c: Count positive, negative, odd, and even numbers in an array
#include <stdio.h>
int main() {
    int n;
    printf("How many numbers? ");
    scanf("%d", &n);
    int arr[n], pos=0, neg=0, odd=0, even=0;
    printf("Enter the numbers: ");
    for(int i=0;i<n;i++) {
        scanf("%d", &arr[i]);
        if(arr[i]>0) pos++;
        else if(arr[i]<0) neg++;
        if(arr[i]%2==0) even++;
        else odd++;
    }
    printf("Positive: %d\n", pos);
    printf("Negative: %d\n", neg);
    printf("Even: %d\n", even);
    printf("Odd: %d\n", odd);
    return 0;
}
// Made by Shorya Bhardwaj