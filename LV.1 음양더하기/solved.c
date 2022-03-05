#include <stdio.h>
#include <stdbool.h>
#include <stdlib.h>
#include <unistd.h>

// absolutes_len은 배열 absolutes의 길이입니다.
// signs_len은 배열 signs의 길이입니다.
int solution(int absolutes[], size_t absolutes_len, bool signs[], size_t signs_len) {
    int answer = 0;
    int i = -1;
    int j = 0;
    int k = 0;
    while (++i < signs_len) {
        j = absolutes[i];
        if (signs[i] == false)
            j = j * -1;
        k = k + j;
    }
    return k;
}