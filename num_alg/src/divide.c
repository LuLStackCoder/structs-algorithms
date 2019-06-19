/*
 * File: divide.c
 * Created Date: Monday 22nd October 2018
 * Author: LulStackCoder (lulstackdeveloper@gmail.com)
 * -----
 * Last Modified:
 * Monday, 22nd October 2018 09:30:12 pm
 * Modified By: LulStackCoder
 * -----
 */

#include "num.h"

divmod divide(int a, int b)
{
	divmod res;
	if (a == 0)
	{
		res.div = 0;
		res.mod = 0;
		return res;
	}
	res = divide(a >> 1, b);
	res.div <<= 1;
	res.mod <<= 1;
	if (a & 1)
		res.mod += 1;
	if (res.mod >= b)
	{
		res.mod -= b;
		res.div += 1;
	}
	return res;
}
