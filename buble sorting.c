//3)A) Write a program to implement Bubble sort

//SOURCE CODE

#include <stdio.h>
int main()
{
    int arr[20];
    int n;
    printf("Enter the number of elements in the array:");
    scanf("%d",&n);
    printf("Enter the elements of array:");
    for(int i=0;i<n;i++){
        scanf("%d",&arr[i]);}
    for (int i = 0; i < n - 1; i++) {
        for (int j = 0; j < n - 1; j++) {
            if (arr[j] > arr[j + 1]) {
                int temp=arr[j];
                arr[j]=arr[j+1];
                arr[j+1]=temp;}}}
    printf("Sorted array: ");
    for (int i = 0; i < n; i++) {
        printf("%d ", arr[i]);}
    printf("\n");
    printf("------------------------------------------\n");
    printf("ANSHIKA GUPTA\nIT-A\n2300320130055");
    return 0;}

