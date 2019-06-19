/*
* @Author: LulStackCoder
* @Date:   2018-09-15 17:47:14
* @Last Modified by:   LulStackCoder
* @Last Modified time: 2018-09-16 14:31:23
*/

int		lin_search(unsigned long long *array, int n, unsigned long long x)
{
	for (int i = 0; i < n; ++i)
	{
		if (array[i] == x)
		{
			return i;
		}
	}
	return (-1);
}