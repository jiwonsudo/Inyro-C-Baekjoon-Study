#include <stdio.h>

int main() {
    int testScore;
    scanf("%d", &testScore);
    if (testScore >= 90 && testScore <= 100) {printf("A");}
    else if (testScore >= 80 && testScore <= 89) {printf("B");}
    else if (testScore >= 70 && testScore <= 79) {printf("C");}
    else if (testScore >= 60 && testScore <= 69) {printf("D");}
    else {printf("F");};
    return 0;
}