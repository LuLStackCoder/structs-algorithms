/*
* @Author: LulStackCoder
* @Date:   2018-10-10 18:54:32
* @Last Modified by:   LulStackCoder
* @Last Modified time: 2018-10-19 21:02:14
*/

#include "fast_pow.h"

int main()
{
	int a;
	int n;
	char s[2];
	while (1)
	{
		printf("Input recursive or binary method or quit(r/b/q):\n");
		scanf("%1s", s);
		if (s[0] == 'r')
		{
			printf("Input a and n:\n");
			scanf("%d %d", &a, &n);
			printf("%d\n", rec_pow(a, n));
		}
		else if (s[0] == 'b')
		{
			printf("Input a and n:\n");
			scanf("%d %d", &a, &n);
			printf("%d\n", bin_pow(a, n));
		}
		else if (s[0] == 'q')
			break;
	}
	return 0;
}