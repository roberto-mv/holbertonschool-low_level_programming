#include <stdlib.h>
#include <time.h>
#include <stdio.h>
/**
 * main - Letter and numbers
 *
 * Return: 0
 */

int main(void)
{
int c;
char l;
for (c = 0; c < 10; c++)
putchar((c % 10) + '0');
for (l = 'a'; l <= 'f'; l++)
putchar(l);
putchar('\n');
return (0);
}
