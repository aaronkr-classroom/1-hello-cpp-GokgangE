#include <stdio.h>

int main() {
    // 3���� �л��� ������ �����ϴ� 2���� �迭
    double score[3][5] = {
        {80.0, 90.0, 88.0, 0.0, 0.0},
        {65.0, 92.0, 78.0, 0.0, 0.0},
        {100.0, 97.0, 92.0, 0.0, 0.0}
    };

    // �հ� �� ��� ���
    for (int k = 0; k < 3; k++) {
        score[k][3] = 0; // �հ� �ʱ�ȭ
        for (int i = 0; i < 3; i++) {
            score[k][3] += score[k][i]; // �հ� ���
        }
        score[k][4] = score[k][3] / 3.0; // ��� ���
    }

    // ��� ���
    printf("����\t����\t����\t�հ�\t���\n");
    for (int k = 0; k < 3; k++) {
        for (int i = 0; i < 5; i++) {
            printf("%.1f\t", score[k][i]);
        }
        printf("\n");
    }

    return 0;
}
}