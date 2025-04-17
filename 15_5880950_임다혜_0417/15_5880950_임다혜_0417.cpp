#include <stdio.h>
#include <stdlib.h>
#include<string.h>

struct data {
	char name[20];
	char tel[20];

};

void TelAdd(){
	struct data table[50];
	printf("이름을 입력하세요 : ");
	scanf_s("%s\n",table[i].name,sizeof(table[i].name));
	printf("전화번호를 입력하세요 : ");
	scanf_s("%s\n", table[i].tel, sizeof(table[i].tel));
	printf("연락처가 추가되었습니다.\n");
}

void TelDele(){
	printf("삭제할 이름을 입력하세요 : ");
	//삭제하기
	printf("삭제되었습니다.\n");
}

void TelSech() {

}

void TelPrint() {
	printf("----- 전체 연락처 -----\n");
	for (int i = 0;; i++) {
		printf("[" + i + "] " + "이름 : " + tabel[i].name + ", 전화번호 : " + tabel[i].tel);
		printf("\n");
	}
	printf("-------------------------\n");
}


main() {
	int n;
	do {
		printf("===== 전화번호부 메뉴 =====\n");
		printf("1. 연락처 추가\n");
		printf("2. 연락처 삭제\n");
		printf("3. 연락처 검색\n");
		printf("4. 전체 연락처 출력\n");
		printf("메뉴를 선택하세요 : ");
		scanf_s("%d", &n);
		if (n == 1) {

		}
		else if (n == 2) {

		}
		else if (n == 3) {

		}
		else if (n == 4) {

		}
	} while (n!=0);
}