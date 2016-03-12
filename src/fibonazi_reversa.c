#include <stdio.h>
#include <stdlib.h>

void generate_fibonaci(int fn1, int fn) {
	int f_current = 0;
	int f_previous = 0;
	int f_previous_previous = 0;
	f_previous = fn;
	f_previous_previous = fn1;
	printf("%d ", f_previous_previous);
	printf("%d ", f_previous);
	do {
		f_current = f_previous_previous - f_previous;
		f_previous_previous = f_previous;
		f_previous = f_current;
		printf("%d ", f_current);
	} while (f_current > 0);
	printf("\n");
}

int main(int argc, char **argv) {
	generate_fibonaci(80, 50);
	generate_fibonaci(96, 96 / 2 + 15);
}
