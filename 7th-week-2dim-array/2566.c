#include <stdio.h>

int main() {
  int maxVal = 0, maxX, maxY, currVal;

  for (int i = 0; i < 9; i++) {
    for (int j = 0; j < 9; j++) {
      scanf("%d", &currVal);
      if (currVal >= maxVal) {
        maxVal = currVal;
        maxX = i; maxY = j;
      }
    }
  }

  printf("%d\n", maxVal);
  printf("%d %d", maxX + 1, maxY + 1);
}
