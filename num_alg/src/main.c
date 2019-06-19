/*
 * File: main.c
 * Created Date: Monday 22nd October 2018
 * Author: LulStackCoder (lulstackdeveloper@gmail.com)
 * -----
 * Last Modified:
 * Friday, 9th November 2018 09:08:31 pm
 * Wednesday, 24th October 2018 12:57:38 am
 * Tuesday, 23rd October 2018 09:40:00 pm
 * Modified By: LulStackCoder
 * -----
 */

#include "num.h"

int main(void)
{
	int x, y;
	divmod a;
	char sign;
    char e;
	while (1)
	{
		printf("Input expression(x # y):\n");
		scanf("%d %c %d", &x, &sign, &y);
		if (x <= 0 && y <= 0)
		{
			printf("Only natural numbers");
			continue;
		}
		switch (sign)
	 	{
			case '+':
				printf("add: %d\n", x + y);
				break;
			case '-':
				printf("sub: %d\n", x - y);
				break;
			case '*':
				printf("mult: %d\n", mult(x, y));
				break;
			case '^':
				printf("pow: %d\n", bin_pow(x, y));
				break;
			case '/':
				if (y == 0)
				{
					printf("Can't divide by zero");
					break;
				}
				a = divide(x, y);
				printf("div: %d mod: %d\n", a.div, a.mod);
				break;
			default:
				return 0;
		}
        printf("continue?(y/n):\n");
        getchar();
        scanf("%c", &e);
        getchar();
        if (e == 'n')
            return 0;
	}
	return 0;
}
