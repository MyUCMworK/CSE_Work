#ifndef FindMin_h
#define FindMin_h

// Declare and define the findMin function here

int findMin(int* numbers, int start,int end){
  int minIndex = start;
  for(int i = start; i < end-1; i++){
    if (numbers[minIndex] >= numbers[i]){
      minIndex = i;
    }
  }return minIndex;
}

// Do not write any code below this line
#endif
