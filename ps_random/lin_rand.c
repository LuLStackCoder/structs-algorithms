/*
* @Author: LulStackCoder
* @Date:   2018-09-15 21:21:05
* @Last Modified by:   LulStackCoder
* @Last Modified time: 2018-09-17 12:14:15
*/

#include <stdio.h>
#include <stdlib.h>

void	rnd(int n, int a, int b, int c, int x)
{
	unsigned long long	j;

	FILE *fp = fopen("random.txt", "w+");
	j = (unsigned long long) x;
	for (int i = 0; i < n; ++i)
	{
		if (i % a)
			a = (i % a) * c * b;
		else if (i % b)
			b = (i % b) * a * c;
		else if (i % c)
			c = (i % c) * b * a;
		j = i % (c % b) + ((a * j) + b) % c;
		fprintf(fp, "%llu ", j);
	}
	fclose(fp);
}

int		main(int argc, char *argv[])
{
	int		n;
	int		a;
	int		b;
	int		c;
	int		x;

	if (argc == 6)
	{
		n = atoi(argv[1]);
		a = atoi(argv[2]);
		b = atoi(argv[3]);
		c = atoi(argv[4]);
		x = atoi(argv[5]);
		rnd(n, a, b, c, x);
	}
	else
		printf("5 arguments: n, a, b, c, x\n");
	return 0;
}
