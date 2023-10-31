#include <stdio.h>

int main() {
  int numOfTestCase, firstNum, secondNum;
  scanf("%d", &numOfTestCase);
  int firstNums[numOfTestCase], secondNums[numOfTestCase];
  for (int i = 0; i < numOfTestCase; i++) {
    scanf("%d %d", &firstNum, &secondNum);
    firstNums[i] = firstNum; secondNums[i] = secondNum;
    printf("Case #%d: %d + %d = %d\n", i + 1, firstNums[i], secondNums[i], firstNums[i] + secondNums[i]);
  }
}