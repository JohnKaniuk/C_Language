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


int asize()
{
	int ctr;

	long* dptr;
	long* ptr;
	ptr = malloc(1000 * sizeof(long));
	dptr = calloc(1000, sizeof(long));
	if (ptr == NULL)
	{
		printf("\nMemory was not allocated");
	}
	else
	{
		printf("\nMemory was allocated successfully");
	}

	free(ptr);
	if (ptr == NULL)
	{
		printf("\nmemory freed sucessfully");
	}
	else
	{
		printf("\nyou did not free it");
	}

	printf("\npress 1 to exit\n");
	scanf("%d", &ctr);

	if (ctr == 1)
	{
		exit(0);
	}


	return 0;
}


int assigned()
{
	int maxSize = 1000;
	int ctr;
	float data[1000];


	for (ctr = 0; ctr < 1000; ctr++)
	{
		data[ctr] = 0;
	}

	//memset(data, 0, 1000 * sizeof(float);

	return 0;
}


int bitwise()
{
	unsigned char a = 5, b = 9;

	//BITWISE AND OPERATOR only 1 if both bits are 1;
	//Result is 00000001
	printf("\na = %d, b = %d", a, b);
	printf("\na & b = %d", a & b);

	//Bitwise OR Operator where only 1 is any bit is 1;
	printf("\na = %d, b = %d", a, b);
	printf("\na | b = %d", a | b);

	//BITwise ^ Xor exclusive or only 1 if both bits are different
	printf("\na = %d, b = %d", a, b);
	printf("\na ^ b = %d", a ^ b);

	//Bitwise NOT ~ operator flips each o to 1 and 1 to 0;
	printf("\n~a = %d", a = ~a);

	//Shift left <<
	printf("\nb << = %d", b << 1);

	//Shift right >>
	printf("\nb >> = %d", b >> 1);

	return 0;


}