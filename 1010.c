#include <stdio.h>
#include <windows.h>
#include <string.h>
int main()
{
	char arr1[] = "一二三四五六七八";
	char arr2[] = "########";
	int left = 0;
	int right = strlen(arr1) - 1;
	while (left <= right) {
		arr2[left] = arr1[left];
		printf("%s\n", arr2);
		Sleep(1000);
		left++;
		right--;

	}
	printf("%s\n", arr1);
	return 0;
}