#include <stdio.h>
#include <malloc.h>

// 최댓값과 두 번째로 큰 값의 차이 값

int* func_a(int arr[], int arr_size, int num) {
	int* ret = (int*)malloc(sizeof(int) * arr_size - 1);
	int idx = 0;
	for (int i = 0; i < arr_size; i++) {
		if (arr[i] != num) {
			ret[idx++] = arr[i];
		}
	}
	return ret;
}

int func_b(int a, int b) {
	if (a >= b) {
		return a - b;
	}
	return b - a;
}

int func_c(int arr[], int arr_size) {
	int ret = -1;
	for (int i = 0; i < arr_size; i++) {
		if (ret < arr[i]) {
			ret = arr[i];
		}
	}
	return ret;
}

int solution(int visitor[], int visitor_len) {
	int max_first = func_c(visitor, visitor_len);
	int* visitor_moved = func_a(visitor, visitor_len, max_first);
	int max_second = func_c(visitor_moved, visitor_len - 1);
	int answer = func_b(max_first, max_second);
	return answer;
}

int main() {
	int visitor[] = { 5,7,2,9,3 };
	int answer = solution(visitor, 5);
	printf("%d", answer);
}