#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>

int main(void) {
	FILE* fp = NULL;
	errno_t err = fopen_s(&fp, "output.txt", "w"); // w(write) : ���� ��� , r(read) : �б� ���
	if (err != 0) {
		printf("���� ���⿡ �����߽��ϴ�.\n");
	}
	else {
		printf("���� ���⿡ �����߽��ϴ�.\n");
	}
	fputc('H', fp);
	fputc('E', fp);
	fputc('L', fp);
	fputc('L', fp);
	fputc('O', fp);
	fclose(fp);
	return 0;
}