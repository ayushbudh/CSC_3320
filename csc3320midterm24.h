// protecting header files to avoid including them twice
#ifndef CSC3320MIDTERM24_H
#define CSC3320MIDTERM24_H

#include <stdio.h> 
#include <string.h>

 // creating structure data
struct data {
  char first_name[20], last_name[20], dob[12], sex[20], do_previous[12], vaccine_type[20];
  int zipcode, id, dose_num; char code[9];
};

struct data candidate_registration[50];

// function prototypes
void registerUser( int id, char *first_name, char *last_name, char *dob, char *sex, int dose_num, char *do_previous, char *vaccine_type, int zipcode);

void generate_code( int id, char *first_name, char *last_name, char *dob, char *vaccine_type, int zipcode );

void retrieve(struct data candidate_registration[50]);

#endif