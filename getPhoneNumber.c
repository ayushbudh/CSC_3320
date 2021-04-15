#include <stdio.h>

int main(void) {

  int i=0;
  char phNumber[15];
  printf("Enter phone number [(999)-999-9999]: ");
  fgets(phNumber, sizeof(phNumber), stdin);

  printf("You entered ");
  for(i=0; i<=14; i++){
     if(i==4 || i==9){
        printf("-");
      }
    if(phNumber[i]>='0' && phNumber[i]<='9'){
      printf("%c",phNumber[i]);
    }
  }

  printf("\n");
  return 0;
}
