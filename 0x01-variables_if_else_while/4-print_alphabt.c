#include <stdio.h>
/**
 * main - function to print alphabet in lowercases but skip q and e
 *
 * Return : Always (0) success
 */
int main(void)
{
int x;

for (x = 'a'; x <= 'z'; x++)
if (x != 'e' && x != 'q')
putchar(x);

putchar('\n');

return (0);
}
