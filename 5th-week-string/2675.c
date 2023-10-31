#include <stdio.h>
#include <string.h>

int main() {
  int numOfCases;
  scanf("%d", &numOfCases);
  char wordsToRepeat[numOfCases][1000];
  int numToRepeat[numOfCases];
  for (int i = 0; i < numOfCases; i++) {
    scanf("%d %s", &numToRepeat[i], wordsToRepeat[i]);
  }
  for (int i = 0; i < numOfCases; i++) {
    for (int j = 0; j < strlen(wordsToRepeat[i]); j++) {
      int num = numToRepeat[i];
      while (num--) printf("%c", wordsToRepeat[i][j]);
    }
    printf("\n");
  }
  return 0;
}