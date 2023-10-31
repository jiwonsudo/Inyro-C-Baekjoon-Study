#include <stdio.h>

int main() {
    int d1, d2, d3;
    scanf("%d %d %d", &d1, &d2, &d3);
    if (d1 == d2 && d2 == d3) {
        printf("%d", (d1 * 1000) + 10000);
    } else if (d1 == d2) {printf("%d", (d1 * 100) + 1000);}
    else if (d2 == d3) {printf("%d", (d2 * 100) + 1000);}
    else if (d1 == d3) {printf("%d", (d1 * 100) + 1000);}
    else {
        if (d1 >= d2 && d1 >= d3) {printf("%d", d1 * 100);}
        else if (d2 >= d1 && d2 >= d3) {printf("%d", d2 * 100);}
        else {printf("%d", d3 * 100);}
    }
    return 0;
}