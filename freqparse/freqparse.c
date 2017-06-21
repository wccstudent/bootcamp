#include <stdio.h>
int main() {
  // initialize variables;

  char c;
  int num;
  int character;
  int other;
  float total;

  while ((c = getchar()) != EOF) {
  	// process one character
    if (typeof(c)== int) {
      num += 1;
    }else if ((char(a)<char(c))&&(char(c)<char(z))) {
      character += 1;
    }else {
      other += 1;
    }
  }

  // Output results here
  total = num+character+other;
  printf("There are %d numbers, %d characters, and %d other numbers.\n", num, character, other);
  float num2 = (float)num/total;
  float character2 = (float)character2/total;
  float other2 = (float)other2/total;
  printf("There are %d numbers, %d characters, and %d other numbers.\n", num2, character2, other2);

  return 0;
}
