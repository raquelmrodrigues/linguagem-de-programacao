#include <stdio.h>

int main() {
	int i = 5, *p = &i;
	printf("%d, %d, %d\n", *p + 2, **&p, 3 * *p);
	return 0;
}
