#include<iostream>
#include"functions.h"
using namespace std;

int calculateOddIndexSum(int arr[], int size) {
    int sum =0;
    for(int j=1;j < size ; j=j+2) {
        sum = sum + arr[j];
    }
    return sum;
}

int productEvenIndices(int arr[], int size, int index = 0) {
    if(index>=size) {
        return 1;
    }
    return  arr[index] * productEvenIndices(arr, size, index+2);

    // } else {
    //     int product =1;
    //     if( index %2==0) {
    //         return  arr[index] * productEvenIndices(arr, size, index+2);
    //     }
    // }
}
int findLargestNumber(int arr[], int size) {
    int max = arr[0];
    for(int i = 1; i < size; i++) {
        if(arr[i] > max) {
            max = arr[i];
        }
    }
    return max;
}

int findSmallestNumber(int arr[], int size) {
    if (size == 1) { // Base condition
        return arr[0];
    }
    int minRest = findSmallestNumber(arr, size - 1);
    if (arr[size - 1] < minRest) {
        return arr[size - 1];
    } else {
        return minRest;
    }
}


void reverseAndPrintArray(int arr[], int size) {
    cout<<"Original Array: ";
    for(int k = 0; k < size; k++){
        cout<<arr[k]<<" ";
    }
    cout<<endl;
    cout << "Reversed Array: ";
    for(int k=size-1; k>=0;k--) {
        cout<<arr[k]<<" ";
    }
    cout<<endl;
}