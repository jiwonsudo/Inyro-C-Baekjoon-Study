#include <stdio.h>

int main() {
    char str[1000];
    int aim;
    scanf("%s\n%d", str, &aim);
    printf("%c", str[aim - 1]);
    return 0;
}