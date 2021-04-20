#pragma once
#include <stdio.h>
#include <string.h>
#include <stdbool.h>
#include <stdlib.h>
#include <ctype.h>
#include <errno.h>
#include <time.h>
#include <math.h>
#include <dos.h>
#include <windows.h>
#include <assert.h>


int mainFunc()
{
	int randomNum;
	int firstGuess, secondGuess, thirdGuess;

	printf("Welcome to the random number generator!!\n");
	printf("The computer has already chosen a number from 1-10 and you need to guess it\n");

	randomNum = rand() % 11;

	//printf("%d", randomNum);//
	printf("\nFirst try: Guess the number between 1-10\n");
	scanf("%d", &firstGuess);

	if (firstGuess < randomNum)
	{
		printf("\nyour first guess %d is less than the random number", firstGuess);
	}
	else if (firstGuess > randomNum)
	{
		printf("\nYour first guess %d is more than the random number", firstGuess);
	}
	else if (firstGuess == randomNum)
	{
		printf("\nyou guessed the number correctly %d", firstGuess);
		exit(0);
	}


	printf("\nSecond try: Guess the number between 1-10\n");
	scanf("%d", &secondGuess);

	if (secondGuess < randomNum)
	{
		printf("\nyour first guess %d is less than the random number", secondGuess);
	}
	else if (secondGuess > randomNum)
	{
		printf("\nYour first guess %d is more than the random number", secondGuess);
	}
	else if (secondGuess == randomNum)
	{
		printf("\nyou guessed the number correctly %d", secondGuess);
		exit(0);
	}

	printf("\nThird and final try: Guess the number between 1-10\n");
	scanf("%d", &thirdGuess);

	if (thirdGuess < randomNum)
	{
		printf("\nyour first guess %d is less than the random number", thirdGuess);
		printf("\nThat was your final try so you lose goodbye");
		exit(0);
	}
	else if (thirdGuess > randomNum)
	{
		printf("\nYour first guess %d is more than the random number", thirdGuess);
		printf("\nThat was your final try so you lose goodbye");
		exit(0);
	}
	else if (thirdGuess == randomNum)
	{
		printf("\nyou guessed the number %d correctly. Congratulations you win!!", thirdGuess);
		exit(0);
	}


	return 0;
}