#pragma once

#define RANDOMUMBER
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


int randomNumGen(int range);
int rockPaperScissors()
{
	int randomNum;
	int rangeNum = 4;
	char rock, paper, scissors;
	char Prock, Ppaper, Pscissors;
	int simChoice, playerChoice, randomNumber;

	//player choice
	printf("\nPick a play. \n 1 for Rock.\n 2 For Paper.\n 3 For Scissors.\n ");
	scanf("%d", &playerChoice);
	//Assigning number to play 
	if (playerChoice == 1)
	{
		Prock = playerChoice;
		printf("You chose rock\n");
	}
	else if (playerChoice == 2)
	{
		Ppaper = playerChoice;
		printf("You chose paper\n");
	}
	else if (playerChoice == 3)
	{
		Pscissors = playerChoice;
		printf("You chose scissors\n");
	};



	randomNum = randomNumGen(rangeNum);
	//printf("The random number generated is %d\n", randomNum);
	
	//assigning pick based on random number generated
	if (randomNum == 1)
	{
		rock = randomNum;
		printf("The computer chose rock\n");
	}
	else if (randomNum == 2)
	{
		paper = randomNum;
		printf("The computer chose paper\n");
	}
	else if (randomNum == 3)
	{
		scissors = randomNum;
		printf("The computer chose scissors\n");
	};

	decideWinner(playerChoice, randomNum);
	return 0;
}



int decideWinner(int x, int y)
{
	int winner;
	// x = 1
	if (x == 1 && y == 1)
	{
		printf("no one wins you both suck");
	}
	if (x == 1 && y == 2)
	{
		winner = x;
		printf("\nPlayer chose Rock, Computer chose paper. Computer wins.\n");
	}
	if (x == 1 && y == 3)
	{
		winner = x;
		printf("\nPlayer chose Rock, Computer chose scissors. Player wins.\n");
	}

	//X == 2
	if (x == 2 && y == 1)
	{
		winner = x;
		printf("\nPlayer chose Paper, Computer chose rock. Player wins.\n");
	}
	if (x == 2 && y == 2)
	{
		printf("no one wins you both suck");
	}
	if (x == 2 && y == 3)
	{
		winner = y;
		printf("\nPlayer chose Paper, Computer chose scissors. Computer wins.\n");
	}
	
	//X == 3
	if (x == 3 && y == 1)
	{
		winner = y;
		printf("\nPlayer chose scissors, Computer chose rock. Computer wins.\n");
	}
	if (x == 3 && y == 2)
	{
		winner = x;
		printf("\nPlayer chose scissors, Computer chose paper. Player wins.\n");
	}
	if (x == 3 && y == 3)
	{
		printf("no one wins you both suck");
	}

	return winner;
}

int randomNumGen(int range)
{
	
	int number;
	time_t t;
	int i;
	int nextNumber = 2;
	srand((unsigned) time(&t));

	//print random number using for

	for (i = 1; i < nextNumber; i++)
	{
		number = (rand() % range);
	}
	return number;
	//printf("%d\n", number);
}