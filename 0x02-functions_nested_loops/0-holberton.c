#include "holberton.h"

/**
 * main - Entry point
 * Description: Displays "Holberton" followed by a new line
 * Return: Always 0
 */
int main(void)
{
int i = 0;
char str[] = "Holberton";

while (str[i] != '\0')
_putchar(str[i++]);

_putchar('\n');

return (0);
}
