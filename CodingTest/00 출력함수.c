#include <stdio.h>
#include <string.h>

int main(void)
{
	int jungsu = 1;
	char munja = 'a';
	double sosu = 3.14;
	float sosu1 = 0.001592f;
	// ���ڴ� ���� �����ؼ� 11��
	// �迭�� ���̴� 11+1(�ι���) = 12
	char mjyeol[] = "Hello World";	// ���ڰ��� 11��

	printf("���� %d, ���� %c, ���� %lf, �÷� %f\n"
		, jungsu, munja, sosu, sosu1);
	
	//printf("%s\n", mjyeol);
	// mjyeol�� %c�� ����
	// [0]:'H', [1]:'e', [2]:'l', [3]:'l', [4]:'o', [5]:' '
	// [6]:'W', [7]:'o', [8]:'r', [9]:'l', [10]:'d', [11]:'\0'
	for (int i = 0; i < strlen(mjyeol); i++)
	{
		printf("%c", mjyeol[i]);
	}
	
	
}