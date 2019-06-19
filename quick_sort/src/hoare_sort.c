/*
* @Author: LulStackCoder
* @Date:   2018-09-20 23:54:35
* @Last Modified by:   LulStackCoder
* @Last Modified time: 2018-09-21 13:14:05
*/

int		partition(int *array, int p, int r)
{
	int		v = array[(p + r) / 2];
	int		i;
	int		j;
	int		tmp;

	i = p;
	j = r;
	while (i <= j)
	{	
		while (array[i] < v)
			i++;
		while (array[j] > v)
			j--;
		if (i >= j)
			break;
		tmp = array[i];
		array[i] = array[j];
		array[j] = tmp;
		i++, j--;
	}
	return j;
}

void	quick_sort(int *array, int p, int r)
{
	int		q;

	if (p < r)
	{
		q = partition(array, p, r);
		quick_sort(array, p, q);
		quick_sort(array, q + 1, r);
	}
}