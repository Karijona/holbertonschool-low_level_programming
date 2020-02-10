#include <stdio.h>
/**
 * main - Entry point
 *
 * Return: Always 0 (Success)
 */

int main(void)
{
char calp;

for (calp = 'a'; calp <= 'z'; calp++)
{
putchar(calp);
}
for (calp = 'A'; calp <= 'Z'; calp++)
{
putchar(calp);
}
putchar('\n');
return (0);
}
