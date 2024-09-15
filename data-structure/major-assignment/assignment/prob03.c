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

		// 방법1:
		scanf("%s", words[i]);
		// 문제점
		// - words[i]는 포인터 배열인데, 현재 메모리가 할당되지 않은 상태이다.
		//   포인터 변수가 아무것도 가리키지 않는 상태에서 문자열을 입력받으면,
		//   메모리 접근 오류가 발생할 수 있다.
		// 해결 방법
		// - words[i]에 메모리를 할당해주기 위해 다음 코드로 작성해주면 된다.
		//   words[i] = (char *)malloc(MAXLEN * sizeof(char));

		// 방법2:
		scanf("%s", buf);
		words[i] = buf;
		// 문제점
		// - words[i]는 입력받은 buf를 가리키게 되는데, for문을 통한 반복해서 입력한
		//   문자열은 buf에 저장되고 words[i]가 갱신된 buf를 가리키게 된다.
		//   이때, 모든 words[i]는 buf 변수를 가리키므로 가장 마지막에 갱신된 buf 문자열을
		//   가리키게 된다.
		// 해결 방법
		// - 의도하는 바가 for문을 통해 words[i]가 각각 다른 문자열을 가리키게 하는 것이라면,
		//   반복문에서 입력받은 buf 문자열을 따로 복사해야한다. malloc으로 메모리를 할당한 후, strcpy로 복사한다.
		//   words[i] = (char *)malloc(strlen(buf) + 1);
		//   strcpy(words[i], buf);

		// 방법3:
		scanf("%s", buf);
		strcpy(words[i], buf);
		// 문제점
		// - strcpy(A, B)는 B를 A에 복사하는 함수이다. 이때 buf에 저장된 문자열을 words[i]가 가리키는 
		//   메모리 영역으로 복사한다. 즉, words[i]는 buf를 가리키는 것이 아니라, buf에 있는 문자열의 내용을
		//   words[i]가 가리키는 메모리로 복사하는 것이다.
		//   하지만, words[i]는 아직 메모리를 할당받지 않은 상태인데 strcpy를 호출하면 잘못된
		//   메모리 접근이 발생할 수도 있다.
		// 해결 방법
		// - words[i]에 메모리를 할당한 후에 strcpy를 호출해야 한다.
		//  words[i] = (char *)malloc(strlen(buf) + 1);
		//  strcpy(words[i], buf);
	}

	for (int i = 0; i < n; i++)
		printf("%s\n", words[i]);

	return 0;
}