/*
* @Author: LulStackCoder
* @Date:   2018-09-15 15:03:03
* @Last Modified by:   LulStackCoder
* @Last Modified time: 2018-09-15 19:03:27
*/

#include "ln_s.h"

int		main(int argc, char *argv[])
{
	char	x[80];
	int		res;

	printf("Input x: ");
	scanf("%79s", x);
	printf("Initial array:");
	for (int i = 1; i < argc; ++i)
	{
		printf(" %s", argv[i]);
	}
	printf("\n");
	res = str_lin_search(argv + 1, argc - 1, x);
	if (res == -1)
		printf("\n%s Not found\n", x);
	else
		printf("\nIndex of %s: %d\n", x, res);
	return 0;
}
