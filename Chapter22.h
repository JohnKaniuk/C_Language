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






int fileOpen()
{
	FILE *f = fopen("test.txt", "r");
	
	if (f == NULL)
	{
		perror("Error opening file : ");
		printf("line: #%d", __LINE__);
		printf("\nFile: %s", __FILE__);
	}


	return 0;

}