/*
* @Author: LulStackCoder
* @Date:   2018-10-10 18:52:33
* @Last Modified by:   LulStackCoder
* @Last Modified time: 2018-10-15 20:17:13
*/

int rec_pow(int a, int n)
{
	if (n == 0)
		return 1;
	if (n & 1)
		return rec_pow(a, n - 1) * a;
	else
	{
		int half = rec_pow(a, n >> 1);
		return half * half;
	}
}
