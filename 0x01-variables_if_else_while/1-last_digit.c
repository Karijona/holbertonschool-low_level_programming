#include <stdlib.h>
#include <time.h>
#include <stdio.h>
/**
 * main - Entry point
 *
 * Return: Always 0 (Success)
 */
/* more headers goes there */

/* betty style doc for function main goes there */
int main(void)
{
int n;
char rst;

srand(time(0));
n = rand() - RAND_MAX / 2;
rst = n % 10;
if (rst > 5)
{
printf("Last digit of %d is %d and is greater than 5\n", n, rst);
}
else if (rst == 0)
{
printf("Last digit of %d is %d and is 0\n", n, rst);
}
else
{
printf("Last digit of %d is %d and is less than 6 and not 0\n", n, rst);
}
return (0);
}
