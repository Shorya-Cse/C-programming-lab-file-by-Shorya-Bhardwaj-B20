// Made by Shorya Bhardwaj
// Experiment5_MatrixMultiplication.c: Multiply two matrices and display the result
#include <stdio.h>
int main() {
    int m, n, p, q;
    printf("Rows of first matrix: ");
    scanf("%d", &m);
    printf("Columns of first matrix: ");
    scanf("%d", &n);
    printf("Rows of second matrix: ");
    scanf("%d", &p);
    printf("Columns of second matrix: ");
    scanf("%d", &q);
    if(n!=p) {
        printf("Cannot multiply\n");
        return 0;
    }
    int A[m][n], B[p][q], C[m][q];
    printf("Enter first matrix:\n");
    for(int i=0;i<m;i++) for(int j=0;j<n;j++) scanf("%d", &A[i][j]);
    printf("Enter second matrix:\n");
    for(int i=0;i<p;i++) for(int j=0;j<q;j++) scanf("%d", &B[i][j]);
    for(int i=0;i<m;i++) {
        for(int j=0;j<q;j++) {
            C[i][j]=0;
            for(int k=0;k<n;k++) C[i][j]+=A[i][k]*B[k][j];
        }
    }
    printf("Answer:\n");
    for(int i=0;i<m;i++) {
        for(int j=0;j<q;j++) printf("%d ", C[i][j]);
        printf("\n");
    }
    return 0;
}
// Made by Shorya Bhardwaj