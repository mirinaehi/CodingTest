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
	printf("%c", mjyeol[0]);	// 'H'
	printf("%c", mjyeol[1]);	// 'e'
	printf("%c", mjyeol[2]);	// 'l'
	printf("%c", mjyeol[3]);	// 'l'
	printf("%c", mjyeol[4]);	// 'o'
	printf("%c", mjyeol[5]);	// ' '
	printf("%c", mjyeol[6]);	// 'W'
	printf("%c", mjyeol[7]);	// 'o'
	printf("%c", mjyeol[8]);	// 'r'
	printf("%c", mjyeol[9]);	// 'l'
	printf("%c", mjyeol[10]);	// 'd'
	printf("%c", mjyeol[11]);	// '\0'
	
}