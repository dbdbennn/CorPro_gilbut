#include <stdio.h>

// m부터 n까지의 합계

int func_a(int k) {
	int sum = 0;
	for (int i = 0; i <= k; i++) {
		sum += i;
	}
	return sum;
}

int solution(int n, int m) {
	int sum_to_m = func_a(m);
	int sum_to_n = func_a(n - 1);
	return sum_to_m - sum_to_n;
}

int main() {
	int m = 10;
	int n = 5;
	int answer = solution(n, m);
	printf("%d", answer);
}