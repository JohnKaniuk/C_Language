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

int fileCopy()
{
	char copyHolder[45];
	int ctr = 0, ctr1;
	char c, fileName1[25], fileName2[25];
	FILE* f1ptr, *f2ptr;

	//get first file name
	printf("Enter FILENAME 1 :\n");
	scanf("%s", &fileName1);
	//get second file name
	printf("Enter FILENAME 2 :\n");
	scanf("%s", &fileName2);
	

	
	
	f1ptr = fopen(fileName1, "w");
	if(f1ptr == NULL)
	{
		printf("\nERROR OPENING FILE EXITING NOW");
		exit(0);
	}

	fprintf(f1ptr,"This is information being passed to file 1");

	fclose(f1ptr);

	// Open file
	
	f1ptr = fopen(fileName1, "r");
	if (f1ptr == NULL)
	{
		printf("Cannot open file \n");
		exit(0);
	}

	// Read contents from file
	c = fgetc(f1ptr);
	while (c != EOF)
	{
		printf("%c", c);
		c = fgetc(f1ptr);
		
		//copy each character into placeholder one by one
		copyHolder[ctr] = c;
		ctr++;
	}
	fclose(f1ptr);

	//open and copy f1 to f2
	f2ptr = fopen(fileName2, "w");
	if (f2ptr == NULL)
	{
		printf("\nerror opening file 2 closing now");
		exit(0);
	}
	
	for (ctr1 = 0; ctr1 < 45; ctr1++)
	{
		fprintf(fileName2, copyHolder[ctr1]);
	}

	fclose(f2ptr);

	f2ptr = fopen(fileName2, "r");
	if (f2ptr == NULL)
	{
		printf("\nError opening file 2 closing now");
		exit(0);
	}

	printf("\nCopied info in file 2 is :\n");
	//printf each character of file 2//
	c = fgetc(f2ptr);
	while (c != EOF)
	{
		printf("%c", c);
		c = fgetc(f2ptr);
	}
	fclose(f2ptr);




	return 0;

}






