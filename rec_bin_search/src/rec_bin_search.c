/*
* @Author: LulStackCoder
* @Date:   2018-09-15 17:47:14
* @Last Modified by:   LulStackCoder
* @Last Modified time: 2018-09-16 16:31:05
*/

int		rec_bin_search(unsigned long long *array, int l, int r, unsigned long long x)
{
	int		m;

	if (l <= r)
	{
		m = (l + r) / 2;
		if (array[m] == x)
			return m;
		else if (array[m] > x)
			return rec_bin_search(array, l, m - 1, x);
		else if (array[m] < x)
			return rec_bin_search(array, l + 1, r, x);
	}
	return (-1);
}