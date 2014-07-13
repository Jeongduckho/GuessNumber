#include <stdio.h>
#include <stdlib.h>
#include <malloc.h>
#include <time.h>
#include "func.h"
int *n=NULL;
int *user=NULL;
int onoff=1;
int count=0;
void relay(int i) {
	getusernum(i);
	check(i);
}
void main() {
	void submenu();
	extern int count;
	int i /*for level*/
	;
	puts("");
	puts("");
	puts("난이도를 선택하세요.");
	puts("-----------------------");
	puts("[1].    두자리수");
	puts("[2].    세자리수");
	puts("[3].    네자리수");
	puts("[4].  다섯자리수");
	puts("[5].  여섯자리수");
	puts("[6].  일곱자리수");
	puts("[7].  여덟자리수");
	puts("[8].  아홉자리수");
	puts("[0].        끝내기");
	puts("----------------------");
	printf(":");
	scanf("%d", & i);
	if (i == 0) {
		return;
	}
	mkrandnum(i);
	while (onoff) {
		count++;
		relay(i);
		if (onoff == 0) break;
		submenu(i);
	}
	printf("%d번 만에 맞추셨습니다.\n", count);
	free(n);
	free(user);
	return;
}
void submenu(int i) {
	void main();
	int sel;
	puts("");
	puts("작업을 선택하세요");
	puts("-----------------------");
	puts("[1].        계속 진행");
	puts("[2].        기록 보기");
	puts("[3]. 메인으로 돌아가기");
	puts("----------------------");
	printf(":");
	scanf("%d", & sel);
	switch (sel) {
		case 1:
			break;
		case 2:
			break; // unsupport
		case 3:
			main();
			break;
	}
}
