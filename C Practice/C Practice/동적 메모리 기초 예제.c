// ���� �޸� ���� ����
#include <stdio.h>
#include <stdlib.h> // ���� �޸𸮸� ����ϱ� ���� ���� ���̺귯��


int main(void) {
	int* pi; // pointer integer�� ����
	pi = (int*)malloc(sizeof(int)); // malloc(sizeof(int)) = �޸𸮸� sizeof(int) ��ŭ �Ҵ��϶�, pi = (int*) = pi�� �ּҸ� ����ϵ��� �ϴ� ����
	if (pi == NULL) {
		printf("���� �޸� �Ҵ翡 �����߽��ϴ�.\n");
		exit(1); // ���α׷��� ���� ��Ŵ
	}
	*pi = 100; // pi�� ����Ű�� �ּ��� ���� 100�� �ִ´�.
	printf("%d\n", *pi);
	/*���� �޸𸮸� ����� ���Ŀ��� ������ �ش� �޸𸮸� ��ȯ�Ѵ�.*/
	free(pi); // �Ҵ�� �޸𸮸� �Ҵ� ������.
	return 0;
}