#include <stdio.h>

int main() {
    int totalPrice, numOfThings, price, num;
    int totalSum = 0;
    scanf("%d\n", &totalPrice);
    scanf("%d\n", &numOfThings);
    for (int i = 0; i < numOfThings; i++) {
        scanf("%d %d", &price, &num);
        totalSum += (price * num);
    }
    totalPrice == totalSum ? printf("Yes") : printf("No");
    return 0;
}