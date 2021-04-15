// including libraries
#include <stdio.h>
#include <string.h>

// main function
int main() {

  char smallest_word[20];
  char largest_word[20];
  char res[20];

  printf("Enter word: ");
  scanf("%s",res);
  strcpy(smallest_word, res);
  strcpy(largest_word, res);

  // if length of word entered by user is 4 then exit and return smallest and largest word same, which is the first word entered by user
  while(strlen(res)!=4){
  printf("Enter word: ");
  scanf("%s",res);
  // if res < smallest_word, then save the new smallest_word as the word entered
   if(strcmp(res,smallest_word)<0){
    strcpy(smallest_word, res);
  }
  // if res > largest_word, then save the new largest_word as the word entered by the user
  if(strcmp(res,largest_word)>0){
    strcpy(largest_word, res);
  }
  }
  // print smallest and largest word 
  printf("\nSmallest value = %s",smallest_word);
  printf("\nLargest value = %s",largest_word);
  
  return 0;
}
