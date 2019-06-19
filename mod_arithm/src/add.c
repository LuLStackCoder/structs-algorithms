/*
 * File: add.c
 * Created Date: Wednesday 24th October 2018
 * Author: LulStackCoder (lulstackdeveloper@gmail.com)
 * -----
 * Last Modified:
 * Wednesday, 24th October 2018 08:54:59 pm
 * Modified By: LulStackCoder
 * -----
 */

int mod_add(int a, int b, int n)
{
	int res;
	a = mod(a, n);
	b = mod(b, n);
	res = a + b;
	if (res >= n)
		return  res - n;
	return res;
}
