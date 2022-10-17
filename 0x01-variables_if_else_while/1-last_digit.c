#include <stdio.h>
#include <stdlib.h>
#include <time.h>
/**
 * main - Entry
 * Return: Always 0
 */
int main(void)
{
	 int n;
	 int idigit;

	 srand(time(0));
	 n = rand() - RAND_MAX / 2;
	 idigit = n % 10;
	 if (idigit > 5)
	 {
		 printf("Last digit of %d is %d and is greater than 5\n", n, idigit);
	 }
	 else if (idigit == 0)
	 {
		 printf("Last digit of %d is %d and is 0\n", n, idigit);
	 }
	 else if (idigit < 6 && idigit != 0)
	 {
		 printf("Last digit of %d is %d and is less than 6 and not 0\n", n, idigit);
	 }
	 return (0);
}
