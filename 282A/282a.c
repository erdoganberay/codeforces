#include <stdio.h>

int main() {
  int test_count;
  int result = 0;
  char a;
  char b;
  char c;
  scanf("%d", &test_count);
  for (int i = 0; i < test_count; i++) {
    scanf(" %c%c%c", &a, &b, &c);
    if (a == '+' || b == '+' || c == '+') {
      ++result;
    } else {
      --result;
    }
  }
  printf("%d", result);
  return 0;
}
