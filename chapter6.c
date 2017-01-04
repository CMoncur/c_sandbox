#include <stdio.h>
#include <string.h>

int main () {
  char month[12] = "January\0";
  printf("%s \n", month);

  strcpy(month, "April");
  printf("%s \n", month);

  return 0;
}
