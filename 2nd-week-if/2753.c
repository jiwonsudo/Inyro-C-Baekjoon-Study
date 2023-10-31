#include <stdio.h>

int main() {
    int inputedYear;
    scanf("%d", &inputedYear);
    if ((((inputedYear % 4) == 0) && ((inputedYear % 100) != 0)) || (inputedYear % 400 == 0)) {printf("1");}
    else {printf("0");};
    return 0;
}