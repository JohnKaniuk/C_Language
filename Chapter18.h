#pragma once

#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>
#include <string.h>
#include <stdbool.h>
#include <stdlib.h>
#include <ctype.h>





int sortSomeOfDat(char *firstInitial, char *SecondInitial, char* NewFirstName, char* NewMiddleName);



int nameSake()
{
	char firstName[20], middleName[20], lastName[20];
	char NFirstName[20], NMiddleName[20];
	int ch;

	//First name
	printf("Enter your First name\n");
	scanf("%s", firstName);

	printf("\nYou entered this : %s\n", firstName);

	//middle name
	printf("\nEnter your Middle name: \n");
	scanf("%s", middleName);

	//Last name
	printf("\nEnter your last name: \n");
	scanf("%s", lastName);


	printf("This is the name you entered:\n %s %s %s", firstName, middleName, lastName);
	
	
	printf("If correct and you wish to proceed press 1, if you want to exit type 0");
	scanf_s("%d", &ch);
	
	
	//IF loop to see if they want the name formatted//
	if (ch == 0)
	{
		exit(0);
	}
	else
	{
		
		sortSomeOfDat(firstName, middleName, NFirstName, NMiddleName);
	}

	//finally display the outcome
	printf("the outcome of your formatted name is: %s . %s . %s", NFirstName, NMiddleName, lastName);
	
	
	return 0;
}

int sortSomeOfDat(char *firstname, char* middlename, char *NewFirstName, char *NewMiddleName)
{
	size_t t = 1;
	strncpy(NewFirstName, firstname, t);
	strncpy(NewMiddleName, middlename, t);

	return 0;

}



int testCharacters()
{
	char input;

	printf("enter a character: \n");
	scanf_s("%c", &input);


	if (isalpha(input) >= 1)
	{
		printf("\nThis is a letter");
	}

	if (isdigit(input) <= 0)
	{
		printf("\nThis is not a digit");
	}

	printf("\nentered character: %c", input);

	return 0;


}

int comparingCmon()
{
	const int SIZE = 20;
	const int SMSIZE = 10;
	int ctr, counter;

	char string1[] = "This Is the string";
	char string2[] = "Is";

	for (ctr = 0; ctr < SIZE; ctr++)
	{
		tolower(getc(string1[ctr]));

	}

	for (counter = 0; counter < SMSIZE; counter++)
	{
		tolower(getc(string2[counter]));

	}

	char* my_answer = strstr(string1, string2);



}

int count331()
{
	char string1[20] = "331 331 311 331 331";
	char p = string1;
	int ctr;


	for (ctr = 0; ; ctr++)
	{
		p = strstr(p, "331");
		if (p == "\0")
		{
			break;
		}
	}

	return 0;
}

int displayFileString()
{
	int result;
	system("cls");
	char str1[10] = "mom";
	
	
	result = searchInFile("filename", str1);

	if (result == 0)
	{
		printf("ERROR NO MATCHES FOUND");
		exit(0);
	}
	return(0);

}


int searchInFile(const char* fname, const char* str)
{
	FILE* fp;
	int line_num = 1;
	int found_result = 0;
	char temp[512];


	if (fopen_s(&fp, fname, "r") == NULL)
	{
		printf("Error reading this file");
		return(-1);
	}

	//go through every line individually and check whether the str is true if it is then a match found
	while (fgets(temp, 512, fp) != NULL)
	{
		if ((strstr(temp, str)) != NULL)
		{
			printf("Match found at line %d", line_num);
			found_result++;
		}
		line_num++;
		
	}

	
	if (found_result == 0)
	{
		printf("no results have been found within the file");
	}
	else
	{
		printf("number of matched results :", found_result);
	}
	//remember to close the file
	if (fp)
	{
		fclose(fp);
	}

	return(0);
}




int get_float1()
{
	char string[10];
	double d;



	printf("\nenter a float digit: ");
	fgets(string, sizeof(string), stdin);

	if (strlen(string) == 0)
	{
		printf("invalid entry");
		exit(0);
	}

	d = atof(string);

	printf("the converted value is %f", d);
	return 0;
}