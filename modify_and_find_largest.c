#include <stdio.h>

int main()
{
	int a = 10, b = 25, c = 5, d = 40;
	int *ptrs[4] = {&a, &b, &c, &d};
	int size = 4;
	int i = 0;

	printf("Original values: a= %d b= %d c= %d d= %d\n\n", a, b, c, d);
	printf("Values through pointers:\n");

	while (i < size)
	{
		printf("%d ", *ptrs[i]);
		i++;
	}
	printf("\n");
	printf("After adding 5 to each value:\n");

	i = 0;
	while (i < size)
	{
		*ptrs[i] += 5;
		printf("%d ", *ptrs[i]);
		i++;
	}
	printf("\n");

	i = 0;
	int largest = 0;
	while (i < size)
	{
		if (*ptrs[i] > largest)
			largest = i;
		i++;
	}
	printf("ptrs[%d] points to largest value: %d\n", largest, *ptrs[largest]);
	printf("\nOriginal variables after modification:\n");
	printf("a=%d, b=%d, c=%d, d=%d\n", a, b, c, d);

}
