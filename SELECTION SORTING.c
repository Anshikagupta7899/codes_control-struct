//3)B) Write a program to implement Selection sort

//SOURCE CODE

#include <stdio.h>
void selectionSort(int arr[], int n) {
    for (int i = 0; i < n - 1; i++) {
        int minIndex = i;
        for (int j = i + 1; j < n; j++) {
            if (arr[j] < arr[minIndex]) {
                minIndex = j;}}
        // Swap the minimum element with arr[i]
        int temp = arr[i];
        arr[i] = arr[minIndex];
        arr[minIndex] = temp;}}
int main() {
    int arr[100],n;
    printf("Enter the number of elements: ");
    scanf("%d", &n);
    printf("Enter the elements:", n);
    for (int i = 0; i < n; i++) {
        scanf("%d", &arr[i]);}
    selectionSort(arr, n);
    printf("Sorted array:");
    for (int i = 0; i < n; i++) {
        printf("%d ", arr[i]);}
    printf("\n--------------------------------\n");
    printf("ANSHIKA GUPTA\nIT-A\n2300320130055");
    return 0;}


