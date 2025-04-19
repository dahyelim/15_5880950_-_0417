#include <stdio.h>
#include <stdlib.h>
#include <string.h>

struct data {
	char name[20];
	char tel[20];
};

struct data table[50];
int count = 0;

void TelAdd() {
	printf("이름을 입력하세요 : ");
	scanf_s("%s", table[count].name, (unsigned)_countof(table[count].name));
	printf("전화번호를 입력하세요 : ");
	scanf_s("%s", table[count].tel, (unsigned)_countof(table[count].tel));
	count++;
	printf("연락처가 추가되었습니다.\n");
}

void TelDele() {
	char name[20];
	int found = 0;
	printf("삭제할 이름을 입력하세요 : ");
	scanf_s("%s", name, (unsigned)_countof(name));
	for (int i = 0; i < count; i++) {
		if (strcmp(table[i].name, name) == 0) {
			for (int j = i; j < count - 1; j++) {
				table[j] = table[j + 1];
			}
			count--;
			found = 1;
			printf("삭제되었습니다.\n");
			break;
		}
	}
	if (!found) {
		printf("해당 이름의 연락처를 찾을 수 없습니다.\n");
	}
}

void TelSech() {
	char name[20];
	int found = 0;
	printf("검색할 이름을 입력하세요 : ");
	scanf_s("%s", name, (unsigned)_countof(name));
	for (int i = 0; i < count; i++) {
		if (strcmp(table[i].name, name) == 0) {
			printf("이름 : %s , 전화번호 : %s\n", table[i].name, table[i].tel);
			found = 1;
			break;
		}
	}
	if (!found) {
		printf("해당 이름의 연락처를 찾을 수 없습니다.\n");
	}
}

void TelPrint() {
	printf("----- 전체 연락처 -----\n");
	for (int i = 0; i < count; i++) {
		printf("[%d] 이름 : %s , 전화번호 : %s\n", i + 1, table[i].name, table[i].tel);
	}
	printf("-------------------------\n");
}

int main() {
	int n;
	do {
		printf("===== 전화번호부 메뉴 =====\n");
		printf("1. 연락처 추가\n");
		printf("2. 연락처 삭제\n");
		printf("3. 연락처 검색\n");
		printf("4. 전체 연락처 출력\n");
		printf("0. 종료\n");
		printf("메뉴를 선택하세요 : ");
		scanf_s("%d", &n);

		if (n == 1) {
			TelAdd();
		}
		else if (n == 2) {
			TelDele();
		}
		else if (n == 3) {
			TelSech();
		}
		else if (n == 4) {
			TelPrint();
		}
		else if (n != 0) {
			printf("올바른 메뉴를 선택하세요.\n");
		}
	} while (n != 0);
	return 0;
}
