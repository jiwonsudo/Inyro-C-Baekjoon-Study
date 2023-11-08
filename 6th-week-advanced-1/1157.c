#include <stdio.h>
#include <string.h>
#include <ctype.h>

int main() {
  int numWord[26] = {0,}, numMost = 0, num2ndMost = 0; // to store num of word's frequency
  char word[1000000], wordMost, word2ndMost, alphabets[26] = "ABCDEFGHIJKLMNOPQRSTUVWXYZ";
  scanf("%s", word);
  int lenOfWord = strlen(word);
  for (int i = 0; i < lenOfWord; i++) {
    word[i] = toupper(word[i]);
    for (int j = 0; j < 26; j++) {
      if(word[i] == alphabets[j]) numWord[j]++;
    }
  }
  for (int i = 0; i < 26; i++) {
    if (numWord[i] > numMost && numWord[i] > num2ndMost) {
      numMost = numWord[i];
      wordMost = alphabets[i];
    }
    else if (numWord[i] <= numMost && numWord[i] > num2ndMost) {
      num2ndMost = numWord[i];
      word2ndMost = alphabets[i];
    }
  }
  printf("%c", numMost != num2ndMost ? wordMost : '?');
  return 0;
}