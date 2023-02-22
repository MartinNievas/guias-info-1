#include <stdio.h>

int main(void)
{
  
  int i;

  for (i = 5; i > -6; i--)
  {
    if (i > 0) 
      printf("%d ", i);
    else
      printf("%d ", -i);

  }

  return 0;
}
