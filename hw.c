#include <stdio.h>
#include <string.h>

int main(void) {
  char str[] = "string string string";
  for (size_t i = 0, len = strlen(str); i < len; i++) {
    str[i] = str[i] + ('A' - 'a');
    printf("%c\n", str[i]);
  }
  char p;
  scanf("%c", &p);
  printf("%i\n", p);
  return 0;
}
