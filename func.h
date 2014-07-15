void mkrandnum(int i) {
	extern int * n;
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
}
void getusernum(int i) {
	extern int * user;
	int p, q;
	user = (int * ) malloc(sizeof(int) * i);
	puts("");
	puts("자리수 만큼 한 자리씩 입력해주세요.");
	puts("---------------------------------");
	puts("");
	for (p = 0; p <= i; p++) {
		printf("%d의 자리 : ", i + 1 - p);
		scanf("%d", & user[p]);
		if (user[p] >= 10) {
			puts("10미만의 수만 입력가능합니다.");
			p--;
		}
		if (user[p] == 0) {
			for (q = 1; q < p; q++) {
				if (user[p] == user[q]) {
					puts("숫자가 중복되었습니다.");
					puts(" 다른 수를 넣어주세요.");
					p--;
					break;
				}
			}
		} else for (q = -1; q < p; q++) {
			if (user[p] == user[q]) {
				puts("숫자가 중복되었습니다.");
				puts(" 다른 수를 넣어주세요.");
				p--;
				break;
			}
		}
	}
}
void check(int i) {
	extern int * n;
	extern int * user;
	extern int onoff;
	extern int Scount;
	extern int Bcount;
	Scount = 0;
	Bcount = 0;
	int p = 0, q = 0;
	for (p = 0; p <= i; p++) {
		for (q = 0; q <= i; q++) {
			if (n[p] == user[q]) {
				if (p == q) Scount++;
				else Bcount++;
			}
		}
	}
	puts("---------------------------------");
	printf("결과 : ");
	if (Scount == 0 & Bcount == 0) {
		printf("out");
		puts("");
	} else {
		printf("%dS, %dB", Scount, Bcount);
		puts("");
	}
	if (Scount == i + 1) onoff = 0;
}
void recorder(int c, int i) {
	int pack, p;
	extern int * user;
	extern int * * recnum;
	extern int * recsum;
	extern int Scount, Bcount;
	recnum[c] = (int * ) malloc(sizeof(int) * i);
	// record used number
	for (p = 0; p <= i; p++) {
		recnum[c][p] = user[p];
	}
	// record that time statue
	pack = (Scount * 10) + Bcount;
	printf("%d", c);
	recsum[c] = pack;
}
void history(int count, int i) {
	extern int * * recnum;
	extern int * recsum;
	int p, c;
	for (c = count; c >= 1; c--) {
		printf("[%d]", c);
		printf(" | ");
		for (p = 0; p <= i; p++) {
			printf("%d", recnum[c][p]);
		}
		printf(" | ");
		printf("%dS %dB", recsum[c] / 10, recsum[c] % 10);
		puts("");
	}
}
