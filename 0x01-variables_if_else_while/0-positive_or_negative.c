#include <stdlib.h>
#include <time.h>
/**
 * main - main function
 * Description: checks if random value pos, neg or zero
 * Return: 0 if success
 */
int main(void)
{
int n;
srand(time(0));
n = rand() - RAND_MAX / 2;
if ( n > 0 )
printf(n+" is positive");
else if ( n==0)
printf(n+ " is zero");
else
printf(n + " is negative");
return (0);
}
