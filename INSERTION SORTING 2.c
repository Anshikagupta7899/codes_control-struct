//3)C) Write a program to implement Insertion Sort

//SOURCE CODE

#include <stdio.h>
void insertionSort(int arr[], int n) {
    for (int i = 1; i < n; i++) {
        int key = arr[i];
        int j = i - 1;
        while (j >= 0 && arr[j] > key) {
            arr[j + 1] = arr[j];
            j--;}
        arr[j + 1] = key;}}
int main() {
    int arr[100],n;
    printf("Enter the number of elements: ");
    scanf("%d", &n);
    printf("Enter the elements:", n);
    for (int i = 0; i < n; i++) {
        scanf("%d", &arr[i]);}
    insertionSort(arr, n);
    printf("Sorted array:");
    for (int i = 0; i < n; i++) {
        printf("%d ", arr[i]);}
    printf("\n--------------------------------\n");
    printf("ANSHIKA GUPTA\nIT-A\n2300320130055");
    return 0;}

