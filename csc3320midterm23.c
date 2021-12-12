// function definitions


#include "csc3320midterm23.h"

// function definition
void sort_numeric_dynamic(float *arr,char response, int size){

  float *ptr = arr, *slow_ptr = arr, *fast_ptr, *temp1, *temp2, temp;
  int i,j;

  // getting the minimum element and swapping it with the first element and so on.
  if(response == 'A' || response == 'a'){
  slow_ptr = arr;

  for(i =0; i<size; i++){
    temp1=slow_ptr;
    temp2=slow_ptr;
    fast_ptr = slow_ptr +1;
    
    for(j=i+1; j<size; j++){
      if(*fast_ptr < *temp1){
        temp1 = fast_ptr;
      }
      fast_ptr = fast_ptr + 1;
    }
    fast_ptr = temp1;

  // swap
  temp = *slow_ptr;
  *slow_ptr = *fast_ptr;
  *fast_ptr = temp;
    
  // revert back to it's position
  slow_ptr = temp2;
  slow_ptr  = slow_ptr + 1;
  }
  
  // printing the final array
  printf("\n\nSorted Array(ascending):\n\n");
  printf("[");
  for(i=0; i<size; i++){
    if(i==size-1){
        printf("%.4f ] ",*arr);
        break;
      }
    printf("%.4f, ",*arr);
    arr++;
  }

  }

// swapping maximum element with the first element in the array and so on.
else if(response == 'D' || response == 'd'){
slow_ptr = arr;

for(i =0; i<size; i++){
  temp1=slow_ptr;
  temp2=slow_ptr;
  fast_ptr = slow_ptr +1;
  
  for(j=i+1; j<size; j++){
     if(*fast_ptr > *temp1){
       temp1 = fast_ptr;
    }
    fast_ptr = fast_ptr + 1;
  }

  fast_ptr = temp1;

  // swap
  temp = *slow_ptr;
  *slow_ptr = *fast_ptr;
  *fast_ptr = temp;
  
  // revert back to it's position
  slow_ptr = temp2;
  slow_ptr  = slow_ptr + 1;
  }

  // printing the final array
  printf("\n\nSorted Array(descending):\n\n");
  printf("[");
  for(i=0; i<size; i++){
    if(i==size-1){
        printf("%.4f ] ",*arr);
        break;
      }
    printf("%.4f, ",*arr);
    arr++;
  }
  } else {
    printf("\nPlease input correct option :(");
  }

}