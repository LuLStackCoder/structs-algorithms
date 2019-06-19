/*
* @Author: LulStackCoder
* @Date:   2018-09-16 23:41:44
* @Last Modified by:   LulStackCoder
* @Last Modified time: 2018-09-18 00:01:52
*/

void	bubble_sort(int *array, int n)
{
	int		tmp;
	int		i;
	int		flag;

	i = 0;
	flag = 1;
	while (flag)
	{
		flag = 0;
		for (int j = 0; j < n - 1 - i; ++j)
		{
			if (array[j] > array[j + 1])
			{
				tmp = array[j];
				array[j] = array[j + 1];
				array[j + 1] = tmp;
				flag = 1;
			}
		}
		i++;
	}
}
