#include <stdio.h>

int main() {
    int curH, curM, cookMin;
    scanf("%d %d\n%d", &curH, &curM, &cookMin);
    if (curM + cookMin > 59) {
        curH += (curM + cookMin) / 60; // curH : int이므로 몫만 더해짐
        if (curH > 23) {printf("%d %d", curH % 24, (curM + cookMin) % 60);}
        else {printf("%d %d", curH, (curM + cookMin) % 60);};
    } else {printf("%d %d", curH, curM + cookMin);};
    return 0;
}