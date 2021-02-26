#include <stdio.h>
#include <stdlib.h>

void bubble(int arr[], size_t size)
{
	int i = 0;
	int temp;
	int again = 1;
	int iter = size - 1;

	do {
		again = 0;
		i = 0;
		for(; i < iter; ++i)
			{
				if (arr[i + 1] < arr[i])
					{
						again = 1;
						temp = arr[i];
						arr[i] = arr[i + 1];
						arr[i + 1] = temp;
					}
			}
		--iter;
	} while (again);
}

int main(void)
{
	int a[] = {5, 1, 4, 2, 8, 0, -11};

	bubble(a, sizeof a / sizeof (int));

	unsigned i = 0;
	for(; i < (sizeof a / sizeof (int)); ++i)
		{
			printf("%d\n", a[i]);
		}
	exit(0);
}
