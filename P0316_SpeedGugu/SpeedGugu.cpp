﻿#include "SpeedGugu.h"

static int NumGames = 0;	// 전체 시도 횟수
static int NumWins = 0;		// 맞힌 횟수
static double Score = 0;	// 점수
double tElapsed = 0;		// 게임 소요시간

static bool playGuguOnce()
{
	int a = rand() % 8 + 2;
	int b = rand() % 8 + 2;
	int result;

	NumGames++;
	printf("[문제%2d] %2d x %2d = ", NumGames, a, b);
	scanf_s("%d", &result);
	if (result == a * b) NumWins++;
	return (result == a * b);
}
double playSpeedGugu(int nPlay)
{
	clock_t t0 = clock();
	for (int i = 0; i < nPlay; i++) {
		if (playGuguOnce() == false)
			printf("\t틀렸습니다.\n");
	}
	clock_t t1 = clock();
	tElapsed = (double)(t1 - t0) / CLOCKS_PER_SEC;
	Score = (NumGames > NumWins) ? 0.0
		: 100 * (5.0 * NumGames - tElapsed) / (5.0 * NumGames);
	return Score;
}