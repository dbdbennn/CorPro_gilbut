#include <stdio.h>
#include <stdlib.h>

// k��°�� ���� ��

int sort(int* arr, int size) {
	for (int i = 0; i < size - 1; i++) {
		for (int j = i + 1; j < size; j++) {
			if (arr[i] > arr[j] && arr[j] != 0) {
				int tmp = arr[j];
				arr[j] = arr[i];
				arr[i] = tmp;
			}
		}
	}
}

int solution(int arr[][4], int n, int k) {
	int answer = 0;
	int ans_arr[81] = { 0, };
	int idx = 0;

	for (int i = 0; i < n; i++) {
		for (int j = 0; j < 4; j++) {
			ans_arr[idx++] = arr[i][j];
		}
	}

	sort(ans_arr, 81);
	answer = ans_arr[k - 1];
	return answer;
}

void main() {
	int ans;
	int k = 3; // �� ��°�� ���� ��
	int num[][4] = { {5,12,4,31}, {24,13,11,2},
	{43,44,19,26}, {33,65,20,21} };
	// num�� �� ����
	int num_row_size = sizeof(num) / sizeof(num[0]);

	ans = solution(num, num_row_size, k); // k��°�� ���� ��
	printf("%d��°�� ���� �� : %d", k, ans); // 5
}