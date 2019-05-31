/* 매크로 함수 */

#include <stdio.h>
#define square(x) x*x
inline int merong(int x) { return x * x; }

int main(int argc, char **argv) {
	int x = 3;
	printf("%d", square(x+1));
	printf("\n");
	int y = 5;
	printf("%d", square(++y));
	printf("\n");
	return 0;
}