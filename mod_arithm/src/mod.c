/*
 * File: mod.c
 * Created Date: Wednesday 24th October 2018
 * Author: LulStackCoder (lulstackdeveloper@gmail.com)
 * -----
 * Last Modified:
 * Wednesday, 24th October 2018 09:05:36 pm
 * Modified By: LulStackCoder
 * -----
 */

int mod(int a, int n)
{
	int x;
	if (a == 0)
		return 0;
	if (a < n)
		return a;
	x = mod(a >> 1, n);
	x <<= 1;
	if (a & 1)
		x += 1;
	if (x >= n)
		x -= n;
	return x;
}
