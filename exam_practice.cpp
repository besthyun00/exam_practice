#include <cstdio>

int ArrayMax(int score[], int n) {
	int tmp = score[0];
	for (int i = 1;i < n;i++) {
		if (score[i] > tmp) {
			tmp = score[i];
		}
	}
	return tmp;
}

int main(void) {
	int score[6] = { 27,35,67,45,34,65 };
	int bestScore = ArrayMax(score, 6);
	printf("�ְ� ������ %d�� �Դϴ�.", bestScore);
}