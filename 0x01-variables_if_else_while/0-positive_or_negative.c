#include <stdlib.h>
#include <time.h>
/**
*main - Program that prints if the number stored in variable n is negative or positive
*Return: 0
*/

/* betty style doc for function main goes there */
int main(void)
{
  int n;

  srand(time(0));
  n = rand() - RAND_MAX / 2;
  /* your code goes there */
if (n == 0)
  printf(" %d \n",n,"is zero");
 
if (n>0)
{
  printf(" %d \n",n,"is positive");
}
else
  printf(" %d \n",n,"is negative");
}
  return (0);
}
