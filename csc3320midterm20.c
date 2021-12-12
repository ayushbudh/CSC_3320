#include <stdio.h>
#include "csc3320midterm21.h"
#include "csc3320midterm22.h"
#include "csc3320midterm23.h"
#include "csc3320midterm24.h"

int main(void) {

// ======= csc3320midterm21.h ========
char response;
// change the array here
float arr[]= {10, 0.25, -2342, 12123, 3.145435, 6, 6, 5.999, -2, -5, -109.56};
//  calculating size of array
int size = sizeof(arr) / sizeof(arr[0]);

// user input
printf("\nHow do you want to sort(A/a or d/D):");
scanf("%c",&response);

// function call
sort_numeric(arr, response, size);
// ======= csc3320midterm21.h ========


// ======= csc3320midterm22.h ========
 char *arr1[] ={"systems","Programming","Deep","Learning","Internet","Things","Robotics","course"}, response1;
  size = sizeof(arr1) / sizeof(arr1[0]);

  printf("\nHow do you want to sort(A/a or d/D): ");
  scanf(" %c",&response1);
  
  // function call
  sort_alphabetic(arr1,size,response1);

// ======= csc3320midterm22.h ========

// ======= csc3320midterm23.h ========
  int initialSize =3, elements=0, i, new_size;
  char res='y';
  // initially allocated memory
  float *arr2 = (float*) calloc(initialSize,sizeof(float)), *temp = arr2, a;

  while(res=='y'){
    printf("Enter num: ");
    scanf("%f",&a);
    *arr2 = a;
    printf("Continue?(y/n):");
    scanf(" %c",&res);
    elements++;
    arr2++;

    if(elements==initialSize){
      new_size = 2*initialSize;
      printf("\n ====Array Size Altered ====\n\nNew Size = %d  Old Size = %d\n\n", new_size, initialSize );
      initialSize = new_size;
        // reallocation of memory to increase size of the array
        arr2 = (float*) realloc(temp,new_size*sizeof(float));
        temp = arr2;
        for(i=0; i<elements; i++){
          arr2++;
        }
    }
  }
  // making pointer arr2 point to it's initial position so that swap function can swap the elements.
  arr2 = temp;

  printf("\nHow do you want to sort(A/a or d/D):");
  scanf(" %c",&response);
  
  // function call to swap 
  sort_numeric_dynamic(arr2,response, elements);
// ======= csc3320midterm23.h ========



// ======= csc3320midterm24.h ========
char first_name[20], last_name[20], dob[12], sex[20], do_previous[12], vaccine_type[15];
 int dose_num, zipcode,id=1, sexOptions, doseOptions, vaccineOptions, options;
 response='y';
 //  maximum 50 people allowed for the vaccine registration

 printf("\n======== Welcome to Vaccine Manager ========\n\n");

  // checking if response is y/n
  while(response=='y'){
  printf("\nChoose from the below options to continue:");
  printf("\n1. Register new users.\n2. Retrieve current users.\n3. Exit\n:");
  scanf(" %d",&options);

  // taking user input for new user registration
  if(options ==1){
    printf("====== COVID VACCINE REGISTRATION ======\n\n");
    printf("First Name: ");
    scanf(" %s",first_name);
          
    printf("Last Name: ");
    scanf(" %s",last_name);
          
    printf("Date of Birth: ");
    scanf(" %s",dob);
    dob[strlen(dob)] = '\0';
    printf("Sex:(Enter only numbers from the below options) ");
    printf("\n1.Male\n2.Female\n3.I do not wish to answer\n:");
    scanf(" %d",&sexOptions);

    switch(sexOptions){
        case 1: strcpy(sex,"Male\0"); break;
        case 2: strcpy(sex, "Female\0"); break;
        case 3:strcpy(sex, "I do not wish to answer\0");break;
        default:printf("Wrong option!");
    }          
     printf("Dose number:(Enter only numbers from the below options) ");
            printf("\n1\n2\n:");
    scanf(" %d",&doseOptions);
    switch(doseOptions){
        case 1:dose_num=1;break;
        case 2:dose_num=2;break;
        default:printf("Wrong option!");
    }
        
    printf("Date of previous dose: ");
    scanf(" %s",do_previous);
    do_previous[strlen(do_previous)] = '\0';
    printf("Vaccine Type:(Enter only numbers from the below options) ");
          
    printf("\n1.Moderna\n2.Pfizer\n3.Johnson&Johnson\n:");
    scanf(" %d",&vaccineOptions);
    switch(vaccineOptions){
      case 1:strcpy(vaccine_type,"Moderna\0");break;
      case 2:strcpy(vaccine_type, "Pfizer\0");break;
      case 3:strcpy(vaccine_type, "JohnsonJohnson\0");break;
      default:printf("Wrong option!");
    }
          
    printf("Zipcode: ");
    scanf("%d",&zipcode);
          
    registerUser(id, first_name, last_name, dob, sex, dose_num, do_previous,vaccine_type,zipcode);
    id++;
  }
  // retrieving data from the structure
  else if(options==2){    
        retrieve(candidate_registration);
  }
  // exit 
  else if(options==3){
      printf("\n\nThanks for using Vaccine Manager!!");
  }
      printf("\nDo you want to perform any other operations ?(y/n)\n:");
      scanf(" %c",&response);
  }     
// ======= csc3320midterm24.h ========

  return 0;
}