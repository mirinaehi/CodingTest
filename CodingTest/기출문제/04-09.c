#include <stdio.h>
#include <stdbool.h>
#include <stdlib.h>

int solution(int height[][4], int height_len) {
    int count = 0;
    for (int i = 0; i < 4; i++)
    {
        for (int j = 0; j < 4; j++)
        {
            // ������ ���Ұ� �����Ѵٸ�
              // ������ ���Ұ� �� ���������� �ƴ϶�� continue
            if (j >= 1)
                if (!(height[i][j] < height[i][j - 1]))
                    continue;

            // �������� ���Ұ� �����Ѵٸ�
              // �������� ���Ұ� �� ���������� �ƴ϶�� continue
            if (j <= 2)
                if (!(height[i][j] < height[i][j + 1]))
                    continue;

            // ������ ���Ұ� �����Ѵٸ�
              // ������ ���Ұ� �� ���������� �ƴ϶�� continue
            if (i >= 1)
                if (!(height[i][j] < height[i-1][j]))
                    continue;

            // �Ʒ����� ���Ұ� �����Ѵٸ�
              // �Ʒ����� ���Ұ� �� ���������� �ƴ϶�� continue
            if (i <= 2)
                if (!(height[i][j] < height[i + 1][j]))
                    continue;
            count++;
        }
    }
    return count;
}


int main() {
    int height[4][4] = { {3, 6, 2, 8}, {7, 3, 4, 2}, {8, 6, 7, 3}, {5, 3, 2, 9} };
    int height_len = 4;
    int ret = solution(height, height_len = 4);

    printf("solution �Լ��� ��ȯ ���� %d �Դϴ�.\n", ret);
}