#include <stdio.h>
#include <string.h>

int main() {
  int numOfCases;
  scanf("%d", &numOfCases);
  char strings[numOfCases][1000];

  for (int i = 0; i < numOfCases; i++) {
    scanf("%s", strings[i]);
  }

  for (int i = 0; i < numOfCases; i++) {
    printf("%c%c\n", strings[i][0], strings[i][strlen(strings[i]) - 1]);
  }
  return 0;
}