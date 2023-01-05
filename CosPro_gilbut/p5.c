#include <stdio.h>

int solution(int stones[], int stones_len) {
	int cnt = 0;
	int current = 0;
	while (current < stones_len) {
		current += stones[current];
		cnt++;
	}
	return cnt;
}

int main() {
	int stones[] = {2,5,3,2,1,4,5};
	int answer = solution(stones, 7);

	printf("%d", answer);
}