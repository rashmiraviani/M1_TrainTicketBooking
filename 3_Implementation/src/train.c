#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include "train.h"

void main()
{
	int i, j, a1, a2, b, c; 
	int x = 0, d, e, r;
	char o;
	printf("Enter Number Of Passengers: ");
	fflush(stdin);
	scanf("%d", &j);

	// data()
	// no. of passenger
	data(j);
	printf("Enter The Source Place: ");
	fflush(stdin);
	gets(source);
	printf("Enter The Destination Place: ");
	gets(des);
	printf("\t\tThe Following Trains "
		"Are Available.....\n");
	printf("\t\t1. Cheran Express           22:20       Chennai\n");
	printf("\t\t2. Blue Mountain            21:15       Mettupalayam\n");
	printf("\t\t3.  Thiruvalluvar Express   01:00       Kanyakumari\n");
	printf("\t\t4. Intercity Express        06:00       Chennai\n");
	printf("\t\t5. Tata Allepy              12:45       Alapuzha\n");
	scanf("%d", &i);
	do {
		switch (i) {
		case 1: {
			strcpy(train,
				"Cheran Express");
			strcpy(station,
				"Chennai");
			time1 = 22;
			time2 = 20;
			a1 = 1080;
			a2 = 450;

			
			
			d = class(a1, a2, j);
			printf("Total Bill Amount:"
				" %d\n",
				d);
		}; break;
		case 2: {
			strcpy(train,
				"Blue Mountain");
			strcpy(station,
				"Mettupalayam");
			time1 = 21;
			time2 = 15;
			a1 = 1205;
			a2 = 380;

			
			d = class(a1, a2, j);
			printf("Total Bill Amount:"
				"%d\n",
				d);
		}; break;
		case 3: {
			strcpy(train,
				" Thiruvalluvar Express");
			strcpy(station,
				"Kanyakumari");
			time1 = 01;
			time2 = 00;
			a1 = 1460;
			a2 = 532;

			
			d = class(a1, a2, j);
			printf("Total Bill Amount: %d\n", d);
		}; break;
		case 4: {
			strcpy(train, "Intercity Expresss");
			strcpy(station, "Chennai");
			time1 = 06;
			time2 = 00;
			a1 = 380;
			a2 = 799;

			
			d = class(a1, a2, j);
			printf("Total Bill Amount: %d\n", d);
		}; break;
		case 5: {
			strcpy(train, "Tata Allepy");
			strcpy(station, "Alapuzha");
			time1 = 12;
			time2 = 45;
			a1 = 3920;
			a2 = 899;

			
			d = class(a1, a2, j);
			printf("Total Bill Amount: %d\n", d);
		}; break;
		default:
			printf("Enter Correct choice.....\n");
			x = 1;
			break;
		}
	} while (x);
	printf("Now Book Your Seats......\n");

	seatno(j);


	review(d, j);
}

