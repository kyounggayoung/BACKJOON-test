#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>

int test(int n);

int main() {
	int n;
	while (1) {
		scanf("%d", &n);
		if (n == -1) {
			break;
		}
		if (test(n) == 0) {
			printf("%d is NOT perfect.\n", n);
		}
		else {
			printf("%d =", n);
			int f = 1;
			for (int i = 1; i < n; i++) {
				if (n%i == 0) {
					if (f) {
						printf(" %d", i);
						f = 0;
					}
					else {
						printf(" + %d", i);
					}
				}
			}
			printf("\n");
		}
	}
	return 0;
}

int test(int n) {
	int sum = 0;
	for (int i = 1; i < n; i++) {
		if (n%i == 0) {
			sum += i;
		}
	}
	return (sum == n);
}