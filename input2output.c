#include <stdio.h>

/* copy input to output; 1st Version  */
main()
{
  int c;

  while ((c = getchar()) != EOF)
    putchar(c);
}
