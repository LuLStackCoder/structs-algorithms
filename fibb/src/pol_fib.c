/*
* @Author: LulStackCoder
* @Date:   2018-10-19 13:32:16
* @Last Modified by:   LulStackCoder
* @Last Modified time: 2018-10-19 21:19:12
*/

#include "fibb.h"

int pol_fib(int n)
{
	int *a = (int*)malloc(sizeof(int) * n);
	a[0] = 0;
	a[1] = 1;
	for (int i = 2; i <= n; ++i)
	{
		a[i] = a[i - 1] + a[i - 2];
	}
	return a[n];
}
