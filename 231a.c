#include <stdio.h>
int main() {
  int test_count;
  int result = 0;
  int a, b, c;
  scanf("%d", &test_count);
  for (int i = 0; i < test_count; i++) {
    scanf("%d %d %d", &a, &b, &c);
    if (a + b + c >= 2)
      result++;
  }
  printf("%d", result);
  return 0;
}
