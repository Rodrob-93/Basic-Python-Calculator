#include<stdio.h>
#include<conio.h>
//main program starts here...
void main()
{
	char opt;
	void his();
	void eng();
	void maths();
	clrscr();
	printf("QUIZ\n All The BEST\n");
     L1:printf("Enter your choice:\na.History\nb.English\nc.Maths\n");
	scanf("%c",&opt);
//using switch case to ask the user for a particular subject of his/her choice.
	switch(opt)
	{
		case 'a':his();
			break;
		case 'b':eng();
			break;
		case 'c':maths();
			break;
		default:printf("Invalid Option:\n");
			goto L1;
	}
	getch();
}

//this function is for history quiz....
void his()
{
	char opt1;
	int i=0;
	printf("Enter the proper option for each question i.e. p,q,r or s:\n");
	
	printf("1.Who is the Father of India?\na.Mahatma Gandhi\nb.Bal Gangadhar Tilak\nc.Lalu Prasad Yadav\nd.Narendra Modi\n");
	scanf(" %c",&opt1);

	if(opt1=='a')
		i=i+2;
	else
		i--;

       printf("2.On what date did Jallianwala Bagh Massacre took place?\na.19.04.1919\nb.13.04.1919\nc.15.04.1919\nd.13.01.1919\n");
	scanf(" %c",&opt1);
	if(opt1=='b')
		i=i+2;
	else
		i--;

	printf("3.In which Year did Subhash Chandra Bose died according to official record?\na.1943\nb.1945\nc.1948\nd.1966\n");
	scanf(" %c",&opt1);
	if(opt1=='b')
		i=i+2;
	else
		i--;

	printf("4.How many years did Chhatrapati Shivaji Maharaj lived?\na.30\nb.60\nc.50\nd.90\n");
	scanf(" %c",&opt1);
	if(opt1=='c')
		i=i+2;
	else
		i--;

	printf("5.In which year was Leonardo da Vinci was born?\na.1453\nb.1556\nc.1454\nd.1554\n");
	scanf(" %c",&opt1);
	if(opt1=='c')
		i=i+2;
	else
		i--;
//Results declared for History subject.	
       printf("History Results:\n %d/10",i);
}

//this function is for english quiz
void eng()
{
	
}

//this function is for maths quiz
void maths()
{
	
}
