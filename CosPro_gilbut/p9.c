#include <stdio.h>

// 거스름돈 계산

int solution(int price[], int price_len, int money) {
	int answer = 0;
	for (int i = 0; i < price_len; i++) {
		answer += price[i];
	}

	answer = (answer > money) ? -1 : money - answer;
	return answer;
}

int main() {
	int price[] = { 2100, 3200, 2100, 800 };
	int answer = solution(price, 4, 10000);
	printf("%d", answer);
}