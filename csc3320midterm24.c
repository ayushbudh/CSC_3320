#include "csc3320midterm24.h"


// function definition
void registerUser( int id, char *first_name, char *last_name, char *dob, char *sex, int dose_num, char *do_previous, char *vaccine_type, int zipcode  ){
  
  // storing data into the structure data for future retrieval  
  strcpy(candidate_registration[id-1].first_name, first_name);
  strcpy(candidate_registration[id-1].last_name, last_name);
  strcpy(candidate_registration[id-1].dob, dob);
  strcpy(candidate_registration[id-1].sex, sex);
  strcpy(candidate_registration[id-1].do_previous, do_previous);
  strcpy(candidate_registration[id-1].vaccine_type, vaccine_type);
  candidate_registration[id-1].zipcode = zipcode;
  candidate_registration[id-1].id = id;
  candidate_registration[id-1].dose_num = dose_num;
  
  // function call for generating code
  generate_code(id,candidate_registration[id-1].first_name,candidate_registration[id-1].last_name, candidate_registration[id-1].dob,candidate_registration[id-1].vaccine_type, candidate_registration[id-1].zipcode );

 }

// function definition
 void generate_code(int id,char *first_name, char *last_name, char *dob, char *vaccine_type, int zipcode ) {

  //  generating code
   char code[8], date[4], strAge[3], l3_zipcode[6];
   int i,j, intDate, currentAge;

   code[0]=first_name[0];
   code[1]=last_name[0];

   for(i=0; i<4; i++){
     date[i]=dob[i+6]; 
   }
  
   // converting  char to int 
   sscanf(date, "%d", &intDate);
   currentAge = 2021-intDate;

  //  converting int to char
  snprintf(strAge, sizeof(strAge), "%d", currentAge);

  for(i=0; i<=sizeof(strAge)-2; i++){
    code[i+2]=strAge[i]; 
  }

  // converting zipcode int to char
  snprintf(l3_zipcode, sizeof(l3_zipcode), "%d", zipcode);

  code[sizeof(strAge)+1] = vaccine_type[0];

  j=2;
  for(i=sizeof(strAge)+2; i<8; i++){
    code[i] = l3_zipcode[j];
    j++;
  }
  // adding termination to string
  code[i]='\0';
  
  printf("\n============ Registration Successful!! ============\n");
  printf("\nRegistration Code = %s\n",code);
  
  // storing code generated in the struture data
  for(i=0; i<8; i++){ candidate_registration[id-1].code[i] = code[i];}
  candidate_registration[id-1].code[i]='\0';
  
  
}

// function definition
 void retrieve(struct data candidate_registration[50]){
   printf("\n\n ====== Current Users =======\n\n");
   int i=0;
   // displaying all the users data on every line
   while(candidate_registration[i].id != 0){
     printf("Registraion Code: %s",candidate_registration[i].code);
     printf(" | First Name: %s",candidate_registration[i].first_name);
     printf(" | Last Name: %s",candidate_registration[i].last_name);
     printf(" | Sex: %s",candidate_registration[i].sex);
     printf(" | Date of Birth: %s",candidate_registration[i].dob);
     printf(" | Date of previous dose: %s",candidate_registration[i].do_previous);
     printf(" | Dose number: %d",candidate_registration[i].dose_num);
     printf(" | Vaccine Type: %s",candidate_registration[i].vaccine_type);
     printf(" | Zip Code: %d",candidate_registration[i].zipcode);
    printf("\n");
     i++;
   }
   printf("\n");

}
