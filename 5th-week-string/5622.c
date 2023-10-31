#include <stdio.h>
#include <string.h>

int main() {
  int time = 0;
  char string[15];
  scanf("%s", string);
  for (int i = 0; i < strlen(string); i++) {
    if (string[i] >= 65 && string[i] <= 67) time += 3;
    else if (string[i] >= 68 && string[i] <= 70) time += 4;
    else if (string[i] >= 71 && string[i] <= 73) time += 5;
    else if (string[i] >= 74 && string[i] <= 76) time += 6;
    else if (string[i] >= 77 && string[i] <= 79) time += 7;
    else if (string[i] >= 80 && string[i] <= 83) time += 8;
    else if (string[i] >= 84 && string[i] <= 86) time += 9;
    else time += 10;
  }
  printf("%d", time);
  return 0;
}