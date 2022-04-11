#include <stdio.h>

int main(void)
{
	int arr[3][4] = { 
		{1, 2, 3, 4},	//[0][0]:1, [0][1]:2, [0][2]:3, [0][3]:4
		{5, 6, 7, 8},	//[1][0]:5, [1][1]:6, [1][2]:7, [1][3]:8
		{9, 10, 11, 12} //[2][0],9, [2][1]:10,[2][2]:11,[2][3]:12
	};

	//for (int i = 0; i < sizeof(arr)/sizeof(arr[0]); i++)
	//{
	//	printf("%d ", arr[i]);
	//}

	for (int i = 0; i < 3; i++)
	{
		for (int j = 0; j < 4; j++)
		{
			printf("%d ", arr[i][j]);
		}
		printf("\n");
	}
}