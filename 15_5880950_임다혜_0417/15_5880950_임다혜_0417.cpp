#include <stdio.h>
#include <stdlib.h>
#include<string.h>

struct data {
	char name[20];
	char tel[20];

};

void TelAdd(){
	struct data table[50];
	printf("�̸��� �Է��ϼ��� : ");
	scanf_s("%s\n",table[i].name,sizeof(table[i].name));
	printf("��ȭ��ȣ�� �Է��ϼ��� : ");
	scanf_s("%s\n", table[i].tel, sizeof(table[i].tel));
	printf("����ó�� �߰��Ǿ����ϴ�.\n");
}

void TelDele(){
	printf("������ �̸��� �Է��ϼ��� : ");
	//�����ϱ�
	printf("�����Ǿ����ϴ�.\n");
}

void TelSech() {

}

void TelPrint() {
	printf("----- ��ü ����ó -----\n");
	for (int i = 0;; i++) {
		printf("[" + i + "] " + "�̸� : " + tabel[i].name + ", ��ȭ��ȣ : " + tabel[i].tel);
		printf("\n");
	}
	printf("-------------------------\n");
}


main() {
	int n;
	do {
		printf("===== ��ȭ��ȣ�� �޴� =====\n");
		printf("1. ����ó �߰�\n");
		printf("2. ����ó ����\n");
		printf("3. ����ó �˻�\n");
		printf("4. ��ü ����ó ���\n");
		printf("�޴��� �����ϼ��� : ");
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