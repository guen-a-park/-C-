#include <stdio.h>

int LSearch(int ar[], int len, int target)
{
	int i;
	for (i = 0; i < len; i++)
	{
		if (ar[i] == target)
			return i;
	}
	return -1;
}
int main(void)
{
	int arr[] = { 2,5,6,8,9 };
	int idx;
	int result;

	result = LSearch(arr, sizeof(arr) / sizeof(int), 9);

	if (result != -1)
		printf("%d에 위치함", i + i);
	else
		printf("존재하지 않음");
	
	return 0;
}