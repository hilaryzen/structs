#include <stdio.h>
#include <stdlib.h>
#include "structs.h"

int main() {
  example();

  //Testing change_food
  struct food f0;
  f0.s = "pizza";
  f0.p = 1.50;
  print_food(f0);
  struct food *fp = &f0;
  change_food(fp, "pizza", 2.00);
  printf("New pizza: ");
  print_food(f0);
  change_food(fp, "pasta", 2.00);
  printf("New item: ");
  print_food(f0);

  return 0;
}
