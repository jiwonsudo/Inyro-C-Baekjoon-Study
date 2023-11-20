#include <stdio.h>
#include <string.h>
#include <math.h>

int main() {
  char refArr[36] = "0123456789ABCDEFGHIJKLMNOPQRSTUVWXYZ";
  char strToCnvt[100000], currDigit;
  long long result = 0;
  int baseToCnvt, numOfCurrDigit, lenOfStrToConv;

  scanf("%s %d", strToCnvt, &baseToCnvt);
  lenOfStrToConv = strlen(strToCnvt); // Save length of string to save time getting strlen(strToCnvt)

  for (int i = 0; i < lenOfStrToConv; i++) {
    currDigit = strToCnvt[i];

    // Get numOfCurrDigit by searching elem's of refArr.
    for (int searchIdx = 0; searchIdx < 36; searchIdx++) {
      if (currDigit == refArr[searchIdx]) {
        numOfCurrDigit = searchIdx;
      }
    }

    result += pow(baseToCnvt, lenOfStrToConv - i - 1) * numOfCurrDigit;
  }

  printf("%lld", result);

  return 0;
}