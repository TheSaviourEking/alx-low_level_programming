#include <stdio.h>
#include <stdlib.h>
#include <time.h>
/* more headers goes there */

/* betty style doc for function main goes there */
/**
 * main - Assigns random number to variable n each time it
 * is executed
 * Return: Always (0) Success
 **/
int main(void)
{
	int n, last_digit = 0;

	srand(time(0));
	n = rand() - RAND_MAX / 2;
	/* your code goes there */
	last_digit = n % 10;
	printf("Last digit of %d is %d ", n, last_digit);
	if (last_digit > 5)
		printf("and is greater than 5");
	if (last_digit == 0)
		printf("and is 0");
	if ((last_digit < 6) && (last_digit != 0))
		printf("and is less than 6 and not 0");

	printf("\n");
	return (0);
}
