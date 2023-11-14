#include <stdio.h>

int main() {
  char backGround[100][100] = {0,};
  int numOfPaper, startX, startY, count = 0;
  scanf("%d", &numOfPaper);
  for (int i = 0; i < numOfPaper; i++) {
    scanf("%d %d", &startX, &startY);
    for (int x = 0; x < 10; x++) {
      for (int y = 0; y < 10; y++) {
        backGround[startX + x][startY + y] = 1;
      }
    }
  }
  for (int i = 0; i < 100; i++) {
    for (int j = 0; j < 100; j++) {
      if (backGround[i][j] == 1) count++;
    }
  }
  printf("%d", count);
  return 0;
}