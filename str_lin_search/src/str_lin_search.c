/*
* @Author: LulStackCoder
* @Date:   2018-09-15 17:47:14
* @Last Modified by:   LulStackCoder
* @Last Modified time: 2018-09-15 21:00:15
*/

#include "ln_s.h"

int		cmp(char *s1, char *s2)
{
	while (*s1 && *s1 == *s2)
	{
		s1++;
		s2++;
	}
	return (*s1 - *s2);
}

int		str_lin_search(char **array, int n, char *x)
{
	for (int i = 0; i < n; ++i)
	{
		if (!cmp(array[i], x))
			return (i);
	}
	return -1;
}