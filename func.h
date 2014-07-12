void mkrandnum(int i) {
	int * n = NULL;
	int p, q, check = 0;
	n = (int * ) malloc(sizeof(int) * i);
	srand(time(NULL)); // To make different num at anytime
	n[0] = rand() % 10; // To compare num, to except is better 
	for (p = 1; p <= i; p++) {
		n[p] = rand() % 10;
		for (q = 0; q < p; q++) {
			if (n[p] == n[q]) {
				p--;
				break;
			}
		}
	}
	free(n);
}
void getusernum(int i) {
	int * user = NULL;
	int p, q;
	user = (int * ) malloc(sizeof(int) * i);
	puts("자리수 만큼 한 자리씩 입력해주세요.");
	puts("");
	for (p = 0; p <= i; p++) {
		printf("%d의 자리 : ", i + 1 - p);
		scanf("%d", & user[p]);
		if (user[p] >= 10) {
			puts("10미만의 수만 입력가능합니다.");
			p--;
		}
		for (q = -1; q < p; q++) {
			if (user[p] == user[q]) {
				puts("숫자가 중복되었습니다.");
				puts(" 다른 수를 넣어주세요.");
				p--;
				break;
			}
		}
	}
	free(user);
}
