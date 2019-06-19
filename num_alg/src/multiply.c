/*
 * File: multiply.c
 * Created Date: Sunday 21st October 2018
 * Author: LulStackCoder (lulstackdeveloper@gmail.com)
 * -----
 * Last Modified:
 * Monday, 22nd October 2018 09:30:06 pm
 * Modified By: LulStackCoder
 * -----
 */

int mult(int a, int b)
{
    int c;
    if (a == 0 || b == 0)
        return 0;
    c = mult(a, b >> 1);
    if (b & 1)
        return (c << 1) + a;
    else
        return c << 1;
}
