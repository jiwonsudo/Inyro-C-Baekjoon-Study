#include <stdio.h>

int main() {
  int byteWantToSave;
  scanf("%d", &byteWantToSave);
  for (; byteWantToSave > 0; byteWantToSave -= 4) {
    printf("long ");
  }
  printf("int");
  return 0;
}