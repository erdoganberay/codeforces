#include <stdio.h>

int main() {
  int slice_count = 0;
  scanf("%d", &slice_count);
  if ((slice_count % 2 == 0) && slice_count > 2) {

    printf("%s", "YES");

  } else {
    printf("%s", "NO");
  }
  return 0;
}
