#include <stdio.h>
/*
    Problem 2
    Given an array, arr of n integers, and an integer element x, find whether element x is present in the array. Return the index of the first occurrence of x in the array, or -1 if it doesn’t exist.

    Example :

    Input: arr[] = [1, 2, 3, 4], x = 3
    Output: 2
*/
int linearSearch(int* arr, int searchFor, int size){
    for(int i = 0; i < size; i++){
        if(arr[i] == searchFor)
        return i;
    }
    return -1;
}

int main() {
    int arr[] = {1, 2, 3, 4, 5, 6};
    int searchFor = 9;
    int pos = linearSearch(arr, searchFor, sizeof(arr) / sizeof(arr[0]));
    printf("The element %d is present at position %d", searchFor, pos);
    return 0;
}