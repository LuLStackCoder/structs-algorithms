/*
* @Author: LulStackCoder
* @Date:   2018-09-16 23:41:44
* @Last Modified by:   LulStackCoder
* @Last Modified time: 2018-09-18 00:08:20
*/

void	select_sort(int *array, int n)
{
	int		min;
	int		tmp;

	for (int i = 0; i < n - 1; ++i)
	{
		min = i;
		for (int j = i + 1; j < n; ++j)
		{
			if (array[j] < array[min])
				min = j;
		}
		tmp = array[i];
		array[i] = array[min];
		array[min] = tmp;
	}
}
