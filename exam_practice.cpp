#include <cstdio>
#include <cstdlib>

int factorial(int n) {
	for (int i = 0;i < n;i++) {
		if (n == 1) {
			return 1;
		}
		else {
			return n * factorial(n - 1);
		}
	}
}

int main(void) {
	int number;
	printf("숫자를 입력하시오: ");
	scanf_s("%d", &number);
	int fact_number = factorial(number);
	printf("n!=%d", fact_number);
}