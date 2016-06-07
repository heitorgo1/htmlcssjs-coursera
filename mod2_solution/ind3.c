#include <stdio.h>

int main() {

	int i = 0;

	for (int j = 0; j < 10; j++) {
		for (int k = 0; k < 10; k++) {
			for (int l = 0; l < 10; l++) {
				i = j+k+l;
				i = k-l-j;
				for (int m = 0; m < 10; m++) {
				}
			}
		}
	}


	int z = 0;
	while (z < 2) {
		z++;
		printf ("%d",z);
	}
}
