int rast(int N, int a){
	jojo:
	if (a <= N) {
		int a3 = a * a * a;
		if (a3 > N)
			exit(1);
		int b = a;
		jojoB:
		if (b <= N) {
			int b3 = b * b * b;
			if (a3 + b3 > N) {
				a++;
				goto jojo;
			}
			int c = a + 1;
			jojoC:
			if (c <= N) {
				int c3 = c * c * c;
				if (c3 > a3 + b3) {
					b++;
					goto jojoB;
				}
				int d = c;
				jojoD:
				if (d <= N) {
					int d3 = d * d * d;
					if (c3 + d3 > a3 + b3) {
						c++;
						goto jojoC;
					}
					if (c3 + d3 == a3 + b3) {
						printf_s(" %i = %i^3 + %i^3= %i^3 + %i^3\n", a3 + b3, a, b, c, d);
					}
					d++;
					goto jojoD;
				}
				c++;
				goto jojoC;
			}
			b++;
			goto jojoB;
		}
		a++;
		goto jojo;
	}
	exit(1);

}
