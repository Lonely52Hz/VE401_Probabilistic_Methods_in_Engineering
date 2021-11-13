#include <stdio.h>
#include <stdlib.h>
#include <time.h>
#include <math.h>

int main() {
	int x[100];
	float y[100];
	int m1 = 134456;
	float m2 = 134456;
	int a = 8121;
	int c = 28411;
	srand(time(NULL));
	x[0] = rand()% m1;
	for (int i = 0; i < 99; i++) {
		x[i + 1] = (a * x[i] + c) % m1;
	}
	for (int i = 0; i < 100; i++) {
		y[i] = x[i] / m2 * 100 ;
	}
	for (int i = 0; i < 100; i++) {
		printf("%d ", int(floor(y[i])));
	}
	return 0;
}

