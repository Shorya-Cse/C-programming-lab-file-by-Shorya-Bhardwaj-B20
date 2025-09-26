#include <stdio.h>
//  Find the second largest number in an array
#include <stdio.h>
int main() {
    int n, i;
    printf("How many numbers? ");
    scanf("%d", &n);
    int arr[n];
    printf("Enter the numbers: ");
    for(i=0;i<n;i++) scanf("%d", &arr[i]);
    int first=arr[0], second=-999999;
    for(i=1;i<n;i++) {
        if(arr[i]>first) {
            second=first;
            first=arr[i];
        } else if(arr[i]>second && arr[i]!=first) {
            second=arr[i];
        }
    }
    printf("Second largest is %d\n", second);
    return 0;
}
// Made by Shorya Bhardwaj