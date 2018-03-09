#ifndef InsertionSort_h
#define InsertionSort_h

#include "Swap.h"

// Declare and define the insertion sort function below
// You *MUST* use the swap operation defined in Swap.h to swap elements
void insertion_sort(int* numbers, int len){
  for (int i = 1; i < len; i++){
  int cur = numbers[i];
  int j = i - 1;
  while (j >= 0 && numbers[j] > cur){
    swap(numbers, j, j+1);
    j = j - 1;
  }
  numbers[j + 1] = cur;
 }
}
// Do not write any code below this line
#endif
