#include <stdio.h>

// �迭 ����� �ִ밪�� �׿� �ش��ϴ� idx���� ���Ͻÿ�
void getMax(int* arr, int length)
{
	int temp = -1;	// �񱳴��
	int idx = 999;	// �ε��� ��
	
	for (int i = 0; i < length; i++)
	{
		if (arr[i] > temp)
		{
			temp = arr[i];
			idx = i;
		}
	}
	printf("�ִ밪��:%d �ε��� ����:%d \n", temp, idx);
}

void getMin(int* arr, int length)
{
	// �Լ� ���� ���� �ּҰ��� �� idx�� ���غ���
	int temp = 999; // �񱳴��
	int idx = 999;	// �ε��� ��

	for (int i = 0; i < length; i++)
	{
		if (arr[i] < temp)
		{
			temp = arr[i];
			idx = i;
		}
	}
	printf("�ּҰ���:%d �ε��� ����:%d \n", temp, idx);
}

int main(void)
{
	// �ִ밪�� 14(arr[9])
	// �ּҰ��� 1(arr[2])
	int arr1[10] = { 8, 5, 1, 6, 4, 9, 10, 7, 11, 14 };
	getMax(arr1, 10);
	getMin(arr1, 10);
	
	return 0;

}