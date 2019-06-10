
#include <stdio.h>
#define _CRT_SECURE_NO_WARNINGS

int i, j;
int nums[3] = { 8, 9, 10 };

int main(void) {

	for (i = 2; i >= 0; i -= 2) {
		printf("i:%03d ", i);

		for (j = i; j >= 0; j--) {
			printf("j:%03d Num : %03d ", j, nums[j]);
		}

		printf("\n");
	}
	return 0;
}