#include <stdlib.h>
#include <time.h>
#include <stdio.h>
/**
 * main - entrypoint
 * Description: random number and check its last digit,and compare
 * Return: 0
*/

int main(void)
{
	int n;

	srand(time(0));
	n = rand() - RAND_MAX / 2;
	printf("Last digit of %d is %d", n, n % 10);
	if (n % 10 > 5)
		printf(" Last digit of %d is 8 and is greater than 5\n");
	else if (n % 10 == 0)
		printf("Last digit of %d is 0 and is 0\n");
	else if (n % 10 < 6 && n % 10 != 0)
		printf("Last digit of %d is -8 and is less than 6 and not 0\n");
	return (0);
}
