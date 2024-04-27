#include <stdio.h>
#include <stdbool.h>
#include <stdlib.h>

int count = 0; // Global variable to count solutions
int print(int n);
void nq(int n, int k);
bool isSafe(int k, int i);
int a[10]; // Removed initialization

int main() {
    int n, breadth;
    printf("Enter the length of matrix: ");
    scanf("%d", &n);
    printf("Enter the breadth of matrix: ");
    scanf("%d", &breadth);
    for (int i = 0; i < n; i++) {
        a[i] = -1; // Initialize array with -1
    }
    nq(n, 0); // Start with first row
    printf("Total solutions: %d\n", count); // Print total count of solutions
    
    return 0;
}

void nq(int n, int k) {
    if (k == n) {
        count++; // Increment count when a solution is found
        print(n);
        for (int i = 0; i < n; i++) {
            printf("%d ", a[i]);
        }
        printf("\n");
        return;
    }
    for (int i = 0; i < n; i++) {
        if (isSafe(k, i)) {
            a[k] = i;
            nq(n, k + 1);
            a[k] = -1; // Reset the value after exploring
        }
    }
}

bool isSafe(int k, int i) {
    for (int j = 0; j < k; j++) {
        if (a[j] == i || abs(k - j) == abs(i - a[j])) {
            return false;
        }
    }
    return true;
}

int print(int n){
for(int i=0;i<n;i++){
for(int j=0;j<n;j++){
if(a[i]==j){
printf(" Q");
}
else{
printf(" *");
}
}
printf("\n");
}
}










