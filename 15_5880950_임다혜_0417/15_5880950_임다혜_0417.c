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
	printf("�̸��� �Է��ϼ��� : ");
	scanf_s("%s", table[count].name, (unsigned)_countof(table[count].name));
	printf("��ȭ��ȣ�� �Է��ϼ��� : ");
	scanf_s("%s", table[count].tel, (unsigned)_countof(table[count].tel));
	count++;
	printf("����ó�� �߰��Ǿ����ϴ�.\n");
}

void TelDele() {
	char name[20];
	int found = 0;
	printf("������ �̸��� �Է��ϼ��� : ");
	scanf_s("%s", name, (unsigned)_countof(name));
	for (int i = 0; i < count; i++) {
		if (strcmp(table[i].name, name) == 0) {
			for (int j = i; j < count - 1; j++) {
				table[j] = table[j + 1];
			}
			count--;
			found = 1;
			printf("�����Ǿ����ϴ�.\n");
			break;
		}
	}
	if (!found) {
		printf("�ش� �̸��� ����ó�� ã�� �� �����ϴ�.\n");
	}
}

void TelSech() {
	char name[20];
	int found = 0;
	printf("�˻��� �̸��� �Է��ϼ��� : ");
	scanf_s("%s", name, (unsigned)_countof(name));
	for (int i = 0; i < count; i++) {
		if (strcmp(table[i].name, name) == 0) {
			printf("�̸� : %s , ��ȭ��ȣ : %s\n", table[i].name, table[i].tel);
			found = 1;
			break;
		}
	}
	if (!found) {
		printf("�ش� �̸��� ����ó�� ã�� �� �����ϴ�.\n");
	}
}

void TelPrint() {
	printf("----- ��ü ����ó -----\n");
	for (int i = 0; i < count; i++) {
		printf("[%d] �̸� : %s , ��ȭ��ȣ : %s\n", i + 1, table[i].name, table[i].tel);
	}
	printf("-------------------------\n");
}

int main() {
	int n;
	do {
		printf("===== ��ȭ��ȣ�� �޴� =====\n");
		printf("1. ����ó �߰�\n");
		printf("2. ����ó ����\n");
		printf("3. ����ó �˻�\n");
		printf("4. ��ü ����ó ���\n");
		printf("0. ����\n");
		printf("�޴��� �����ϼ��� : ");
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
			printf("�ùٸ� �޴��� �����ϼ���.\n");
		}
	} while (n != 0);
	return 0;
}
