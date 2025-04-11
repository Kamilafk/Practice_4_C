#include <stdio.h>

int main() {
  int blue_balls[5] = {1, 2, 3, 4, 5};
  
  for (int i = 0; i<5; i++) {
    printf ("%d\n", blue_balls[i]);
  }
  
  int size = sizeof(blue_balls) / sizeof(blue_balls[0]);
  printf("Размер коробки равен %d шариков.\n", size);
  
return 0;
}

