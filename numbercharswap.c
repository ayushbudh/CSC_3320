#include <stdio.h>

void swap(char *, char *);
int main(void) {

  int num1, num2, i;
  char sentenceOne[10] = {'H','e','l','l','0',' ','F','i','n','9'};
  char sentenceTwo[10] = {'H','1','l','l','o',' ','F','i','n','e'};

  
  printf("\nBefore Swap:\n\n");
  printf("First Sentence: ");
  for(i=0; i<10; i++){
    printf("%c",sentenceOne[i]);
  }
  printf("\n");
  printf("Second Sentence: ");
  for(i=0; i<10; i++){
    printf("%c",sentenceTwo[i]);
  }
  printf("\n\n");
  swap(&sentenceOne[0],&sentenceTwo[0]);

  printf("After Swap:\n\n");
  printf("First Sentence: ");
  for(i=0; i<10; i++){
    printf("%c",sentenceOne[i]);
  }
  printf("\n");
  printf("Second Sentence: ");
  for(i=0; i<10; i++){
    printf("%c",sentenceTwo[i]);
  }
  printf("\n\n");
  return 0; 
}

void swap(char *one, char *two){
  
  int i;
  for(i=0; i<10; i++){
    *one = *one + *two;
    *two = *one - *two;
    *one = *one - *two;
    two++;
    one++;  
    }

}
