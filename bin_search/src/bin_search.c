/*
* @Author: LulStackCoder
* @Date:   2018-09-15 17:47:14
* @Last Modified by:   LulStackCoder
* @Last Modified time: 2018-09-16 15:42:25
*/

int		bin_search(unsigned long long *array, int n, unsigned long long x)
{
	int		l;
	int		r;
	int		m;

	l = 0;
	r = n;
	while (l <= r)
	{
		m = (l + r) / 2;
		if (array[m] == x)
			return m;
		else if (array[m] > x)
			r = m - 1;
		else if (array[m] < x)
			l = m + 1;
	}
	return (-1);
}