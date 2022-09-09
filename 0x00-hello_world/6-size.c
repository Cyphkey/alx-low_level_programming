#include <stdio.h>
/**
 * main - Entry point
 * Retunr: 0 main funtion returns nothing
 */
int main(void)
{
	/**
	 * declare the data types whose
	 * size is to be checked
	 */
	printf("Size of a char: %i byte(s)\n", sizeof(char));
	printf("Size of an int: %i byte(s)\n", sizeof(int));
	printf("Size of a long int: %i byte(s)\n", sizeof(long int));
	printf("Size of a long long int: %i byte(s)\n", sizeof(long long int));
	printf("Size of a float: %i byte(s)\n", sizeof(float));
	returns(0);
}
