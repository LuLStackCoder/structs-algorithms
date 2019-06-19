/*
* @Author: LulStackCoder
* @Date:   2018-09-16 23:41:44
* @Last Modified by:   LulStackCoder
* @Last Modified time: 2018-09-20 00:27:01
*/

int		partition(int *array, int p, int r)
{
	int		q;
	int		tmp;

	q = p;
	for (int i = p; i < r; ++i)
	{
		if (array[i] <= array[r])
		{
			tmp = array[q];
			array[q] = array[i];
			array[i] = tmp;
			q++;
		}
	}
	tmp = array[q];
	array[q] = array[r];
	array[r] = tmp;
	return q;
}

void	quick_sort(int *array, int p, int r)
{
	int		q;

	if (p < r)
	{
		q = partition(array, p, r);
		quick_sort(array, p, q - 1);
		quick_sort(array, q + 1, r);
	}
}
