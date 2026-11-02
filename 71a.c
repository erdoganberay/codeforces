#include <stdio.h>

int main() {

  int test_case = 0;
  char word[101];

  scanf("%d", &test_case);
  for (int i = 0; i < test_case; i++) {
    int len = 0;
    scanf("%s", word);
    while (word[len] != '\0') {
      len++;
    }
    if (len > 10) {
      printf("%c%d%c\n", word[0], len - 2, word[len - 1]);
    } else {
      printf("%s\n", word);
    }
  }
  return 0;
}
