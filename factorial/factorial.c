#include <stdio.h>

int factorial(int j);

int main() {
  for ( int j = 0; j <= 20; j++) {
    int forPrint = factorial(j);
    printf("%d %d\n", j, forPrint);
  }
  return 0;
}

int factorial(int bace){
  long temp = 1;
  for (int i = 1; i <= bace; i++) {
    temp *= i;
  }
  return(temp);
}
