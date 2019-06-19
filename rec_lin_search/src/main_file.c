/*
* @Author: LulStackCoder
* @Date:   2018-09-16 13:17:42
* @Last Modified by:   LulStackCoder
* @Last Modified time: 2018-09-16 15:08:21
*/

#include "ln_s.h"

int		main(int argc, char *argv[])
{
	int						i;
	unsigned long long		*array;
	unsigned long long		x;
	int						res;
	int						k;
	int						s;
	clock_t					time;

	k = 0;
	if (argc == 2)
	{
		FILE *fp = fopen(argv[1],"r+");;
		while ((fscanf(fp, "%d",&s)!=EOF))
		{
			if(!fp) 
				break;
			k+=1;
		}
		array = malloc(k * sizeof(unsigned long long));
		rewind(fp);
		for(i=0; i<k; i++)
			fscanf(fp, "%llu",&array[i]);
		x = array[k - 10];
		fclose(fp);
		time = clock();
		printf("\nInput x: %lld\n", x);
		res = rec_lin_search(array, k, 0, x);
		if (res == -1)
			printf("\n%lld Not found\n", x);
		else
			printf("\nIndex of %lld: %d\n", x, res);
		time = clock() - time;
		printf("%f", (double)time/CLOCKS_PER_SEC);
	}
	return 0;
}
