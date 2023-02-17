#include <stdlib.h>
#include <time.h>
#include <stdio.h>
/**
 * main - Entry point
 *
 *Return:Always 0 (success)
 */
int main(void)
{
int n;
srand(time(0));
n = rand() - RAND_MAX / 2;
lastdigit = n % 10; 
if (lastdigit > 0)
{ 
printf("The last digit of %d is %d", n, lastdigit);
}
else if (lastdigit == 0)
{
printf("The last digit of %d is %d", n, lastdigit);
}
else
{
printf("The last digit of %d is %d", n, lastdigit);
}
return (0);
}

