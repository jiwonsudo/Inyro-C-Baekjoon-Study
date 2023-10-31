#include <stdio.h>

int main() {
  int firstNum, secondNum;
  while (scanf("%d %d", &firstNum, &secondNum) == 2) {
    printf("%d\n", firstNum + secondNum);
  }
  return 0;
}