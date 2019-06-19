/*
* @Author: LulStackCoder
* @Date:   2018-09-15 15:03:03
* @Last Modified by:   LulStackCoder
* @Last Modified time: 2018-09-16 14:57:49
*/

#include "ln_s.h"

int		main(int argc, char *argv[])
{
	int					i;
	unsigned long long	*array;
	unsigned long long	x;
	int					res;

	i = 1;
	array = malloc(sizeof(int) * argc);
	while (i < argc)
	{
		array[i - 1] = atoi(argv[i]);
		i++;
	}
	printf("Input x: ");
	scanf("%lli", &x);
	printf("Initial array:");
	for (int i = 0; i < argc - 1; ++i)
	{
		printf(" %lld", array[i]);
	}
	res = lin_search(array, argc - 1, x);
	if (res == -1)
		printf("\n%lld Not found\n", x);
	else
		printf("\nIndex of %lld: %d\n", x, res);
	return 0;
}
