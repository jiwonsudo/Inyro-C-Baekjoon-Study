#include <stdio.h>

int main() {
  int num, numToFind, count = 0;
  scanf("%d\n", &num);
  int arr[num];
  for (int i = 0; i < num; i++) {
    scanf("%d ", &arr[i]);
  }

  scanf("\n%d", &numToFind);

  for (int idx = 0; idx < num; idx++) {
    if (arr[idx] == numToFind) {
      count++;
    }   
  }
  printf("%d", count);
	return 0;
}