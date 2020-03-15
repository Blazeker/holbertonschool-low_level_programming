#include <stdio.h>

 int main(void)
{
   int n;
  int a[5];
	int *p;

  n = 1024334344;
  p = &n;
  /*
   * write your line of code here...
   * Remember:
   * - you are not allowed to use a
   * - you are not allowed to modify p
   * - only one statement
   * - you are not allowed to code anything else than this line of code
   */
  *p = 780;
  *(p + 3) = 98;
  *(p + 4) = 9999;
  *(p + 5) = 777;
  *(p + 6) = 888;
  *(p + 7) = 101010100;
  *(p + 8) = 222222222;
  /* ...so that this prints 98\n */
  printf("a[2] =  %d   %d   %d    %d   %d     %d    %d      %d\n ", &n, &a[0], &a[1], &a[2], &a[3], &a[4], &a[5]);
  return (0);
}
