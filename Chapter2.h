#pragma once

#include <stdio.h>
#include <string.h>
#include <stdbool.h>
#include <stdlib.h>

#define TARGET_AGE 88

/* The function to get the future year*/
int calcYear(int year1)
{
	return (year1 + TARGET_AGE);
}

void getCalendarInfo()
{
	int year1, year2;

	//ask the user for birth year
	printf("What year was the subeject born? ");
	printf("Enter as a 4-digit year (YYYY) :  ");
	scanf_s(" %d", &year1);

	//Calculate the future year and display it 
	year2 = calcYear(year1);

	printf("Someone born in %d will be %d in %d", year1, TARGET_AGE, year2);
}

//Chapter 3 - How many bytes each variable takes up.
void sizeOf()
{
	printf("\nA char      is %d bytes", sizeof( char ));
	printf("\nAn int      is %d bytes", sizeof( int ));
	printf("\nA short     is %d bytes", sizeof( short ));
	printf("\nA long      is %d bytes", sizeof( long ));
	printf("\nA long long is %d bytes", sizeof( long long ));
	printf("\nAn unsigned char     is %d bytes", sizeof( unsigned char ));
	printf("\nAn unsigned int      is %d bytes", sizeof( unsigned int ));
	printf("\nAn unsigned short    is %d bytes", sizeof( unsigned short ));
	printf("\nAn unsigned long     is %d bytes", sizeof( unsigned long ));
	printf("\nAn unsigned long long is %d bytes\n", sizeof(unsigned long long));
	 
	printf("\nA float     is %d bytes", sizeof( float ));
	printf("\nA double     is %d bytes\n", sizeof( double ));
	printf("\nA double long     is %d bytes\n", sizeof( double long ));

	
}

//Chapter 3 - displaying and demonstrating variables and constants

//define a constant to convert number of laps to miles
#define LAPS_PER_MILE 4
const int currentYear = 2020;
//declare needed variables
float milesCovered;
int lapsRun, yearOfBirth, currentAge;


void lapCounter() 
{

	//Data input from user
	printf(" How many laps did you run: ");
	scanf_s(" %d", &lapsRun);
	printf(" Enter your year of birth: ");
	scanf_s("%d", &yearOfBirth);

//Perform conversions
	milesCovered = (float)lapsRun / LAPS_PER_MILE;
	currentAge = currentYear - yearOfBirth;

//Displaying results
	printf("\nYou ran % .2f miles.", milesCovered);
	printf("\nNot bad for someone turning %d this year?\n", currentAge);



}

#define CURRENTYEAR 2020

int birthYear, age;

void leapYearCalc()
{
	printf("Enter the year you were born: ");
	scanf_s("%d", &birthYear);

	//Two tests to calcualte Legal age and LeapYear birth

	if (birthYear % 4 == 0)
		printf("You were born in a leap year?\n");
	else
		printf("You were not born on a leap year? \n");

	age = CURRENTYEAR - birthYear;

	//Can check voting age and legal drinking age

	if (age >= 18)
		printf("You are allowed to vote this year!\n");
	else
		printf("You are not allowed to vote this year!\n");

	//Drinking age
	 
	if (age <= 21)
		printf("it is illegal for you to have a drink!\n");
	else
		printf("Have fun getting hammered!\n");



}

bool isFullyDivisible(int x, int y)
{
	return x % y == 0;
}

typedef struct {
	char first_name[50];
	char last_name[50];
	int age;
	char address[50];
} person;

void changeFirstName(person* person, char newName[50]) {
	strcpy_s(person->first_name, sizeof(char) * 50, newName);
}



#define MAXCOUNT 20
int count;
int forCount(void)
{
	for (count = 1; count <= MAXCOUNT; count++)
		printf("%d\n", count);
	return 0;
}

float do_it(char1, char2, char3){}

void printANumber(int a);



int multCalc(int s, int z)
{
	
	return (s * z);
}

int divide(int first_number, int second_number)
{
	int answer = 0;
	if (second_number != 0)
		answer = 0;
	else
		answer = first_number / second_number;
		return answer;
}
float e, f, g, l, q, answer;

float average(float e, float f, float g, float l, float q);

float mainAve(float e, float f, float g, float l, float q)
{
	puts("Enter five numbers\n");
	scanf_s("%f,%f,%f,%f,%f", &e, &f, &g, &l, &q);

	answer = average(e, f, g, l, q);

	printf("The average is %f.\n", answer);
	return 0;
}

float average(float a, float b,float c, float d, float e)
{
	return ((a + b + c + d + e) / 5);
}

/*long listHeader[50];
long listHeader[49] = 123.456;


for(x = 0; x <= 100; x += 3);

int x = 1;
while(x <= 100)
{
	x += 3;
	return 0;
}
int doWhile(int x)
{
	int x = 1;
	do
	{
		x += 3;
	} while (x <= 100);
	return 0;
}
/*/


int answer_getBack, value_1, value_2;
int get_back()
{
	printf("Enter two numbers to be added:    ");
	
	scanf_s("%d %d", &value_1, &value_2);
	if (value_1 == 99)
	{
		puts("hey there you won by inputting 99");
	}
	else (value_1 % 2 != 0 || value_2 % 2 != 0);
	{ 
		printf("Your mom u can't do that because your bum ass numbers are odd numbers");

		puts("\nRestate numbers: ");
		scanf_s(" %d %d", &value_1, &value_2);
	}
	answer_getBack = value_1 + value_2;

	printf("The value of these intergers added is %d", answer_getBack);

	return 0;
	
	
	/*
	if (value_1 == 3 && value_2 == 3)
	{
		printf("Your mom u can't do that");

		return 0;	
	}
	else
	{
		answer_getBack = value_1 + value_2;

		printf("The value of these intergers added is %d", answer_getBack);
	}
	/**/
}

/*/
int array[6], t , value_3 ;
int get_back_supreme()
{
	puts("Enter an integer to be added: \n 99 to quit    ");

	scanf_s(" %d ", &value_3);
	
	
	for (t = 0; t > 6 && value_3 != 99; t++)
	{
		
		while (value_3 % 2 == 1 && value_3 != 99)
		{
			puts("These are not even numbers please put even numbers.");
			puts("\nRestate numbers: ");

			scanf_s(" %d ", &value_3);
		}
		array[t] = value_3;

		for (t = 0; t < 6 && array[t] != 99;)
		{
			printf(" The value entered is %d", array[t]);
			

		}
		return 0;
	}
}
/*/
/*
int array1[10][10][10];
int array2[10][10][10];
int array3[10][10][10]; 

int aray1[10] = { 1,1,1,1,1,1,1,1,1,1};

int eightyEight[88];
int x;

for (x = 0; x >= 0 && x < 88; x++)
{
	eightyEight[x] = 88;
}
/*/
/*
int stuff[12][10];
int o, r;

for (o = 0; o > 0 && o < 12; o++)
{
	for (r = 0; r > 0 && r < 10; r++)
	{
		stuff[12][10] = 0;
	}
}
/*/

//srand(time(NULL));//

int stuffArray[5][4];
int sub1, sub2;


int twoDimensions()
{

	for (sub1 = 0; sub1 >= 0 && sub1 < 5; sub1++)
	{
		for (sub2 = 0; sub2 >= 0 && sub2 < 4; sub2++)
		{
			stuffArray[sub1][sub2] = rand();
		}
	
	}
	for (sub1 = 0; sub1 >= 0 && sub1 < 5; sub1++)
	{
		for (sub2 = 0; sub2 >= 0 && sub2 < 4; sub2++)
		{
			printf(" %d\t", stuffArray[sub1][sub2]); //prints value of each individual variable
		}
		printf("\n");    //Goes to next line//
	}
	return 0;
}


int pointerPractice()
{
	//demonstrate basic pointer use//
	 
	//declare and initialize an int variable//

	int var = 1;

	//declare a pointer to int//
	int* varPoint;
	
	//initialize pointer to varible//
	varPoint = &var;

	//access var directyl and indirectly//
	printf("\n Direct acess, var = %d", var);
	printf("\n Indirect acess, var = %d", *varPoint);

	// display adresses in two ways//
	printf("\nThe adress of Var = %p", &var);
	printf("\nThe adress of Var = %p", varPoint);
}

int pointAdress()
{
	//declare counter//
	int ctr;
	short array_s[10];
	float array_f[10];
	double array_d[10];


	//heading//
	printf("\t\tshort\t\tfloat\t\tdouble");

	printf("\n==================================================");

	//print adresses of arrays//

	for (ctr = 0; ctr < 10; ctr++)
		printf("\nElement %d: \t%p\t\t%p\t\t%p", ctr, &array_s[ctr], &array_f[ctr], &array_d[ctr]);

	printf("\n==================================================");

	return 0;




}








int sumArrays();
int counter, ctr, ctor, sumOfct, sumOfcs, sumOfBoth;





sumArrays()
{
	
		
		//declare arrays dont initialize//
	    int array_ct[4];
		int	array_cs[4];
	
		//length of arrays//
		int n_ct = sizeof(array_ct) / sizeof(array_ct[0]);
		int n_cs = sizeof(array_cs) / sizeof(array_cs[0]);
   
		
	//ARRAY_CT values input//
	printf("Array_ct values: \nvalue 1: ");
	scanf_s("%d", &array_ct[0]);
	
	printf("Array_ct values:  \nvalue 2:  ");
	scanf_s("%d", &array_ct[1]);
	
	printf("Array_ct values:  \nvalue 3:  ");
	scanf_s("%d", &array_ct[2]);
	
	printf("Array_ct values:  \nvalue 4:  ");
	scanf_s("%d", &array_ct[3]);
	
	
	//ARRAY_CS Values input//
	printf("\n\nArray_cs values: \nvalue 1: ");
	scanf_s("%d", &array_cs[0]);
	
	printf("Array_cs values:  \nvalue 2:  ");
	scanf_s("%d", &array_cs[1]);
	
	printf("Array_cs values:  \nvalue 3:  ");
	scanf_s("%d", &array_cs[2]);
	
	printf("Array_cs values:  \nvalue 4:  ");
	scanf_s("%d", &array_cs[3]);

	
	
	//SUM of ARRAY_CT//
	for (ctr = 0; ctr < n_ct; ctr++)
	{
		sumOfct += array_ct[ctr];
	}
	printf("\nThe sum of Array_ct is: %d", sumOfct);
	
	//SUM of ARRAY_CS//
	for (ctor = 0; ctor < n_cs; ctor++)
	{
		sumOfcs += array_cs[ctor];
	}
	printf("\nThe sum of Array_cs is: %d", sumOfcs);
	

	// Adding both sums together//
	sumOfBoth = sumOfct + sumOfcs;
	printf("\nThe sum of both these array together is: %d", sumOfBoth);
	
	return 0;
}

int addArrays();
int addArrays()
{
	int arraytd[4];
	int arrayts[4];
	int arrayTDS[4];
	int ctr;

	//ARRAY_Td values input//
	printf("Array td values: \nvalue 1: ");
	scanf_s("%d", &arraytd[0]);

	printf("Array td values:  \nvalue 2:  ");
	scanf_s("%d", &arraytd[1]);

	printf("Array td values:  \nvalue 3:  ");
	scanf_s("%d", &arraytd[2]);

	printf("Array td values:  \nvalue 4:  ");
	scanf_s("%d", &arraytd[3]);


	//ARRAY_CS Values input//
	printf("\n\nArray ts values: \nvalue 1: ");
	scanf_s("%d", &arrayts[0]);

	printf("Array ts values:  \nvalue 2:  ");
	scanf_s("%d", &arrayts[1]);

	printf("Array ts values:  \nvalue 3:  ");
	scanf_s("%d", &arrayts[2]);

	printf("Array ts values:  \nvalue 4:  ");
	scanf_s("%d", &arrayts[3]);

	
	//Add Same element array value and input to Array TDS//
	printf("\n\n\nElement values of ArrayTd and ArrayTs will be added together one element at a time and the sum of each of these elements will be stored in a third array named Array TDS\n");
	
	for (ctr = 0; ctr <= 3; ctr++)
	{
		arrayTDS[ctr] = arraytd[ctr] + arrayts[ctr];
		printf("\nThis is sum of element number %d from ArrayTd and ArrayTs. The sum of this element in ArrayTDS is %d", ctr, arrayTDS[ctr]);

	}

	
	return 0;
}
#define SIZES 10

/*int arrayCopier()
{
	void copyArrays(int orig[], int newOne[])
	{
		int ctr = 0;
		for (ctr = 0; ctr < SIZES; ctr++)
		{
			newOne[ctr] = orig[ctr];
		}
	}



	int ctr = 0;
	int a[SIZES] = { 1,2,3,4,5,6,7,8,9,10 };
	int b[SIZES];

	//Values before copy//
	for (ctr = 0; ctr < SIZES; ctr++)
	{
		printf("Values before copy : a[%d] = %d, b[%d] = %d", ctr, a[ctr], ctr, b[ctr]);
	}

	copyArrays(a[], b[]);

	//Values after copy//
	for (ctr = 0; ctr < SIZES; ctr++)
	{
		printf("Values after copy : a[%d] = %d, b[%d] = %d", ctr, a[ctr], ctr, b[ctr]);

		return 0;
	}
}
/*/





	


//STRUCTURES CHAPTER 11//
/*struct time {
	int x;
	int y;
	int z;
} timeLoop = {"2", "4", "6"};

struct data {
	int x;
	float value2;
	float value3;

} info;
struct data* ptr;
ptr->value2 = 5.5;
(*ptr).value3 = 5.5;

struct data2 {
	char arrays[21];
};



	struct comeOn {
		char address[30];
		char adress2[30];
		char city[30];
		char state[30];
		long zip[20];
	} RECORD;
	RECORD myAdress = { "peachtree", "cresent", "sauga", "missouri", 302010 };
	*/




/*/
struct {
	
};
	int findArea()
	{
		int length, width;
		long area;

		//input coordinates//
		printf("\n Enter Top left X coordinate: ");
		scanf_s("%d", &myBox.topLeft.x);

		printf("\n Enter Top left y coordinate: ");
		scanf_s("%d", &myBox.topLeft.y);

		printf("\n Enter bottom right X coordinate: ");
		scanf_s("%d", &myBox.bottomRight.x);

		printf("\n Enter bottom right x coordinate: ");
		scanf_s("%d", &myBox.bottomRight.y);
		// determine width and height//

		width = myBox.bottomRight.x - myBox.topLeft.x;
		length = myBox.topLeft.y - myBox.bottomRight.y;

		// calculate area and print//

		area = width * length;
		printf("The area of this rectangle is %ld units", area);





	}
	/**/


	/*/
	char* compareStrings(char* a, char* b);

	int yurMom()
	{
		char* A = "hello";
		char* B = "world";
		char* longer;

		longer = compareStrings( A, B );

		printf(" THe longer string is: %s", longer);

	}
	char* compareStrings(char* First, char* Second)
	{
		int x;
		int y;

		x = strleng(First);
		y = strleng(Second);

		if (x > y)
		{
			return (First);
		}
		else
		{
			return (Second);
		}

	}
	/*/
	/*/
	char* putTogether(char* a, char* b);

	void yourMom()
	{
		char* c = "hello";
		char* d = "World";
		char* e;





	}
	char* putTogether(char* First, char* Second)
	{
		const len1 = 6;
		const len2 = 6;

		char result = malloc(len1 + len2 + 1);

		char* final = char* First + char* Second;
		register int varible = 3;
	}
	/*/
	
	
	void printBich(int y);
	void printDis()
	{
		int var = 10;
		printf("%d\n", var);
		printBich(var);
	}
	void printBich(int y) 
	{
		printf("%d", y);

	}


	


	/**
	struct myReply {
		int a;
		int b;
		int opInput;
	} yoloReply;
	
	//gets input//
	reply()
	{
		int a, b, opInput;
		printf("\n Put in two numbers you want to input:\n");
		scanf_s("%d %d", &yoloReply.a, &yoloReply.b);

		printf("Now type in which operator you want to use 1-5. 6 to exit :");
		scanf_s("%d", &yoloReply.opInput);


		return reply;
	}
int calculator()
	{
		int answer;
		//menu//
		printf("Menu\n");

		printf("Input 1 to perform addition.\n");
		printf("Input 2 to perform subtraction.\n");
		printf("Input 3 to perform multiplication.\n");
		printf("Input 4 to perform division.\n");
		printf("Input anything else to exit\n\n");


		printf("Input your reply");
		reply();
		//Switch to see which operator to use then what to do with inputted values//
		switch (yoloReply.opInput)
		{
		
		case 1:
			answer = yoloReply.a + yoloReply.b;
			printf("\nThe answer of two numbers added is: %d", answer); 
				break;
		
		case 2:
			answer = yoloReply.a - yoloReply.b;
			printf("\nThe answer of two numbers subtracted is: %d", answer);
			break;
		
		case 3:
			answer = yoloReply.a * yoloReply.b;
			printf("\nThe answer of two numbers multiplied is: %d", answer);
			break;
		
		case 4:
			answer = yoloReply.a / yoloReply.b;
			printf("\nThe answer of two numbers divided is: %d", answer);
			break;
		
		default:
			printf("This will force you to exit.");
		}
		
		
		//If statement but switch is better since more conditions.

		
		if (yoloReply.opInput == 1)
		{
			answer = yoloReply.a + yoloReply.b;
			printf("\nThe answer of two numbers added is: %d", answer);
		}
		else if (yoloReply.opInput == 2)
		{
			answer = yoloReply.a - yoloReply.b;
			printf("\nThe answer of two numbers subtracted is: %d", answer);
		}
		else if (yoloReply.opInput == 3)
		{
			answer = yoloReply.a * yoloReply.b;
			printf("\nThe answer of two numbers multiplied is: %d", answer);
		}
		else if (yoloReply.opInput == 4)
		{
			answer = yoloReply.a / yoloReply.b;
			printf("\nThe answer of two numbers divided is: %d", answer);
		}
		else if (yoloReply.opInput == 5)
		{
			printf("\n You are to exit.");
	
		}
		
	}
	/*/
	/*/
	int waysToScan()
	{
		int i1;
		int i2;
		int l1;

		double d1;
		char buf1[80];
		char buf2[80];

		//using the l modifier to enter long integers and doubles.//

		puts("Enter an integer and a floating point number.");
		scanf_s("%ld %lf", &l1, &d1);
		printf("\nYou entered %ld and %lf.\n", l1, d1);
		puts("The scanf() format string used the 1 modifier to store");
		puts("Your input in a type long and type double.\n");

		fflush(stdin);

		//use field width to split input//

		puts("enter a 5 digit integer (for example, 54532).");
		scanf_s("%2d%3d, &i1, &i2");

		printf("you entered %d and %d.\n", i1, i2);
		puts("Note how the field width specidier in the scanf() format.");
		puts("String spolit your input into two values .\n");

		fflush(stdin);

		//using an excluded space to split a line of input into two strings at the space

		puts("Enter your first and last names seperated by a space.\n");
		scanf_s("%[^   ]%s", buf1, buf2);
		printf("Your first name is %s\n", buf1);
		printf("your last name is %s. \n", buf2);

		puts("note how [^ ] in the scanf() format string, by excluding.");
		puts("\n the space character, caused the input to be split ");

			return 0;

	}

	/*/

	int cmonNow()
	{

	
	

	int count;
	char urMom[30];

	for (count = 0; count <= 30; count++)
	{
		printf("Type your character in one at a time\n");
		scanf_s("%c", &urMom[count]);

		if (urMom[count] == '*')
			break;
	}

		printf("THe string you entered is: \n %s", urMom);

	

	return 0;
	

	}
	


	char hopeThisWorks()
	{
		int count,ctr;
		char var = 'x';
		char xArray[12][12];

		char *ptrArray = xArray;
		char *pArray = xArray[0];
		

		//first for loop to target first column//
		for (count = 0; count < 11; count++)
		{
			//second for loop to get into second 12 char array//
			for (ctr = 0; ctr < 11; ctr += 2)
			{
				xArray[count][ctr] = var;
				printf("Column %d number %d contains %c\n ", count, ctr, pArray[ctr]);
				
			}
			printf("\n Next column\n");
			
		}


	}
	
	
	//Chapter 16 

	//prototype
	double square(double x);
	//pointer declaration//
	double (*ptr)(double x);
	//initialize

	int pointerMane(void)
	{
		ptr = square;
		//call square two ways//
		printf("%f  %f\n", square(6, 6), ptr(6, 6));
		return 0;

	}

	double square(double x)
	{
		return x * x;
	}
	/*/
	char hopeThisWorksv2()
	{
		char var = 'x';
		char xArray[12][12];

		char* ptrArray = xArray;
		char* pArray = xArray[0];


		//first for loop to target first column//
		for (; *ptrArray < 11; ptrArray++)
		{
			//second for loop to get into second 12 char array//
			for (; *pArray < 11; pArray += 2)
			{
				xArray[ptrArray][pArray] = var;
				printf("Column %c number %c contains %c\n ", *ptrArray, *pArray, var);

				
			}
			printf("\n Next column\n");
		}


	}
	/*/

	struct data {
		int input;			//node data
		struct data *next;	//pointer to next link 
	};
	struct data *firstNode;		//adress of first link in list
	
	//Create linked list with specified number of inputs alllowed
	void createLinkedList(int numberOfLinks);

	//sort the nodes of the list 
	void sortLinkedList(int numberOfNodes);

	//Display the entire list after inputting 
	void displayLinkedList();



	int linkedList()
	{
		int numberOfLinks;

		//initialze first node
		firstNode = NULL;

		printf("Input the number of elements in the linked list");
		scanf_s("%d", numberOfLinks);

		createLinkedList(numberOfLinks);
		sortLinkedList(numberOfLinks);
		

		printf("Sorted order is: \n");
		displayLinkedList();

		return 0;
	}
	

	void createLinkedList(int numberOfLinks)
	{
		struct  data* newNode;
		struct  data* currentNode;
		int nodeData;
		int nodeCtr;

		firstNode = (struct data*)malloc(sizeof(struct data));

		//generate a node list if memory was allocated
		if (firstNode == NULL)
		{
			printf("memory couldnt be allocated");
		}
		else
		{
			printf("Input the elements in the linked list: \n");
			scanf_s("%d", &nodeData);

			//save input data to the node
			firstNode->input = nodeData;

			//initialize pointer to next node to null since it's the end of the list
			firstNode->next = NULL;

			//Copy adress of the first node so it's saved as the current adress.
			currentNode = firstNode;

			//loop until the specified number of nodes are generated
			for (nodeCtr = 2; nodeCtr <= numberOfLinks; nodeCtr++)
			{
					newNode = (struct data*)malloc(sizeof(struct data));
					//exit if memory not allocated.
					if (newNode == NULL)
					{
						printf("memory not allocated");
						break;
					}
					else
					{
						scanf_s("%d", &nodeData);

						//save input data to the new node
						newNode->input = nodeData;
						//initialize pointer the the next node to NULL
						newNode->next = NULL;

						//append to the new node to the last node of the list
						currentNode->next = newNode;
						//set new node as current node 
						currentNode = currentNode->next;
					}
			}
		}
	}


	void sortLinkedList(int numberOfLinks)
	{
		int nodeCtr;
		int ctr;
		int nodeDataCopy;
		struct data* currentNode;
		struct data* nextNode;
	
		//loop until all nodes are sorted in increasing order
		for (nodeCtr = numberOfLinks - 2; nodeCtr >= 0; nodeCtr++)
		{
			currentNode = firstNode;
			nextNode = currentNode->next;

			//loop unitl smallest value rises to the top
			for (ctr = 0; ctr <= nodeCtr; ctr++)
			{
				//SWITCH DATA AROUND IF CURRENT NODE IS LARGER THAN NEXT NODE 

				if (currentNode->input > nextNode->input)
				{
					nodeDataCopy = currentNode->input;
					currentNode->input = nextNode->input;
					nextNode->input = nodeDataCopy;

				}

				//traverse to next nodes
				currentNode = nextNode;
				nextNode = nextNode->next;
			}

		}
	
	
	}

	void displayLinkedList()
	{
		struct data* currentNode;

		//set adress for first node 
		currentNode = firstNode;

		// loop untill all the nodes are traversed

		while (currentNode != NULL)
		{
			printf("%d\t", currentNode->input);

			//traversed to next node
			currentNode = currentNode->next;
		}
	}

	//int displayContent(filename1);//
	//int displayContent();//
	/*/
	struct cmon
	{
		int input;
	} cmon1;

	int firstRealFile()
	{

		FILE* firstRealOne;
		int c, count, plzArray[10];

		for (count = 0; count < 10; count++)
		{
			plzArray[count] = count * 3;
		}
		
		
			//open file to write inside
		//if (firstRealOne = fopen("firstRealOne", "w") == NULL)//

			fopen("firstRealOne", "w");
		/*/
		
		/*/
		
	

			fwrite(plzArray, sizeOf(int), 10, firstRealOne);
		
			//close the file
			fclose(firstRealOne);


		//open to read file
		//if (firstRealOne = fopen("firstRealOne", "r") == NULL || 0 )//
		fopen("firstRealOne", "r");

		//once file opened display the content with a seperate function//
		//displayContent(firstRealOne);//
		


		while ((c = getw(firstRealOne) != NULL))
		{
			printf("Character Obtained: %c", c);
		}
		
		fclose(firstRealOne);
		return 0;
	}
	/**

	/*//**/
	
	char displayContent(filename1)
	{
		char c;
		

		while ((c = getc(filename1) != NULL))
		{
			printf("Character Obtained: %c", c);
		}
		
		
	}
	

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

	int coper()
	{
		FILE* firstFile;
		FILE* copyFIle;
		char ch;
		char sentence[20] = { "this is my sentence" };

		if (firstFile = fopen("firstFile", "w") == NULL)
			{
			printf("AN error occured opening the file");
			}
		fprintf(firstFile, "%s", sentence);
		fclose(firstFile);

		if (copyFIle = fopen("copyFile", "w") == NULL)
		{
			printf("Error opening Copy file");
		}

		if (firstFile = fopen("firstFile", "w") == NULL)
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

