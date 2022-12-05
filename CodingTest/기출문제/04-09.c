#include <stdio.h>
#include <stdbool.h>
#include <stdlib.h>

int solution(int height[][4], int height_len) {
    int count = 0;
    for (int i = 0; i < 4; i++)
    {
        for (int j = 0; j < 4; j++)
        {
            // 왼쪽의 원소가 존재한다면
              // 왼쪽의 원소가 더 높은지역이 아니라면 continue
            if (j >= 1)
                if (!(height[i][j] < height[i][j - 1]))
                    continue;

            // 오른쪽의 원소가 존재한다면
              // 오른쪽의 원소가 더 높은지역이 아니라면 continue
            if (j <= 2)
                if (!(height[i][j] < height[i][j + 1]))
                    continue;

            // 위쪽의 원소가 존재한다면
              // 위쪽의 원소가 더 높은지역이 아니라면 continue
            if (i >= 1)
                if (!(height[i][j] < height[i-1][j]))
                    continue;

            // 아래쪽의 원소가 존재한다면
              // 아래쪽의 원소가 더 높은지역이 아니라면 continue
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

    printf("solution 함수의 반환 값은 %d 입니다.\n", ret);
}