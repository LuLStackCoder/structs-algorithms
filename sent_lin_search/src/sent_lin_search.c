/*
* @Author: LulStackCoder
* @Date:   2018-09-15 17:47:14
* @Last Modified by:   LulStackCoder
* @Last Modified time: 2018-09-16 15:16:57
*/

int		sent_lin_search(unsigned long long *array, int n, unsigned long long x)
{
	int		i;
	unsigned long long	last;

	i = 0;
	last = array[n];
	array[n] = x;
	while (array[i] != x)
	{
		i++;
	}
	array[n] = last;
	if (i < n || array[n] == x)
		return i;
	return (-1);
}