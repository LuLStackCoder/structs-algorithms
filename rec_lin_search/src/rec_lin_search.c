/*
* @Author: LulStackCoder
* @Date:   2018-09-15 15:02:58
* @Last Modified by:   LulStackCoder
* @Last Modified time: 2018-09-26 23:12:00
*/

int		rec_lin_search(unsigned long long *array, int n, int i, unsigned long long x)
{
	if (i >= n)
		return (-1);
	if (array[i] != x)
		return rec_lin_search(array, n, i + 1, x);
	if (array[i] == x)
		return i;
	return (0);
}
