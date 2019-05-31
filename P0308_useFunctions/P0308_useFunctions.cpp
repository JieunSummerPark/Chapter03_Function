#include <stdio.h>
#include "myFunctions.h"

void main() {
	printf("섭씨 %5.1f도 = 화씨 %5.1f도\n", 27.0, Cel2Fah(27.0));
	printf("화씨 %5.1f도 = 섭씨 %5.1f도\n", 95.0, Fah2Cel(95.0));
	printf("\n");
	printNumPyramid(5);
	printf("\n");
	printf("게임점수 = %d\n", playUpAndDown(35, 0, 99));
}