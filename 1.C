#include <stdio.h>

int main() {
  int red_balls[10] = {1, 2, 3, 4, 5, 6, 7, 8, 9, 10};
  
  for (int i = 0; i < 10; i++) {
    printf("%d\n", red_balls[i]);
  }
  
  int size = sizeof(red_balls) / sizeof(red_balls[0]);
  printf("В коробке red_balls помещается %d шариков.\n", size);
  
return 0;
}
