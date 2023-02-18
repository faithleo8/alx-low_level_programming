#include <stdio.h>
/**
 * main - prints the alphabet in lowercase adn then in uppercase
 *
 *Return: Always 0(success)
 */
int main(void)
{
char x;
x = 'a';
while (x <= 'z')
{
putchar(x);
x++;
}
putchar("\n");
return (0);
}
