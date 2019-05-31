#include <stdio.h>
#include <stdlib.h>
#include <time.h>

inline int randCoin() { return rand() % 2; }
inline int randDice() { return rand() % 6 + 1; }
inline char randLChar() { return rand() % 24 + 'a'; }
inline char randUChar() { return rand() % 24 + 'A'; }
inline char randNum() { return rand() % 10 + '0'; }
inline int randIntNum() { return rand() % 10 + 1; }

void main() {
	srand((unsigned)time(NULL));
	printf("coin\tdice\tLchar\tUChar\tNum\tIntNum\n");
	for (int i = 0; i < 100; i++) {
		printf("%s\t", randCoin() == 0 ? "head" : "tail");
		printf("%2d\t", randDice());
		printf("%c\t", randLChar());
		printf("%c\t", randUChar());
		printf("%c\t", randNum());
		printf("%2.1d\n", randIntNum());
	}
}