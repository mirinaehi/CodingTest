#include <stdio.h>

int main(void)
{
	// �������迭 �ƹ��ų� ������ ������ ���Ҹ� ����ϱ�
	// ����

	// ���ڿ��� ����(5�� ��������)�� ���Ͻÿ�
	char str[30] = "Hello";
	int length = 0;		// ���ڿ��� ����

	// ���ڷ� �Ǻ��� ��� length�� ī����(1�� ����)
	for (int i = 0; str[i] != '\0'; i++)
	{
			length++;
	}
	printf("���̴� %d", length);
	
	return 0;

}