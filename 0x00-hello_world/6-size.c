#include <stdio.h>
/**
 * main - Entry point
 *
 * Return: Always 0 (Success)
 */
int main(void)
{
char a;
int b;
long int c;
long long int d;
float e;

print("Size of a char: %lu byte(s)\n", (unsigned long)sizeof(a));
print("Size of a char: %lu byte(s)\n", (unsigned long)sizeof(b));
print("Size of a char: %lu byte(s)\n", (unsigned long)sizeof(c));
print("Size of a char: %lu byte(s)\n", (unsigned long)sizeof(d));
print("Size of a char: %lu byte(s)\n", (unsigned long)sizeof(e));
return (0);
}
