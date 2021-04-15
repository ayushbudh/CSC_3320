#include <stdio.h>

int main(void) {

  // purDate needs to be string
  int itNum, quantity;
  float  unit, totAmount;
  char purDate[10];
  printf("Enter Item number: ");
  scanf("%d", &itNum);
  printf("Enter unit price: ");
  scanf("%f", &unit);
  printf("Enter quantity: ");
  scanf("%d", &quantity);
  printf("Enter purchase date (mm/dd/yyyy):");
  scanf("%s", purDate);
  totAmount = quantity*unit;
  printf("Item\tUnit Price\tQTY\t Purchase Date\tTotal Amount\n");
  printf("%-3d\t$ %8.2f\t%-3d\t %-3s\t$ %9.2f",itNum, unit, quantity, purDate, totAmount);
  printf("\n");
  return 0;
}
