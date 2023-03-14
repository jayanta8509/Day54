// Given an integer array of size N. Write Program to find whether Arrays are
// disjoint or not. Two arrays are said to be disjoint if they have no elements
// in common.
#include <iostream>
using namespace std;
int disjoint(int arr[], int size, int arr2[], int size2) {
  for (int i = 0; i < size; i++) {
    for (int j = 0; j < size2; j++) {
      if (arr[i] == arr[j]) {
        return 1;
      }
    }
  }
  // for (int i = 0; i < size2; i++) {
  //   for (int j = 0; j < size; j++) {
  //     if (arr[i] == arr[j]) {
  //       return 1;
  //     }
  //   }
  // }
  return -1;
}

int main() {
  int size = 5;
  int arr[] = {1, 5, -7, 6, 3};
  int size2 = 4;
  int arr2[] = {2, 4, 6, 8};
  int temp = disjoint(arr, size, arr2, size2);
  if (temp == 1) {
    cout << " Not disjoint" << endl;
  } else {
    cout << " disjoint" << endl;
  }
}