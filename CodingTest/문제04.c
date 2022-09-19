#include <stdio.h>
#include <stdbool.h>
#include <stdlib.h>

int* func_a(int arr[], int arr_len) {
    // 1000까지의 숫자를 담을 수 있는 배열을 생성
    int* counter = (int*)malloc(sizeof(int) * 1001);
    
    // 각각의 갯수를 0으로 초기화
    for (int i = 0; i < 1001; i++)
        counter[i] = 0;


    for (int i = 0; i < arr_len; i++)
        counter[arr[i]]++;
    return counter;
}

// 최대값
int func_b(int arr[], int arr_len) {
    int ret = 0;
    for (int i = 0; i < arr_len; i++) {
        if (ret < arr[i])
            ret = arr[i];
    }
    return ret;
}

// 최소값
int func_c(int arr[], int arr_len) {
    const int INF = 1001;
    int ret = INF;
    for (int i = 0; i < arr_len; i++) {
        if (arr[i] != 0 && ret > arr[i])
            ret = arr[i];
    }
    return ret;
}

// arr : 자연수가 들어있는 배열
int solution(int arr[], int arr_len) {
    // 배열에 들어있는 각 자연수의 갯수를 셉니다
    int* counter = func_a(arr, arr_len);
    
    // 가장 많이 등장하는 수의 갯수를 구합니다
    int max_cnt = func_b(counter, arr_len);

    // 가정 적게 등장하는 수의 갯수를 구합니다
    int min_cnt = func_c(counter, arr_len);

    // 가장 많이 등장하는 수가 가장 적게 등장하는 수보다 몇 배 많은지 구합니다
    return max_cnt / min_cnt;
}

int main() {
    int arr[10] = { 1, 2, 3, 3, 1, 3, 3, 2, 3, 2 };
    int arr_len = 10;
    int ret = solution(arr, arr_len);

    printf("solution 함수의 반환 값은 %d 입니다.\n", ret);
}