#include <stdio.h>
/**
 *main - Entry point
 *
 *Return: 0
 */
int main(void)
{
int i, e;
for (i = 48; i < 58; i++)
{
for (e = 48; e < 58; e++)
{
putchar(i);
putchar(e);
if (i == 57 && e == 57)
break;
putchar(44);
putchar(32);
}
}
putchar(10);
return (0);
}
