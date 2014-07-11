void mkrandnum(int i) {
	int * n;
	int p;
	for (p = 1; p <= i + 1; p++) {
		if ( * (n + p) != * (n + p - 1)) { * (n + p) = rand(10);
		}
	}
}
