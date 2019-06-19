/*
* @Author: LulStackCoder
* @Date:   2018-10-19 13:33:34
* @Last Modified by:   LulStackCoder
* @Last Modified time: 2018-10-21 17:50:19
*/

void mult_matr(int a[2][2], int b[2][2])
{
	int buff[2][2];
	buff[0][0] = a[0][0] * b[0][0] + a[0][1] * b[1][0];
	buff[0][1] = a[0][0] * b[0][1] + a[0][1] * b[1][1];
	buff[1][0] = a[1][0] * b[0][0] + a[1][1] * b[1][0];
	buff[1][1] = a[1][0] * b[0][1] + a[1][1] * b[1][1];
	a[0][0] = buff[0][0];
	a[0][1] = buff[0][1];
	a[1][0] = buff[1][0];
	a[1][1] = buff[1][1];
}

int log_fib(int n)
{
	int res[2][2] = {{1, 0}, {0, 1}};
	int a[2][2] = {{0, 1}, {1, 1}};
	while (n)
	{
		if (n & 1)
			mult_matr(res, a);
		mult_matr(a, a);
		n >>= 1;
	}
	return res[0][1];
}
