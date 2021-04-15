#include <stdio.h>
#include <stdlib.h>

int main(int argc, char *argv[]) {
  FILE *fs;
  char ch;

  if(argc!=2){
    puts("Please supply only one file to read!\n");
    exit(1);
  }

  fs= fopen(argv[1],"r");
  if(fs == NULL){
    puts("Cannot open source file\n");
    exit(1);
  }



char c;
int a[26];
int i=0, max=0;
int maxIndex=0;
char letters[] = {'a','b','c','d','e','f','g','h','i','j','k','l','m','n','o','p','q','r','s','t','u','v','w','x','y','z'};

while(i<=25){
  a[i]=0;
  i++;
}
i=0;
while((c=fgetc(fs)) != EOF){

switch(c){
  case 'A':case'a':a[0]++;break;
  case 'B':case'b':a[1]++;break;
  case 'C':case'c':a[2]++;break;
  case 'D':case'd':a[3]++;break;
  case 'E':case'e':a[4]++;break;
  case 'F':case'f':a[5]++;break;
  case 'G':case'g':a[6]++;break;
  case 'H':case'h':a[7]++;break;
  case 'I':case'i':a[8]++;break;
  case 'J':case'j':a[9]++;break;
  case 'K':case'k':a[10]++;break;
  case 'L':case'l':a[11]++;break;
  case 'M':case'm':a[12]++;break;
  case 'N':case'n':a[13]++;break;
  case 'O':case'o':a[14]++;break;
  case 'P':case'p':a[15]++;break;
  case 'Q':case'q':a[16]++;break;
  case 'R':case'r':a[17]++;break;
  case 'S':case's':a[18]++;break;
  case 'T':case't':a[19]++;break;
  case 'U':case'u':a[20]++;break;
  case 'V':case'v':a[21]++;break;
  case 'W':case'w':a[22]++;break;
  case 'X':case'x':a[23]++;break;
  case 'Y':case'y':a[24]++;break;
  case 'Z':case'z':a[25]++;break;
  default:break;
}
  while(i<=25){
    if(max<a[i]){
      max=a[i];
      maxIndex=i;
    }
    i++;
    
  }
  i=0;
}

printf("\nThe most frequent letter is '%c'. It appeared %d times.\n",letters[maxIndex],max);


fclose(fs);
  return 0;
}
