#include <stdio.h>
int getMax(int a[], int n) {
    int max = a[0];
    for (int i = 1; i < n; i++) {
        if (a[i] > max)
            max = a[i];
    }
    return max;
}
void radixsort(int a[], int n) {
    int big, nod = 0, steps, count[10], i, j, k,bucket[10][100],loc,div = 1;
    big = getMax(a, n);
    while (big > 0) {
        nod++;
        big /= 10;
    }
    for (steps = 1; steps <= nod; steps++) {
        for (j = 0; j < 10; j++)
            count[j] = 0;
        for (i = 0; i < n; i++) {
            loc = (a[i] / div) % 10;
            bucket[loc][count[loc]++] = a[i];        
        }
        k = 0;
        for (j = 0; j < 10; j++) {
            for (i = 0; i < count[j]; i++) {
                a[k++] = bucket[j][i];
            }
        }
        div *= 10;
    }
}
void printArray(int a[], int n) {
    for (int i = 0; i < n; i++)
        printf("%d ", a[i]);
    printf("\n");
}
int main() {
    int a[100], n;
    printf("Enter the size of the array: ");
    scanf("%d", &n);
    printf("Enter %d elements: ", n);
    for (int i = 0; i < n; i++){
        scanf("%d", &a[i]);
    }
    printf("Before sorting:\n");
    printArray(a, n);
    radixsort(a, n);
    printf("After sorting:\n");
    printArray(a, n);
    return 0;
}

