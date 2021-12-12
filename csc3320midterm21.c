// function definitions

#include "csc3320midterm21.h"

// This program uses selection sort algorithm and pointers to sort the array.


// function definition
void sort_numeric(float arr[], char response, int size){

// var intialization
float *ptr = arr, *slow_ptr = arr, *fast_ptr, *temp1, *temp2, temp;
int i,j;

// setting slow pointer and minimum element
slow_ptr = &arr[0];

  if(response == 'A' || response == 'a'){

    // setting up fast pointer and temporary pointers
    for(i =0; i<size; i++){
      temp1=slow_ptr;
      temp2=slow_ptr;
      fast_ptr = slow_ptr +1;
      
      // getting the minimum element from the array
      for(j=i+1; j<size; j++){
        if(*fast_ptr < *temp1){
          temp1 = fast_ptr;
        }
        fast_ptr = fast_ptr + 1;
      }
      fast_ptr = temp1;

      // swap the min and the first element
      temp = *slow_ptr;
      *slow_ptr = *fast_ptr;
      *fast_ptr = temp;
      
      // revert back the slow_ptr to it's position so that it doesn't cause segmentation fault by accessing elements out of the assigned memory.
      slow_ptr = temp2;
      slow_ptr  = slow_ptr + 1;
    }

    // printing the final array
    printf("\n\nSorted Array(ascending):\n\n");
    printf("[");
    for(i=0; i<size; i++){
      if(i==size-1){
        printf("%.4f ] ",arr[i]);
        break;
      }
      printf("%.4f, ",arr[i]);
    }
  }else if(response == 'D' || response == 'd'){
    
    // setting up fast pointer and temporary pointers
    for(i =0; i<size; i++){
      temp1=slow_ptr;
      temp2=slow_ptr;
      fast_ptr = slow_ptr +1;
      
      // getting the maximum element from the array
      for(j=i+1; j<size; j++){
        if(*fast_ptr > *temp1){
          temp1 = fast_ptr;
        }
        fast_ptr = fast_ptr + 1;
      }

      fast_ptr = temp1;

      // swap the min and the first element
      temp = *slow_ptr;
      *slow_ptr = *fast_ptr;
      *fast_ptr = temp;
      
      // revert back the slow_ptr to it's position so that it doesn't cause segmentation fault by accessing elements out of the assigned memory.
      slow_ptr = temp2;
      slow_ptr  = slow_ptr + 1;
    }

    // printing the final array
    printf("\n\nSorted Array(descending):\n\n");
    printf("[");
    for(i=0; i<size; i++){
      if(i==size-1){
        printf("%.4f ] ",arr[i]);
        break;
      }
      printf("%.4f, ",arr[i]);
    }
  }else{
    printf("Please enter valid input :(");
  }

}


