struct food {
  char *s;
  float p;
};

void example();
void print_food(struct food f);
void change_food(struct food *f, char* newS, float newP);
