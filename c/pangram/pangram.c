#include "pangram.h"
#include <string.h>
#define ALP_SIZE 26

static char lowcase(char letter) {
  char low_alphabet[] = "abcdefghijklmnopqrstuvwxyz";
  char up_alphabet[] = "ABCDEFGHIJKLMNOPQRSTUVWXYZ";

  for (register int x = 0; x < ALP_SIZE; x++) 
    if (letter == up_alphabet[x])
      return low_alphabet[x];
  return letter;
}

static int parsing(const char *sentence) {
  char alphabet[] = "abcdefghijklmnopqrstuvwxyz";
  int result = 0;
  if (!sentence) return 0;

  for (size_t x = 0; x < strlen(sentence); x++) 
    for (register int y = 0; y < ALP_SIZE; y++) 
      if (alphabet[y] == lowcase(sentence[x])){
        alphabet[y] = 0;
        result++;
      }
  return result;
}

bool is_pangram(const char *sentence) {
  return parsing(sentence) == ALP_SIZE;
  return 0;
}
