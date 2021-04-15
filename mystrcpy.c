// including libraries
#include <stdio.h>
#include <stdlib.h>

// Function Prototype
char*  mystrcpy (char* strDest, char* strSrc);

// main function
int main() {
  char str[20]={"storagebucket"};
  printf("\nDestination String = %s",mystrcpy(str,"bucket"));
  return 0;
}

// function definition
char* mystrcpy (char* strDest, char* strSrc) {

  int destLength=0, srcLength=0;
  char *temp = strSrc;
  char *desTemp = strDest;

  printf("\nSource String = %s\n",strSrc);
  printf("\nDestination String = %s",strDest);

// calculate length of destination string.
// moving the pointer of destination to point to the next memory location after every single iteration.
  while(*strDest!='\0'){
    destLength++;
    strDest++;
  }

// calculate length of source string.
// moving the pointer of source to point to the next memory location after every single iteration.
  while(*strSrc!='\0'){
    srcLength++;   
    strSrc++;
  }

// if the desination is not able to accomodate the src string, then string cannot be copied and the function will just return the original destination string.
  if(destLength<srcLength){
    printf("\nString copying unsuccessful!\n\n");
    printf("Unexpected Behaviour.");
    strDest = desTemp;

  }else{
    // make the strDest pointer to point to the source string 
    printf("\nString copying successful!\n");
    strDest = temp;
  }

  return strDest;
}
