#include <stdlib.h>
#include <stdio.h>
#include <time.h>
/* more headers goes there */

/* betty style doc for function main goes there */
int main(void)
{
	int n;
	int lastdigit;
	srand(time(0));
	n = rand() - RAND_MAX / 2;
	lastdigit=n%10;
	printf("Last digit of %d is %d", n, lastdigit);
	if (lastdigit>5) {
		printf(" and is greater than 5\n"); }
	else if (lastdigit==0){
		printf(" and is 0"); }
	else {
		printf(" and is less than 6 and not 0"); }

	/* your code goes there */
	return (0);
}
