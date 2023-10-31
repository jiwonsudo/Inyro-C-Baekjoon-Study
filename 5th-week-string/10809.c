#include <stdio.h>
#include <string.h>

int main() {
  char word[100]; // only low-cases
  char alphabetArr[26] = "abcdefghijklmnopqrstuvwxyz";
  int numOfWordArr[26] = {[0 ... 25] = -1};
  scanf("%s", word);
  for (int alphabet = 0; alphabet < 26; alphabet++) {
    for (int letter = 0; letter < strlen(word); letter++) {
      if (word[letter] == alphabetArr[alphabet]) {
        numOfWordArr[alphabet] = letter;
        break;
      }
    }
  }
  for (int i = 0; i < 26; i++) printf("%d ", numOfWordArr[i]);
  return 0;
}