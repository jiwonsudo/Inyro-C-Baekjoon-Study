#include <stdio.h>

int main() {
  int num, cnt = 2;
	scanf("%d", &num);
	while (num--) cnt += (cnt - 1);
	printf("%d\n", cnt * cnt);
  
	return 0;
}