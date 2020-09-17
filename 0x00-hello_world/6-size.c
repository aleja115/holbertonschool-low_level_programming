#include <stdio.h>

/**
* main - print the size of types data
* Return: 0
*/

int main(void)
{
char x;
int y;
long int z;
long long a;
float b;

printf("%d\n Size of a char:\n", sizeof(x));
printf("%d\n Size of an int:\n", sizeof(y));
printf("%d\n Size of a long int:\n", sizeof(z));
printf("%d\n Size of a long long:\n", sizeof(a));
printf("%d\n Size of a float:\n", sizeof(b));

return (0);
}
