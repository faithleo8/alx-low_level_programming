#include <stdio.h>
#include <stdlib.h>
/**
 * main - prints the alphabet in lowercase adn then in uppercase
 *
 *Return: Always 0(success)
 */
int main(void)
{
int x;
for (x = 'A'; x <= 'Z'; x++)
{
int lower_x = tolower(x);
putchar(lower_x);
}
return (0);
}
