#include <stdio.h>
#include <string.h>

int main() {
  int numOfSpaces = 0;
  char sentence[1000000];
  scanf("%[^\n]", sentence);
  if (sentence[0] == ' ' && strlen(sentence) == 1) {
    printf("0");
    return 0;
  }
  for (int i = 0; i < strlen(sentence); i++) {
    if ((i == 0 && sentence[i] == ' ') || (i == strlen(sentence) - 1 && sentence[i] == ' ')) continue;
    else if (sentence[i] == ' ') numOfSpaces++;
  }
  printf("%d", numOfSpaces + 1);
  return 0;
}