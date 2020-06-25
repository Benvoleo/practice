#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>
#include <stdlib.h>
#include "Header.h"
int a = 1, N;
int main() {
	printf("Enter the N(number only; and between 1 and 100000000): ");
	scanf("%i", &N);
	if (N > 0 && N <= 100000000){
		rast(N, a);
	}
	printf("Input error");
}