#include <stdio.h>

int main() {
  int numOfNum, totalSum = 0;
  scanf("%d", &numOfNum);
  char numsStr[numOfNum];
  scanf("%s", numsStr);
  for (int i = 0; i < numOfNum; i++) {
    totalSum += numsStr[i] - '0';
  }
  printf("%d", totalSum);
  return 0;
}