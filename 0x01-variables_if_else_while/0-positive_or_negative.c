#include <stdlib.h>
#include <time.h>
/* more headers goes there */

/* betty style doc for function main goes there */
int main(void)
{
	int n;

	srand(time(0));
	n = rand() - RAND_MAX / 2;
	/* your code goes there */
	char a = "the number is positive";
	if (n>0){
		return (a);
	}
	else {
		if(n==0)
		{
                   return ("The number is zero");
		}
		else 
			return ("The number is negative");
	}
	
}
