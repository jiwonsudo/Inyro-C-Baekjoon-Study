#include <stdio.h>

int main() {
  int arr[9];
  for (int i = 0; i < sizeof(arr) / sizeof(arr[0]); i++) {
    scanf("%d", &arr[i]);
  } 
  int index = 0, max = arr[0];
  for (int i = 0; i < sizeof(arr) / sizeof(arr[0]); i++) {
    if (arr[i] > max) {
      max = arr[i];
      index = i;
    }
  }
  printf("%d\n%d", max, index + 1);
  return 0;
}