#include <stdio.h>
#include <stdlib.h>
#include <malloc.h>
#include <time.h>
#include "func.h"
int *n=NULL;
int *user=NULL;
int **recnum=NULL;
int *recsum=NULL;
int onoff=1;
int stop=0;
int count=0;
int Scount =NULL;
int Bcount =NULL;
void relay(int i) {
	getusernum(i);
	check(i);
}
int main() {
	void submenu();
	extern int * * recnum;
	extern int * recsum;
	extern int count;
	extern int stop;
	int i /*for level*/
	, p;
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
		return 0;
	}
	mkrandnum(i);
	recnum = (int * * ) malloc(sizeof(int * ) * (25 * i));
	recsum = (int * ) malloc(sizeof(int) * (25 * i));
	while (onoff) {
		if (stop == 1) {
			puts("");
			puts("기록을 다 보셨으면 0을 눌러주세요.");
			printf(": ");
			scanf("%d", & stop);
			system("clear");
		} else system("clear");
		count++;
		relay(i);
		if (onoff == 0) break;
		recorder(count, i);
		submenu(i);
	}
	printf("%d번 만에 맞추셨습니다.\n", count);
	for (p = 0; p <= i; p++); {
		free(recnum[p]);
	}
	free(recnum);
	free(recsum);
	free(n);
	free(user);
	return;
}
void submenu(int i) {
	extern int count;
	extern int stop;
	int main();
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
			stop = 1;
			history(count, i);
			break;
		case 3:
			main();
			break;
	}
}
