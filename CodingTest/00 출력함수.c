#include <stdio.h>


int main(void)
{
	int jungsu = 1;
	char munja = 'a';
	double sosu = 3.14;
	float sosu1 = 0.001592f;
	// ���ڴ� ���� �����ؼ� 11��
	// �迭�� ���̴� 11+1(�ι���) = 12
	char mjyeol[] = "Hello World";

	printf("���� %d, ���� %c, ���� %lf, �÷� %f\n"
		, jungsu, munja, sosu, sosu1);
	
	//printf("%s\n", mjyeol);
	// mjyeol�� %c�� ����
	for (int i = 0; i < 12; i++)
	{
		printf("%c", mjyeol[i]);
	}
	
	
}