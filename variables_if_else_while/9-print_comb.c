#include <stdio.h>
int main (void)
{
	int i;

	for(i=0; i<=9; i++)
	{
		putchar('0' +i);  /* digit */
		if (i!=9)
		{
			putchar(',');
			putchar(' '); 
		}
	}
	putchar('\n');  /* new line */
	return(0);
}
