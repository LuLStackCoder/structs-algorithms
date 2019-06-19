/*
* @Author: LulStackCoder
* @Date:   2018-09-16 23:41:44
* @Last Modified by:   LulStackCoder
* @Last Modified time: 2018-09-18 00:32:13
*/

void	insert_sort(int *array, int n)
{
	int		key;
	int		j;

	for (int i = 0; i < n; ++i)
	{
		key = array[i];
		j = i;
		while (j > 0 && array[j - 1] > key)
		{
			array[j] = array[j - 1];
			j--;
		}
		array[j] = key;
	}
}
