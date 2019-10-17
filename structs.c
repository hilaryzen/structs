#include <stdio.h>
#include <stdlib.h>
#include <time.h>

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

  srand ( time(NULL) );
  int randomIndex = rand() % 4;
  char* randomFood = foods[randomIndex];
  randomIndex = rand() % 4;
  float randomPrice = prices[randomIndex];
  printf("%s %0.2f\n", randomFood, randomPrice);
}
