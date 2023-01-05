#include <stdio.h>

// 키가 k보다 작은 사람은?

int solution(int height[], int height_len, int k) {
	int answer = 0;
	for (int i = 0; i < height_len; i++) {
		if (height[i] < k) {
			answer++;
		}
	}
	return answer;
}

int main() {
	int height[] = { 165, 170, 175, 180, 184 };
	int answer = solution(height, 5, 175);
	printf("%d", answer);
}