#pragma once


#include <stdio.h>
#include <string.h>
#include <stdbool.h>
#include <stdlib.h>



/*/
int displayThis()
{


	char sentence[15];
	//create file pointer
	FILE* filePoint;

	//int** filePoint1;
	//filePoint1 = &filePoint;//

	//open file in write
	filePoint = fopen("M:\ProgrammingC_Language\C_Tutorials\C_Tutorials\C_Tutorials\C_Tutorials\Text_Files\output.txt", "w");

	if (filePoint == NULL)
	{
		printf("ERROR!");
	}

	printf("Enter a sentence :\n");
	fgets(sentence, sizeof(sentence), stdin);
	fprintf(filePoint, "%s", sentence);
	fclose(filePoint);
	return 0;
}
/*/
int copier()
{
	FILE* firstFile;
	FILE* copyFIle;
	char ch;
	char sentence[20] = { "this is my sentence" };


	if (firstFile = fopen_s(&firstFile, "firstFile", "w") == NULL)
	{
		printf("AN error occured opening the file");
	}
	fprintf(firstFile, "%s", sentence);
	fclose(firstFile);

	if (copyFIle = fopen_s(&copyFIle, "copyFile", "w") == NULL)
	{
		printf("Error opening Copy file");
	}

	if (firstFile = fopen_s(&firstFile, "firstFile", "w") == NULL)
	{
		printf("An error occured opening first file");
	}

	while ((ch = fgetc(firstFile)) != EOF)
	{
		fputc(ch, copyFIle);

		printf("Copied successfully");
	}
	_fcloseall();
	return 0;
}




