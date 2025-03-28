#include <stdio.h>

int main() {
    // 3명의 학생의 성적을 저장하는 2차원 배열
    double score[3][5] = {
        {80.0, 90.0, 88.0, 0.0, 0.0},
        {65.0, 92.0, 78.0, 0.0, 0.0},
        {100.0, 97.0, 92.0, 0.0, 0.0}
    };

    // 합계 및 평균 계산
    for (int k = 0; k < 3; k++) {
        score[k][3] = 0; // 합계 초기화
        for (int i = 0; i < 3; i++) {
            score[k][3] += score[k][i]; // 합계 계산
        }
        score[k][4] = score[k][3] / 3.0; // 평균 계산
    }

    // 결과 출력
    printf("국어\t영어\t수학\t합계\t평균\n");
    for (int k = 0; k < 3; k++) {
        for (int i = 0; i < 5; i++) {
            printf("%.1f\t", score[k][i]);
        }
        printf("\n");
    }

    return 0;
}
}