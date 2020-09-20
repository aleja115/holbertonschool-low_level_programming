#include <stdio.h>
/**
 *main - Entry point
 *
 *Return: 0
 */
int main(void)
{
int i;
for (i = 48; i < 64; i++)
{
char c;
if (i < 58)
{
putchar(i);
}
else
{
if (i == 58)
{
c = 'a';
}
if (i == 59)
{
c = 'b';
}
if (i == 60)
{
c = 'c';
}
if (i == 61)
{
c = 'd';
}
if (i == 62)
{
c = 'e';
}
if (i == 63)
{
c = 'f';
}
putchar(c);
putchar('\n');
}
}
return (0);
}
