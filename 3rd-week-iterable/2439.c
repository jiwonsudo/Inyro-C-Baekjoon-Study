#include <stdio.h>

int main() {
  int numOfLine;
  scanf("%d", &numOfLine);
  for (int i = 1; i <= numOfLine; i++) {
    for (int space = 0; space < numOfLine - i; space++) {
      printf(" ");
    }
    for (int star = 0; star < i; star++) {
      printf("*");
    }
    printf("\n");
  }
  return 0;
}