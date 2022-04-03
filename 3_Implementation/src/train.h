

//Struct
typedef struct mynode {
	char name[20];
	char g[6];
	int age;
	struct mynode* link;
} Node;

Node* start = NULL;

void data(int);
int seatno(int);
int class(int, int, int);
void review(int, int);


char source[20], des[20], train[40];
char station[40], cla[40];
int time1, time2, a[55];

// charges in class
int class(int x1, int x2, int h)
{
	int b, c, i, t, r, n;
	printf("\t\tSelection your Class......\n");
	printf("\t\t1. Slepper Class....\n");
	printf("\t\t2. A C Class.......\n");
	scanf("%d", &i);
	switch (i) {
	case 1: {
		strcpy(cla, "Slepper Class");
		b = x2 * h;
		c = b + (b * 0.18);
	} break;
	case 2: {
		printf("\t\tEnter tier....\n");
		printf("\t\t1. 3 Tier....\n");
		printf("\t\t2. 2 Tier....\n");
		printf("\t\t3. First Class A.C.....\n");
		scanf("%d", &n);
		switch (n) {
		case 1: {
			strcpy(cla, "3 Tier");
			b = x1 * h;
			c = b + (b * 0.18);
		} break;
		case 2: {
			strcpy(cla, "2 Tier");
			b = (x1 + 1000) * h;
			c = b + (b * 0.18);
		} break;
		case 3: {
			strcpy(cla, "First Class");
			b = (x1 + 1000) * h;
			c = b + (b * 0.18);
		} break;
		default: {
			printf("\t\tYou have entered a Wrong option Please Try Selecting Again\n");
		}
		}
	} break;
	default: {
		printf("\t\tPlease Enter Correct Option.\n");
	}
	}
	return c;
}
///info
void info(char lol[20], char der[6], int b)
{
	Node *newptr = NULL, *ptr;
	newptr = (Node*)malloc(sizeof(Node));
	strcpy(newptr->name, lol);
	strcpy(newptr->g, der);
	newptr->age = b;
	newptr->link = NULL;
	if (start == NULL)
		start = newptr;
	else {
		ptr = start;
		while (ptr->link != NULL)
			ptr = ptr->link;
		ptr->link = newptr;
	}
}
//passenger data
void data(int k)
{
	int i, a;
	char nam[20], g[6];
	for (i = 1; i <= k; i++) {
		printf(" %d Passenger Name: ", i);
		fflush(stdin);
		gets(nam);
		printf(" %d Passenger Gender: ", i);
		fflush(stdin);
		gets(g);
		printf(" %d Passenger Age: ", i);
		fflush(stdin);
		scanf("%d", &a);

		// Calling info() function
		info(nam, g, a);
	}
}

//seat selection
int seatno(int p)
{
	int i;
	printf("\t		 -:Seat Selection:-	 \n");
	printf("\t(U) (M)	 (L) (L) "
		" (U)\n\n");
	printf("\t01    02	  03    04	  05\n");
	printf("\t06    07	  08    09	  10\n");
	printf("\t11    12	  13    14	  15\n");
	printf("\t16    17	  18    19	  20\n");
	printf("\t21    22	  23    24	  25\n");

	printf("\t26    27	  28    29	  30\n");
	printf("\t31    32	  33    34	  35\n");
	printf("\t36    37	  38    39	  40\n");
    printf("\t41    42	  43    44	  45\n");
    printf("\t46    47	  48    49	  50\n");

    printf("\t51    52	  53    54	  55\n");
	printf("\t56    57	  58    59	  60\n");

	printf("\t61    62	  63    64	  65\n");
	printf("\t66    67	  68    69	  70\n");
	
	printf("\t71    72	  73    74	  75\n");
	printf("\t76    77	  78    79	  80\n");

	printf("\t81    82	  83    84	  85\n");
	printf("\t86    87	  88    89	  90\n");

	printf("\t91    92	  93    94	  95\n");
	printf("\tEnter Seat Numbers: \n");
	for (i = 0; i < p; i++)
		scanf("%d", &a[i]);
}

//review of all the details
void review(int y, int j)
{
	int i;
	Node* ptr = start;
	for (i = 1; i <= j; i++) {
		printf("\t\t\%d Passenger Name: ", i);
		puts(ptr->name);
		printf("\t\t%d           Gender: ", i);
		puts(ptr->g);
		printf("\t\t%d           Age: %d\n\n", i,
			ptr->age);
		ptr = ptr->link;
	}
	printf("\t\tSource Place: ");
	puts(source);
	printf("\t\tDestination Place: ");
	puts(des);
	printf("\t\tThe Boarding Station: ");
	puts(station);
	printf("\t\tTrain Is: ");
	puts(train);
	printf("\t\tClass: ");
	puts(cla);
	printf("\t\tBoarding Time: %d:%d\n", time1, time2);
	printf("\t\tTotal Charges: %d\n", y);
	printf("\t\tSeats Are: \n");
	for (i = 0; i < j; i++) {
		printf("\t\t%d ", a[i]);
	}
	printf("\n");
	printf("\t\t\t\t....HAPPY JOURNEY.....\n");
}