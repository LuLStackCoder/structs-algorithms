/*
 * File: num.h
 * Created Date: Monday 22nd October 2018
 * Author: LulStackCoder (lulstackdeveloper@gmail.com)
 * -----
 * Last Modified:
 * Modified By: LulStackCoder
 * -----
 */

#ifndef MOD_ARITHM_H
# define MOD_ARITHM_H

#include <stdio.h>

typedef struct
{
	int div;
	int mod;
}				divmod;

int bin_pow(int a, int n);
divmod divide(int a, int b);
int mult(int a, int b);

#endif