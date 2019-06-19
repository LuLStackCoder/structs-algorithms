/*
* @Author: LulStackCoder
* @Date:   2018-10-19 19:44:00
* @Last Modified by:   LulStackCoder
* @Last Modified time: 2018-10-19 21:23:26
*/

#include "fibb.h"

int main()
{
	int n;
	char m;
	while (1)
	{
		printf("Input method: rec, pol, log or quit(r/p/l/q):\n");
		scanf("%c", &m);
		if (m == 'q')
			break;
		printf("Input num\n");
		scanf("%d", &n);
		if (m == 'r')
			printf("Result: %d\n", rec_fib(n));
		if (m == 'p')
			printf("Result: %d\n", rec_fib(n));
		if (m == 'l')
			printf("Result: %d\n", rec_fib(n));
	}
}
