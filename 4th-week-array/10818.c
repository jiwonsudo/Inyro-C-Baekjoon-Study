#include <stdio.h>

int main() {
  int sizeOfArr, min, max;
  scanf("%d\n", &sizeOfArr);
  int arr[sizeOfArr];
  for (int idx = 0; idx < sizeOfArr; idx++) {
    scanf("%d", &arr[idx]);
  }

  min = arr[0], max = arr[0];
  for (int idx = 0; idx < sizeOfArr; idx++) {
    if (arr[idx] < min) {
      min = arr[idx];
    }
    if (arr[idx] > max) {
      max = arr[idx];
    }
  }
  printf("%d %d", min, max);
	return 0;
}