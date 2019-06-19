/*
 * File: mult.c
 * Created Date: Wednesday 24th October 2018
 * Author: LulStackCoder (lulstackdeveloper@gmail.com)
 * -----
 * Last Modified:
 * Thursday, 25th October 2018 08:49:16 am
 * Modified By: LulStackCoder
 * -----
 */

int mult(int a, int b)
{
	int c;
	if (b == 0 || a == 0)
		return 0;
	c = mult(a, b >> 1);
	if (b & 1)
		return a + (c << 1);
	else return c << 1;
}

int mod_mult(int a, int b, int n)
{
	a = mod(a, n);
	b = mod(b, n);
	int res = mult(a, b);
	return mod(res, n);
}
