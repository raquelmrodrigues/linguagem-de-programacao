#include <stdio.h>

void func(int* px, int* py);

int main() {
	int x = 10, y = 10;
	scanf("%d", &x);
	scanf("%d", &y);
	func(&x, &y);
	printf("X = %d, Y = %d\n", x , y);
	return 0;
}

void func(int* px, int* py) {
	px = py;
	*py = (*py) * (*px);
	*px = *px + 2;
}
