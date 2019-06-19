/*
* @Author: LulStackCoder
* @Date:   2018-09-15 15:03:03
* @Last Modified by:   LulStackCoder
* @Last Modified time: 2018-09-16 15:18:01
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
	scanf("%llu", &x);
	printf("Initial array:");
	for (int i = 0; i < argc - 1; ++i)
	{
		printf(" %llu", array[i]);
	}
	res = sent_lin_search(array, argc - 1, x);
	if (res == -1)
		printf("\n%llu Not found\n", x);
	else
		printf("\nIndex of %llu: %d\n", x, res);
	return 0;
}
