#include <stdio.h>
#include <stdbool.h>
#include <stdlib.h>

int solution(int attack, int recovery, int hp) {
    int count = 0;
        
    while (true) {
        // count 1증가 (공격 횟수)
        // 몬스터를 때린다 (hp 30감소)
        // 몬스터가 살아있으면
            // hp회복 (10)
        count += ;
        hp -= ;
        if (hp <= 0)
            ;
        hp += ;
    }
    return count;
}

int main() {
    int attack = 30;
    int recovery = 10;
    int hp = 60;
    int ret = solution(attack, recovery, hp);

    printf("solution 함수의 반환 값은 %d 입니다.\n", ret);
}