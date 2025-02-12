#include<iostream>
#include"functions.h"
using namespace std;

int main(){
         // sum of array elements at odd indices
          int size;
             cout<<"\n\t\t\tEnter the size of an array: ";
             cin>>size;
          int arr1[size]={};
             cout<<"\n\t\t\tEnter the array elements: ";
          for(int i=0;i<size;i++) {
              cin>>arr1[i];
          }
              int result = calculateOddIndexSum(arr1,size);
              cout<<"\n\t\t\tSum of the odd indexes of array is: "<<result;

        // Product of numbers at even indices
        int s;
             cout<<"\n\t\t\tEnter the size of an array: ";
             cin>>s;
          int arr2[s];
             cout<<"\n\t\t\tEnter the array elements: ";
          for(int i=0;i<s;i++) {
              cin>>arr2[i];
          }
          int r = productEvenIndices(arr2,s, 0);
             cout<<"\n\t\t\tProduct of even array indices is: "<<r;

          // Largest Number in Array
           int ArraySize;
               cout<<"\n\t\t\tEnter the size of an array: ";
               cin>>ArraySize;
          int arr[s];
               cout<<"\n\t\t\tEnter the array elements: ";
          for(int i=0;i<ArraySize;i++) {
              cin>>arr[i];
          }
          int x=findLargestNumber(arr, s);
               cout<<"\n\t\t\tLargest number is: "<<x<<endl;

          // Smallest Number in array
          int ArrayCount;
              cout<<"\n\t\t\tEnter the size of an array: ";
              cin>>ArrayCount;
          int arr3[ArrayCount];
              cout<<"\n\t\t\tEnter the array elements: ";
          for(int i=0;i<ArrayCount;i++) {
              cin>>arr3[i];
          }
          int smallest = findSmallestNumber(arr3, ArrayCount);
              cout<<"\n\t\t\tsmallest number is: "<<smallest<<endl;

       // Reverse Array
        int l;
             cout<<"\n\t\t\tEnter the size of an array: ";
             cin>>l;
        int arr4[l];
             cout<<"\n\t\t\tEnter the array elements: ";
        for(int i=0;i<l;i++) {
            cin>>arr4[i];
        }
        reverseAndPrintArray(arr4, l);

    return 0;
  }