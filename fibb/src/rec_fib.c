/*
* @Author: LulStackCoder
* @Date:   2018-10-19 13:31:05
* @Last Modified by:   LulStackCoder
* @Last Modified time: 2018-10-19 21:11:08
*/

int rec_fib(int n)
{
	if (n == 1)
		return 1;
	else if (n == 0)
		return 0;
	else return rec_fib(n - 1) + rec_fib(n - 2);
}
