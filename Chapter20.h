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



/*/
print_full_array(char* array, int len)
{
	int i;
	for (i = 0; i < len; i++)
	{
		printf("%s", array[i]);
		printf("\n");
	}

}
/*/


int cmpstr(const void* a, const void* b)
{
	const char** ia = (const char**)a;
	const char** ib = (const char**)b;
	
	return strcmp(*ia, *ib);
}


int callBsearch()
{

	int ctr, ctr2;
	const char *names[] = { "zorro", "dexter", "rexo", "bilbo", "urmom" };
	int array[] = { 1, 12, 4, 2, 5 };
	int sizeOfString = 20;

	int strLeng = sizeof(names) / sizeof(char *);
	
	//print original array//
	
	
	
	printf("This is array before sort\n");
	for (ctr = 0; ctr < strLeng; ctr++)
	{
		printf(" %s\n", names[ctr]);
	
	
	}
	

	//print_full_array(names, strLeng);

	//sort the array using qsort//
	
	qsort(names, strLeng, sizeof(char *) ,  cmpstr);

	//print array once sorted//
	printf("\n This is the array after sort\n");
	//print_full_array(names, strLeng);
	for (ctr = 0; ctr < strLeng; ctr++)
	{
		printf(" %s", names[ctr]);
		printf("\n");
	}

	return 0;

}
/*/
char names[] = { "rdonsdibn" };
num = sizeof(names) / sizeof(char);
key = "s";
void bsearch(key, names, num, sizeof(char), compNames);
/*/
int mathMenu()
{
	printf("\nWelcome");

	mainMenu();
	mainMenuEnd();


	return 0;


}

int mainMenu()
{
	double inputNum ;
	int controller;

	//input number
	printf("Welcome to Math menu");
	printf("\nPlease input a number to be used:\n");
	scanf("%lf", &inputNum);

	assert(inputNum > 0);
	//input controller number
	printf("\nNow input the number of what mathematical function you want to use");
	printf("\nType 1 for SQUARE ROOT");
	printf("\nType 2 for CEILING number");
	printf("\nType 3 for FLOOR number");
	scanf("%d", &controller);

	if (controller == 1)
	{
		printf("\nThe square root of %lf is %lf", inputNum, sqrt(inputNum));
	}
	else if (controller == 2)
	{
		printf("\nThe ceiling Number of %lf is %lf", inputNum, ceil(inputNum));
	}
	else
	{
		printf("\nThe Floor number of %lf is %lf", inputNum, floor(inputNum));
	}

	mainMenuEnd();



	/*/
	//switch between controller cases
	switch (controller)
	{
	case '1':
		printf("\nThe square root of %lf is %lf", inputNum, sqrt(inputNum));
	
	case '2':
		printf("\nThe ceiling Number of %lf is %lf", inputNum, ceil(inputNum));
		
	case '3':
		printf("\nThe Floor number of %lf is %lf", inputNum, floor(inputNum));
		
	}
	/*/

	return 0;
}

int mainMenuEnd()
{
	int input;

	printf("\nIf you wish to exit press 1, if you want to restart the math user press 2:");
	scanf("%d", &input);

	if (input == 1)
	{
		exit(0);
	}
	if (input == 2)
	{
		mainMenu();
	}
	return 0;
}



/*//
int displayTime()
{
	time_t now;
	struct tm* timeInfo;

	time(&now);
	timeInfo = localtime(&now);
	
	printf("Current local time and date: %s", asctime(timeInfo));

	time_t now = time(NULL);

	struct tm now_tm = localtime(now);

	struct tm then_tm = now_tm;
	 then_tm.tm_sec += 50; //adding 50 seconds to time

	 mktime(&then_tm);

	printf("With a 5 second delay the time is now 5 seconds later %s: ", asctime(&then_tm));

	return 0;

}
/*/

/*/
int delayCmon()
{
	printf("this is before delay");

	sleep(5000);

	printf("\n This is after delay");

	return 0;

}
/*/




int sqrtNeg()
{
	int input, control;
	double newInput;
	
	printf("Welcome\n");
	printf("Insert any number to be square rooted:");
	scanf("%d", &input);

	newInput = abs(input);
	printf("\nThe absolute value of %d is %lf", input, newInput);

	printf("\nThe square root of %lf is %lf", newInput, sqrt(newInput));

	printf("\nPress 0 to exit:");
	scanf("%d", &control);

	if (control == 0)
	{
		exit(0);
	}

	return 0;
	
}



/*/
int sorter()
{
	int ctr, ctller;

	int array1[] = { 1 , 12 , 2 , 7 , 4 , 9 , 3 , 20 };
	
	int strAmount = sizeof(array1) / sizeof(int);

	printf("\nArray before the sort\n");
	for (ctr = 0; ctr < strAmount; ctr++)
	{
		printf("%d\n", array1[ctr]);
	}

	qsort(array1, strAmount, sizeof(int), compstr);

	printf("\nArray after the sort:\n");
	for (ctller = 0; ctller < strAmount; ctller++)
	{
		printf("%d\n", array1[ctller]);
	}


	return 0;

}
/*/




int compstring(const void* c, const void* d)
{
	const char** ic = (const char**)c;
	const char** id = (const char**)d;

	return strcmp(*ic, *id);
}

int callCsearch()
{

	int ctr, ctr2, control;
	
	int maxSize = 5;

	char* names[5];




	printf("\nEnter five names to be sorted in an array\n");
	for (control = 0; control < maxSize; control++)
	{
		printf("enter a string to in array. Name number #%d \n", control);
		scanf("%s", &names[control]);

	}
	
	
	//print original array//
	printf("\nThis is array before sort");
	for (ctr = 0; ctr < 5 ; ctr++)
	{
		printf("\n%s", &names[ctr]);


	}


	//print_full_array(names, strLeng);

	//sort the array using qsort//

	qsort(names, maxSize, sizeof(char *), compstring);

	//print array once sorted//
	printf("\n This is the array after sort\n");
	//print_full_array(names, strLeng);
	for (ctr = 0; ctr < maxSize; ctr++)
	{
		printf(" \n%s", &names[ctr]);
		
	}

	return 0;

}









int displayTime()
{
	time_t now;
	struct tm* timeInfo;

	time(&now);
	timeInfo = localtime(&now);

	printf("Current local time and date: %s", asctime(timeInfo));

	return 0;
}




int getFinal() 
{
	int strCtr, bruteCtr;
	
	printf("\nTo start press 1:\n");
	scanf("%d", &strCtr);
	 
	if (strCtr == 1)
	{
		printf("The time before array is sorted is:");
		displayTime();
		
		arraySorter();
		
		printf("The time after array is sorted is:");
		displayTime();
	}

	printf("To test brute force method press 2:");
	scanf("%d", &bruteCtr);

	if (bruteCtr == 1)
	{

	}


	return 0;

}


int compstr(const void* a, const void* b)
{
	//get values at given adresses

	int l = *(const int*)a;
	int r = *(const int*)b;

	if (l > r)
	{
		return 1;
	}
	else if (l == r)
	{
		return 0;
	}
	else if (l < r)
	{
		return -1;
	}

}

int arraySorter()
{
	int ctr, ctller;

	int array1[] = { 1 , 12 , 2 , 7 , 4 , 9 , 3 , 20 };

	int strAmount = sizeof(array1) / sizeof(int);

	printf("\nArray before the sort\n");
	for (ctr = 0; ctr < strAmount; ctr++)
	{
		printf("%d\n", array1[ctr]);
	}

	qsort(array1, strAmount, sizeof(int), compstr);

	if (malloc(sizeof(int) * 10) != NULL)
	{
		printf("Space alocated at Line %s", __LINE__);
	}


	printf("\nArray after the sort:\n");
	for (ctller = 0; ctller < strAmount; ctller++)
	{
		printf("%d\n", array1[ctller]);
	}

	return 0;
}

