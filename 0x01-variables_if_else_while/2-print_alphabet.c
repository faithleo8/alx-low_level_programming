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
putchar(x);
for (x = 'a'; x <= 'z'; x++)
putchar(x);
return (0);
}
