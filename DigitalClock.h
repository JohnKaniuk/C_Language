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



int digitalClock()
{
	int h, m, s;
	int d = 1000;
	printf("Set Time: \n");
	scanf("%d%d%d", &h, &m, &s);

	if (h > 12 || m > 60 || s > 60)
	{
		printf("ERROR");
		exit(0);
	}

	while (1)//infinite loop
	{
		s++;
		if (s > 59)
		{
			m++;
			s = 0;
		}
		if (m > 59)
		{
			h++;
			m = 0;
		}
		if (h > 12)
		{
			h = 1;
		}
		printf("\n Clock :");
		printf("\n %0.2d:%0.2d:%0.2d", h, m, s);
		Sleep(d);
		system("cls");

	}
	return 0;
}