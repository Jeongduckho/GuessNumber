#include <stdio.h>
#include <stdlib.h>
#include <malloc.h>
#include <time.h>
#include "func.h"
int *n=NULL;
int *user=NULL;
int onoff=1;
void relay(int i) {
	getusernum(i);
	check(i);
}
void main() {
	int i /*for level*/
	;
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
		relay(i);
	}
	puts("맞추셨습니다.");
	free(n);
	free(user);
	return;
}



