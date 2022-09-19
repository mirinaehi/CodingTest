#include <stdio.h>
#include <stdlib.h>
#include <time.h>
#define ITEMS 18


void shuffle(int arr[], int times);
void swap(int* a, int* b);

int main(void)
{
	srand(time(NULL));
	int arr1[ITEMS];
	int arr2[ITEMS];

	for (int i = 0; i < ITEMS; i++)
	{
		arr1[i] = i + 1;
		arr2[i] = i + 1;
	}
	shuffle(arr1, 100);
	shuffle(arr2, 100);

	printf("가 %d %d \n", arr1[0], arr2[0]);
	printf("나 %d %d \n", arr1[1], arr2[1]);
	printf("다 %d %d \n", arr1[2], arr2[2]);
	printf("라 %d %d \n", arr1[3], arr2[3]);
	printf("마 %d %d \n", arr1[4], arr2[4]);
	printf("바 %d %d \n", arr1[5], arr2[5]);
	printf("사 %d %d \n", arr1[6], arr2[6]);
	printf("아 %d %d \n", arr1[7], arr2[7]);
	printf("자 %d %d \n", arr1[8], arr2[8]);
	printf("차 %d %d \n", arr1[9], arr2[9]);
	printf("카 %d %d \n", arr1[10], arr2[10]);
	printf("타 %d %d \n", arr1[11], arr2[11]);
		
	return 0;
}

void shuffle(int arr[], int times)
{
	
	for (int i = 0; i < times; i++)
	{
		int a = rand() % 18;
		int b = rand() % 18;
		swap(&arr[a], &arr[b]);
	}
}

void swap(int* a, int* b)
{
	int temp = *a;
	*a = *b;
	*b = temp;
}
