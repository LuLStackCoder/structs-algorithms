/*
* @Author: LulStackCoder
* @Date:   2018-09-20 21:34:52
* @Last Modified by:   LulStackCoder
* @Last Modified time: 2018-09-20 23:21:50
*/

#include "merge_sort.h"

void	merge(int *array, int p, int q, int r)
{
	int		n, m;
	int		i, j;
	int		*l_array;
	int		*r_array;

	n = q - p + 1;
	m = r - q;
	l_array = malloc(sizeof(int) * (n + 1));
	r_array = malloc(sizeof(int) * (m + 1));
	for (int i = 0; i < n; ++i)
		l_array[i] = array[p + i];
	for (int i = 0; i < m; ++i)
		r_array[i] = array[q + 1 + i];
	i = 0;
	j = 0;
	for (int k = p; k <= r; ++k)
	{
		if (i < n && j < m)
		{
			if (l_array[i] <= r_array[j])
			{
				array[k] = l_array[i];
				i++;
			}
			else
			{
				array[k] = r_array[j];
				j++;
			}
		}
		else if (i < n)
		{
			array[k] = l_array[i];
			i++;
		}
		else
		{
			array[k] = r_array[j];
			j++;
		}
	}
	free(l_array);
	free(r_array);
}

void	merge_sort(int *array, int p, int r)
{
	int		q;

	if (p < r)
	{
		q = (p + r) / 2;
		merge_sort(array, p, q);
		merge_sort(array, q + 1, r);
		merge(array, p, q, r);
	}
}