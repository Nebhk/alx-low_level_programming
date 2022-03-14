#include <stdlib.h>

#include <time.h>
#include <stdio.h>

/* more headers goes there */


/* betty style doc for function main goes there 
 * main - prints if a number is positive, negative or zero
 * Description: using the main function print positice, negative or zero
 * Return: 0
 */
int main(void)


/*main - this is where the excusion of the code begins*/

{
		int n;



		srand(time(0));
		n = rand() - RAND_MAX / 2;

		/* your code goes there */
		if (n > 0)
		{
			printf("%i is positive\n", n);
		}
		else if (n == 0)
		{
			printf("%i is zero\n", n);
		}
		else if (n < 0)
		{
			printf("%i is negative\n", n);
		}

		return (0);

}
