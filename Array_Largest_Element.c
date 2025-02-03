#include <stdio.h>

/*
    Problem 3
    Given an array arr. The task is to find the largest element in the given array. 

    
    Example : 
    
    Input: arr[] = [10, 20, 4]
    Output: 20

*/
int findMax(int* arr, int size) {
    int x = -1;
    for (int i = 0; i < size; i++){
        if(arr[i] > x)
            x = arr[i];
    }
    return x;
}

int findMaxRecursive(int* arr, int size, int index) {
    if(index == size - 1)
        return arr[index];
    int max = findMaxRecursive(arr, size, index + 1);
    return (max > arr[index]) ? max : arr[index];
}

int main() {
    int arr[] = {10, 20, 30, 40, 50};
    int max_number = findMaxRecursive(arr, sizeof(arr) / sizeof(arr[0]), 0);
    printf("The maximum within this array is %d", max_number);
    return 0;
}