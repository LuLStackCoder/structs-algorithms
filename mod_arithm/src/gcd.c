/*
 * File: gcd.c
 * Created Date: Thursday 25th October 2018
 * Author: LulStackCoder (lulstackdeveloper@gmail.com)
 * -----
 * Last Modified:
 * Thursday, 25th October 2018 08:48:48 am
 * Modified By: LulStackCoder
 * -----
 */

#include <stdio.h>

int mod(int a, int n);

int gcd(int a, int b)
{
	if (b == 0)
		return a;
	return gcd(b, mod(a, b));
}

int it_gcd(int a, int b)
{
	int rem;
	while (b != 0)
	{
		rem = mod(a, b);
		a = b;
		b = rem;
	}
	return a;
}

int main(void)
{
	printf("%d\n", it_gcd(64, 36));
}