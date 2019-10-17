#include <stdio.h>
#include <stdlib.h>
#include <time.h>
#include "structs.h"

void example() {
  char* foods[] = {
    "apple",
    "banana",
    "orange",
    "watermelon"
  };
  float prices[] = {
    3.50,
    4.50,
    9.95,
    14.00
  };

  struct food f;
  srand ( time(NULL) );
  int randomIndex = rand() % 4;
  f.s = foods[randomIndex];
  randomIndex = rand() % 4;
  f.p = prices[randomIndex];
  print_food(f);
}

void print_food(struct food f) {
  printf("%s %0.2f\n", f.s, f.p);
}

void change_food(struct food *f, char* newS, float newP) {
  f->s = newS;
  f->p = newP;
}
