#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>
#include <string.h>
#include <stdlib.h>
#define MAXWORDS 100
#define MAXLEN 30

int main() {
	int n;
	scanf("%d", &n);
	char* words[MAXWORDS];

	char buf[MAXLEN];
	for (int i = 0; i < n; i++) {

		// ���1:
		scanf("%s", words[i]);
		// ������
		// - words[i]�� ������ �迭�ε�, ���� �޸𸮰� �Ҵ���� ���� �����̴�.
		//   ������ ������ �ƹ��͵� ����Ű�� �ʴ� ���¿��� ���ڿ��� �Է¹�����,
		//   �޸� ���� ������ �߻��� �� �ִ�.
		// �ذ� ���
		// - words[i]�� �޸𸮸� �Ҵ����ֱ� ���� ���� �ڵ�� �ۼ����ָ� �ȴ�.
		//   words[i] = (char *)malloc(MAXLEN * sizeof(char));

		// ���2:
		scanf("%s", buf);
		words[i] = buf;
		// ������
		// - words[i]�� �Է¹��� buf�� ����Ű�� �Ǵµ�, for���� ���� �ݺ��ؼ� �Է���
		//   ���ڿ��� buf�� ����ǰ� words[i]�� ���ŵ� buf�� ����Ű�� �ȴ�.
		//   �̶�, ��� words[i]�� buf ������ ����Ű�Ƿ� ���� �������� ���ŵ� buf ���ڿ���
		//   ����Ű�� �ȴ�.
		// �ذ� ���
		// - �ǵ��ϴ� �ٰ� for���� ���� words[i]�� ���� �ٸ� ���ڿ��� ����Ű�� �ϴ� ���̶��,
		//   �ݺ������� �Է¹��� buf ���ڿ��� ���� �����ؾ��Ѵ�. malloc���� �޸𸮸� �Ҵ��� ��, strcpy�� �����Ѵ�.
		//   words[i] = (char *)malloc(strlen(buf) + 1);
		//   strcpy(words[i], buf);

		// ���3:
		scanf("%s", buf);
		strcpy(words[i], buf);
		// ������
		// - strcpy(A, B)�� B�� A�� �����ϴ� �Լ��̴�. �̶� buf�� ����� ���ڿ��� words[i]�� ����Ű�� 
		//   �޸� �������� �����Ѵ�. ��, words[i]�� buf�� ����Ű�� ���� �ƴ϶�, buf�� �ִ� ���ڿ��� ������
		//   words[i]�� ����Ű�� �޸𸮷� �����ϴ� ���̴�.
		//   ������, words[i]�� ���� �޸𸮸� �Ҵ���� ���� �����ε� strcpy�� ȣ���ϸ� �߸���
		//   �޸� ������ �߻��� ���� �ִ�.
		// �ذ� ���
		// - words[i]�� �޸𸮸� �Ҵ��� �Ŀ� strcpy�� ȣ���ؾ� �Ѵ�.
		//  words[i] = (char *)malloc(strlen(buf) + 1);
		//  strcpy(words[i], buf);
	}

	for (int i = 0; i < n; i++)
		printf("%s\n", words[i]);

	return 0;
}