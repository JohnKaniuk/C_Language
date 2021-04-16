#pragma once
#include <stdio.h>
#include <string.h>
#include <stdbool.h>
#include <stdlib.h>
#include <ctype.h>




int numbers(int* int1, int* int2, int* int3);

int yea()
{
	int a = 100;
	int b = 50;
	int c = 75;


	numbers(&a, &b, &c);
	printf("Numbers after swapped: a:%d , b:%d , c:%d", a, b, c);
}

int numbers(int* int1, int* int2, int* int3)
{
	int ctr, temp;

	temp = *int1;
	ctr = *int2;
	*int3 = *int2;
	*int2 = temp;
	*int1 = ctr;

}

//int concat(char* str1, char* str2, char* str3);//
int passes()
{
	char orgStr[80];
	char strA[10] = "Cmon";
	char strB[10] = "now";
	char strC[10] = "work";

	concat();





}

int concat()
{
	char bigBoyString[80];

	char firstString[100];
	char secondString[100];
	char thirdString[100];

	//input each string then strcat to original//
	printf("Input first string: ");
	scanf("%s", firstString);

	strcat(bigBoyString, firstString);

	printf("Input second string: ");
	scanf("%s", secondString);

	strcat(bigBoyString, secondString);

	printf("Input third string: ");
	scanf("%s", thirdString);

	strcat(bigBoyString, thirdString);
	
	//strcat(bigBoyString, *str1);//
	//strcat(bigBoyString, *str2);
	//strcat(bigBoyString, *str3);
	printf("%s", bigBoyString);
	return 0;
}

int concats(const char* str1, const char* str2, const char* str3)
{
	char bigBoyString[100];
	int buf = 50;

	strcat(bigBoyString, str1);
	strcat(bigBoyString, str2);
	strcat(bigBoyString, str3);

	if (sizeof(bigBoyString) > buf)
	{
		printf("buffer error too long");
		exit(0);
	}

	printf("%s", bigBoyString);
	return 0;

}

//int rightWay(const char* str, ...);//
/*/
int concatsRightWay()
{
	printf("IF this works you are on the right track");

	rightway("cmon", "now", "you");


	return 0;
}


/*/
/*/
int rightWay(const char *str, ...)
{
	//decalkre va_list variable arg_ptr//

	va_list arg_ptr;
	int count; 
	char bigBoyString[100];

	//initialize argument pointer

	va_start(arg_ptr, str);

	//retrieve each next argument

	for (count = 0; count < 5; count++)
	{
		va_arg(arg_ptr, char);
	}


}
/*/
int smallerLarger()
{
	int arr[] = { 1, 2, 3, 4, 5 };
	int count;
	int max = 4;
	int largest = 0;
	int smallest = 5 ;
	

	for (count = 0; count < 5; count++)
	{
		if (arr[count] > largest)
		{
			largest = arr[count];
		}

		if (arr[count] < smallest)
		{
			smallest = arr[count];
		}
	}

	printf("The smallest number is %d", smallest);
	printf("The biggest number is %d", largest);

	return 0;
}


int lookC(const char *mainString )
{
	char ch = 'c';
	char* ptr;


	ptr = strchr(mainString, ch);

	//printf(" the first occurence of %c in %s is %s", ch, mainString, ptr);//
	
	
	return 	printf(" the first occurence is %s", ptr);

}