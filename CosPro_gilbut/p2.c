#include <stdio.h>

// �ִ񰪰� �ּڰ��� �� �հ踦 ����

int func_a(int s[], int arr_size) {
	int ret = 0;
	// �ִ� ã��
	for (int i = 0; i < arr_size; i++) {
		if (s[i] > ret) {
			ret = s[i];
		}
	}
	return ret;
}

int func_b(int s[], int arr_size) {
	int ret = 0;
	// �հ� ����
	for (int i = 0; i < arr_size; i++) {
		ret += s[i];
	}
	return ret;
}

int func_c(int s[], int arr_size) {
	int ret = 101;
	// �ּڰ� ã��
	for (int i = 0; i < arr_size; i++) {
		if (s[i] < ret) {
			ret = s[i];
		}
	}
	return ret;
}

int solution(int scores[], int scores_len) {
	int sum = func_b(scores, scores_len);
	int max_scores = func_a(scores, scores_len);
	int min_scores = func_c(scores, scores_len);
	return sum - max_scores - min_scores;
}

int main() {
	int scores[] = { 50,35,78,91,85 };
	int answer = solution(scores, 5);
	printf("%d", answer);
}