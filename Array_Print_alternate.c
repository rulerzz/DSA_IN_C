#include <stdio.h>

/*
    Problem 1
    Given an array arr[], the task is to print every alternate element of the array starting from the first element.
    
    Example : 
    
    Input: arr[] = [10, 20, 30, 40, 50]
    Output: 10 30 50

*/
void alternator(int* arr, int size) {
    int count = 0;

    while(count < size){
        printf("%d ", arr[count]);
        count += 2;
    }
}

void alternatorRecursive(int* arr, int size, int count) {
    if(count < size){
        printf("%d ", arr[count]);
        alternatorRecursive(arr, size, count + 2);
    }
}

int main() {
    int arr[] = {10, 20, 30, 40, 50};
    alternatorRecursive(arr, sizeof(arr) / sizeof(arr[0]), 0);
    return 0;
}