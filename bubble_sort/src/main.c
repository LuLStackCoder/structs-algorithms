/*
* @Author: LulStackCoder
* @Date:   2018-09-16 23:41:44
* @Last Modified by:   LulStackCoder
* @Last Modified time: 2018-09-19 18:39:49
*/

#include "bubble_sort.h"

void	std_read(void)
{
	int		count;
	int		*array;

	count = 0;
	array = malloc(sizeof(int));
	while ((scanf("%d", &array[count]) == 1))
	{
		count++;
		array = realloc(array, sizeof(int) * (count + 1));
		if (getchar() == '\n')
			break;
	}
	printf("\n");
	bubble_sort(array, count);
	for (int i = 0; i < count; ++i)
	{
		printf("%d ", array[i]);
	}
	printf("\n");
}

void	read_file(char *file)
{
	int		s;
	int		k;
	int		*array;
	FILE	*fp;
	clock_t	time;

	fp = fopen(file, "r+");
	while (fscanf(fp, "%d", &s) != EOF)
	{
		if (!fp)
			break;
		k++;
	}
	rewind(fp);
	array = malloc(k * sizeof(int));
	for (int i = 0; i < k; ++i)
		fscanf(fp, "%d", &array[i]);
	printf("END READ\n");
	fclose(fp);
	time = clock();
	bubble_sort(array, k);
	time = clock() - time;
	printf("%d ", array[0]);
	printf("%d ", array[k - 1]);
	printf("\ntime: %f\n", (double)time/CLOCKS_PER_SEC);
}

int		main(int argc, char *argv[])
{
	if (argc == 1)
		std_read();
	else
		read_file(argv[1]);
	return 0;
}