#include <stdio.h>

int main() {
  const int valOfQDNPArr[4] = {25, 10, 5, 1};
  int numOfTC, currVal, currCount, cents[100000];
  scanf("%d", &numOfTC);
  for (int i = 0; i < numOfTC; i++) {
    scanf("%d", &cents[i]);
  }
  for (int i = 0; i < numOfTC; i++) {
    currVal = cents[i];
    for (int j = 0; j < sizeof(valOfQDNPArr) / sizeof(int); j++) {
      currCount = 0;
      while (currVal >= valOfQDNPArr[j]) {
        currVal -= valOfQDNPArr[j];
        currCount++;
      }
      printf("%d ", currCount);
    }
    printf("\n");
  }

  return 0;
}