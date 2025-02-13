#include <stdio.h>
#include <time.h>
#include <stdlib.h>
#define MAX_COUNT  100

int main()
{
	int i, side[6] = { 0, };
	
	printf("주사위를 %d번 굴려 나온 결과입니다.\n", MAX_COUNT);
	srand((unsigned int)time(NULL));
	
	for (i = 0; i < MAX_COUNT; i++){
		side[rand() % 6]++;
	}
	for (i = 0; i<6; i++){
		printf("%d번 : %d\n", i +1, side[i]);
	}
	return 0;
}
