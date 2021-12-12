// This program uses selection sort algorithm and pointers to sort the array.
#include "csc3320midterm22.h"

// function definition
void sort_alphabetic(char *arr[], int size, char response){

char **slow_ptr = &arr[0], **fast_ptr, min_element, **temp1, **temp2, *temp, temp_fast, temp_temp1;
int i,j;

if(response == 'A' || response == 'a'){

  for(i =0; i<size; i++){
    temp1=slow_ptr;
    temp2=slow_ptr;
    fast_ptr = slow_ptr +1;
    
    for(j=i+1; j<size; j++){
      temp_temp1 =  **temp1;

      // checking if the first letter is in uppercase. If it is then I am converting it to lowercase. 
      if(temp_temp1>=65 && temp_temp1<=90){
        temp_temp1 = temp_temp1 + 32;
      }
      temp_fast = **fast_ptr;
      if(temp_fast>=65 && temp_fast<=90){
        temp_fast = temp_fast + 32;
      }

      // getting the word with the minimum ASCII value in the array to sort the array in ascending alphabetical order.
      if(temp_fast < temp_temp1){
        temp1 = fast_ptr;
      }
      fast_ptr = fast_ptr + 1;
    }
    fast_ptr = temp1;

    // swapping the element with the first element 
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
        printf("%s ] ",arr[i]);
        break;
      }
      printf("%s, ",arr[i]);
    }
}else if(response == 'D' || response == 'd'){
  
  for(i =0; i<size; i++){
    temp1=slow_ptr;
    
    temp2=slow_ptr;
    fast_ptr = slow_ptr +1;
    
    for(j=i+1; j<size; j++){
      temp_temp1 =  **temp1;
        // checking if the first letter is in uppercase. If it is then I am converting it to lowercase. 
      if(temp_temp1>=65 && temp_temp1<=90){
        temp_temp1 = temp_temp1 + 32;
      }
      temp_fast = **fast_ptr;
      if(temp_fast>=65 && temp_fast<=90){
        temp_fast = temp_fast + 32;
      }
      // getting the word with the minimum ASCII value in the array to sort the array in ascending alphabetical order.    
      if(temp_fast > temp_temp1){
        temp1 = fast_ptr;
      }
      fast_ptr = fast_ptr + 1;
    }
    fast_ptr = temp1;

    // swapping the element with the first element 
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
        printf("%s ] ",arr[i]);
        break;
      }
      printf("%s, ",arr[i]);
    }
}else{
   printf("Please enter valid input :(");
}
    
}