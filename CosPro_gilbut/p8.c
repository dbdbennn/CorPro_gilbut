#include <stdio.h>

// j나 k가 들어간 이름이 몇개 인가?

int solution(char* name_list[], int name_list_len) {
	int answer = 0;
	for (int i = 0; i < name_list_len; i++) {
		for (int j = 0; j < name_list[i][j] != 0; j++) {
			if (name_list[i][j] == 'j' || name_list[i][j] == 'k') {
				answer++;
				break;
			}
		}
	}
	return answer;
}

int main() {
	char* names[] = { "james", "luke", "oliver", "jack" };
	int ans = solution(names, 4);
	printf("%d", ans); // 3
}