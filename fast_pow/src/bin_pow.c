/*
* @Author: LulStackCoder
* @Date:   2018-10-15 00:51:35
* @Last Modified by:   LulStackCoder
* @Last Modified time: 2018-10-15 20:17:07
*/

int bin_pow(int a, int n)
{
	int res = 1;
	while (n)
	{
		if (n & 1)
			res *= a;
		a *= a;
		n >>= 1;
	}
	return res;
}
