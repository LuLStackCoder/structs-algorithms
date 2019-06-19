/*
 * File: pow.c
 * Created Date: Wednesday 24th October 2018
 * Author: LulStackCoder (lulstackdeveloper@gmail.com)
 * -----
 * Last Modified:
 * Thursday, 25th October 2018 01:49:19 am
 * Thursday, 25th October 2018 12:06:10 am
 * Modified By: LulStackCoder
 * -----
 */

#include <stdio.h>

int mod(int a, int n);

int mult(int a, int b)
{
	int c;
	if (a == 0 || b == 0)
		return 0;
	c = mult(a, b >> 1);
	if (b & 1)
		{
			printf("%d\n", a + (c << 1));
			return a + (c << 1);
		}
	
	else 
	{
		printf("%d\n", (c << 1));
		return c << 1;
	}
}

int mod_pow(int a, int b, int n)
{
	int c = 1;
	if (b == 0)
		return 1;
	while (b)
	{
		if (b & 1)
		{
			c = mod(mult(c, a), n);
		}
		a = mod(mult(a, a), n);
		b >>= 1;
	}
	return c;
}

int mod_exp(int a,int b,int n)
{
	int c;
	if (b == 0)
		return 1;
	c = mod_exp(a, b >> 1, n);
	if (b & 1)
		return mod(mult(a, mult(c, c)), n);
	else
		return mod(mult(c, c), n);
}

int main(void)
{
	printf("%d\n", mult(1, 25));
}