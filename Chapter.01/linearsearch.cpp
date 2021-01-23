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
		printf("%d¿¡ À§Ä¡ÇÔ", i + i);
	else
		printf("Á¸ÀçÇÏÁö ¾ÊÀ½");
	
	return 0;
}
