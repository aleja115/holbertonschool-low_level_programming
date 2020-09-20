#include <stdio.h>
/**
 *main - Entry point
 *
 *Return: 0
 */
int main(void)
{
int i;
int j=97;
char c;
for (i = 48; i < 64; i++)
{
if (i < 58){
c = i;
}
else
{
if (i > 57){
c = j++;
}
}
putchar(c);
}
putchar('\n');
return 0;
}
