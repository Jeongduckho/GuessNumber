void mkrandnum(int i) {
	int *n = NULL;
	int p, q, check=0;
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
