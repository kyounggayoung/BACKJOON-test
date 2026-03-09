#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>

int main() {
	int a, b;
	int r = 0;
	while (1) {
		scanf("%d %d", &a, &b);
		if (a == 0 && b == 0) {
			break;
		}
		else if (a < b) {
			if (b%a == 0) {
				r = 1;
			}
			else {
				r = 3;
			}
		}
		else {
			if (a%b == 0) {
				r = 2;
			}
			else {
				r = 3;
			}
		}
		if (r == 1) {
			printf("factor\n");
		}
		else if (r == 2) {
			printf("multiple\n");
		}
		else {
			printf("neither\n");
		}
	}
	return 0;
}