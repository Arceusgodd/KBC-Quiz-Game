#include<stdio.h>
#include<conio.h>
#include<ctype.h>
#include<stdlib.h>
#include<string.h>
#include<malloc.h>
struct node{
float data;
struct node* link;
};
struct node* start=NULL;
float sc;
char nm[20];
float sc;
char nm[20];
char name[20];
float scr;
void insert(float score);
int display();
void show_record();
void reset_score();
void help();
void edit_score(float , char []);
int main()
     {
     	int countr,r,r1,count,i,n;
     	float score;
		char playername[20];
     	char choice;
     
     mainhome:
     system("cls");
     printf("\t\t\t| QUIZZ GAME |\n");
     printf("\n\t\t________________________________________");

     printf("\n\t\t\t   WELCOME ");
     printf("\n\t\t\t      to ");
     printf("\n\t\t\t   THE GAME ");
     printf("\n\t\t________________________________________");
     printf("\n\t\t________________________________________");
     printf("\n\t\t   BECOME A MILLIONAIRE!!!!!!!!!!!    ") ;
     printf("\n\t\t________________________________________");
     printf("\n\t\t________________________________________");
     printf("\n\t\t > Press S to start the game");
     printf("\n\t\t > Press V to view the highest score  ");
     printf("\n\t\t > Press R to reset score");
     printf("\n\t\t > press H for help            ");
     printf("\n\t\t > press Q to quit             ");
	 printf("\n\t\t > press W to display list     ");
     printf("\n\t\t________________________________________\n\n");
     choice=toupper(getch());
     if (choice=='V')
	{
	show_record();
	goto mainhome;
	}
     else if (choice=='H')
	{
	help();getch();
	goto mainhome;
	}
	else if (choice=='R')
	{reset_score();
	getch();
	goto mainhome;}
	else if (choice=='Q')
	exit(1);
	else if (choice =='W')
	{display();
		getch();
	goto mainhome;}
    else if(choice=='S')
    {
     system("cls");

    printf("\n\n\n\n\n\n\n\n\n\n\t\t\tResister your name:");
     gets(playername);

    system("cls");
    printf("\n ------------------  Welcome %s to Quizz Game !!! --------------------------",playername);
    printf("\n\n Here are some tips you might wanna know before playing:");
    printf("\n -------------------------------------------------------------------------");
    printf("\n >> There are 2 rounds in this Quiz Game,WARMUP ROUND & CHALLANGE ROUND");
    printf("\n >> In warmup round you will be asked a total of 3 questions to test your");
    printf("\n    general knowledge. You are eligible to play the game if you give atleast 2");
    printf("\n    right answers, otherwise you can't proceed further to the Challenge Round.");
    printf("\n >> Your game starts with CHALLANGE ROUND. In this round you will be asked a");
    printf("\n    total of 10 questions. Each right answer will be awarded $100,000!");
    printf("\n    By this way you can win upto ONE MILLION cash prize!!!!!..........");
    printf("\n >> You will be given 4 options and you have to press A, B ,C or D for the");
    printf("\n    right option.");
    printf("\n >> You will be asked questions continuously, till right answers are given");
    printf("\n >> No negative marking for wrong answers!");
    printf("\n\n\t!!!!!!!!!!!!! ALL THE BEST !!!!!!!!!!!!!");
    printf("\n\n\n Press Y  to start the game!\n");
    printf("\n Press any other key to return to the main menu!");
    if (toupper(getch())=='Y')
		{
		    goto home;
        }
	else
		{
        goto mainhome;
       system("cls");
       }

     home:
     system("cls");
     count=0;
     for(i=1;i<=3;i++)
     {
    system("cls");
     r1=i;


     switch(r1)
		{
		case 1:
		printf("\n\nWhat least number must be added to 1056, so that the sum is completely divisible by 23 ?");
		printf("\n\nA.15\t\tB.30\n\nC.2\t\tD.50");
		if (toupper(getch())=='C')
			{
			    printf("\n\nCorrect!!!");count++;
			    getch();
			    break;
}
		else
		       {
		           printf("\n\nWrong!!! The correct answer is C.2");
		           getch();
		       break;
		       }

        case 2:
		printf("\n\n\nWhat country was known as Ceylon until 1972?");
		printf("\n\nA.France\t\tB.Denmark\n\nC.Sri Lanka\t\tD.Finland");
		if (toupper(getch())=='C')
			{printf("\n\nCorrect!!!");count++;
			getch();
			break;}
		else
		       {printf("\n\nWrong!!! The correct answer is C.Sri Lanka");
		       getch();
		       break;}

        case 3:
		printf("\n\n\nWhich is the largest mammals?");
		printf("\n\nA.Polar Bear\t\tB.Blue Whale\n\nC.Hippopotamus\t\tD.Elephant");
		if (toupper(getch())=='B')
			{printf("\n\nCorrect!!!");count++;
			getch();
			break;}
		else
		       {printf("\n\nWrong!!! The correct answer is B.Blue Whale");
		       getch();
		       break;}

        case 4:
		printf("\n\n\nWho is the only teenager to score in FIFA WORLD CUP after Pele?");
		printf("\n\nA.Neymar Jr.\t\tB.Kylian Mbappe\n\nC.Lionel Messi\t\tD.Christiano Ronaldo");
		if (toupper(getch())=='B')
			{printf("\n\nCorrect!!!");count++;
			getch();
			 break;}
		else
		       {printf("\n\nWrong!!! The correct answer is B.Kylian Mbappe");
		       getch();
		       break;}

        case 5:
        printf("\n\n\nWhich is the highest mountain in the continent of Antarctica?");
        printf("\n\nA.Mt. Erebus\t\tB.Mt. Vinson\n\nC.Mt. Makalu\t\tD.Mt. Kilimanjaro");
        if (toupper(getch())=='B')
               {printf("\n\nCorrect!!!");count++;
               getch();
                break;}
        else
		       {printf("\n\nWrong!!! The correct answer is B.Mt. Vinson");
		       getch();
		       break;}

        case 6:
		printf("\n\n\nWhich country has 3 capital?");
		printf("\n\nA.China\t\tB.India\n\nC.USA\t\tD.South Africa");
		if (toupper(getch())=='D' )
			{printf("\n\nCorrect!!!");count++;
			getch();
			break;}
		else
		       {printf("\n\nWrong!!! The correct answer is D.South Africa");
		       getch();
		       break;}}
		       }

	if(count>=2)
	{goto test;}
	else
	{
	system("cls");
	printf("\n\nSORRY YOU ARE NOT ELIGIBLE TO PLAY THIS GAME, BETTER LUCK NEXT TIME");
	getch();
	goto mainhome;
	}
     test:
     system("cls");
     printf("\n\n\t*** CONGRATULATION %s you are eligible to play the Game ***",playername);
     printf("\n\n\n\n\t!Press any key to Start the Game!");
     if(toupper(getch())=='p')
		{goto game;}
game:
     countr=0;
     for(i=1;i<=10;i++)
     {system("cls");
     r=i;

     switch(r)
		{
		case 1:
		printf("\n\nWhich is the country with the longest national anthem?");
		printf("\n\nA.Great Britain\t\tChina\n\nC.Greece\t\tD.North Korea");
		if (toupper(getch())=='C')
			{printf("\n\nCorrect!!!");countr++;getch();
			 break;getch();}
		else
		       {printf("\n\nWrong!!! The correct answer is C.Greece");getch();
		       goto score;
		       break;}

		case 2:
		printf("\n\n\nStudy of Flags is called............,");
		printf("\n\nA.Vexillology\t\tB.Cartography\n\nC.Orology\t\tD.Etimology");
		if (toupper(getch())=='A')
			{printf("\n\nCorrect!!!");countr++;getch();
			 break;}
		else
		       {printf("\n\nWrong!!! The correct answer is A.Vexillology");getch();
		      goto score;
		       break;
		       }

        case 3:
		printf("\n\n\nAmong the top 10 highest peaks in the world, how many lie in Nepal? ");
		printf("\n\nA.6\t\tB.7\n\nC.8\t\tD.9");
		if (toupper(getch())=='C')
			{printf("\n\nCorrect!!!");countr++;getch();
			 break;}
		else
		       {printf("\n\nWrong!!! The correct answer is C.8");getch();
		       goto score;
		       break;}

        case 4:
		printf("\n\n\nWho invented AC Electricity?");
		printf("\n\nA.Tesla\t\tB.Newton\n\nC.Maxwell\t\tD.Coulomb");
		if (toupper(getch())=='A')
			{printf("\n\nCorrect!!!");countr++;getch();
			 break;}
		else
		       {
                printf("\n\nWrong!!! The correct answer is A.Tesla");getch();
		       goto score;
		       break;
		       }

        case 5:
		printf("\n\n\nWhich is the largest unit of distance?");
		printf("\n\nA.Kilometer\t\tB.Gigaparsec\n\nC.Light Year\t\tD.Units");
		if (toupper(getch())=='B')
			{printf("\n\nCorrect!!!");countr++;getch(); break;}
		else
		       {
		           printf("\n\nWrong!!! The correct answer is B.Gigaparsec");
		       getch();
		       goto score;
		       break;
		       }

		case 6:
		printf("\n\n\nWhich is an alternative name of Vitamin K?");
		printf("\n\nA.Tocotrienol\t\tB.Phylloquinone\n\nC.Calciferol\t\tD.Retinol");
		if (toupper(getch())=='B' )
			{printf("\n\nCorrect!!!");countr++;getch();
			 break;}
		else
		       {printf("\n\nWrong!!! The correct answer is B.Phylloquinone");goto score;
		       getch();
		       break;}

        case 7:
		printf("\n\n\nWhat is the National Animal of Israel?");
		printf("\n\nA.Carp\t\tB.Red-billed streamertail\n\nC.Green Pheasant\t\tD.Hoopoe");
		if (toupper(getch())=='D')
			{printf("\n\nCorrect!!!");countr++;getch();
			 break;}
		else
		       {printf("\n\nWrong!!! The correct answer is D.Hoopoe");getch();
		       goto score;
		       break;}

        case 8:
		printf("\n\n\nWho conquered the seven kingdoms in the fantasy drama series 'Game Of Thrones?");
		printf("\n\nA.Tywin Lannister\t\tB.Aegon I Targaryen\n\nC.Robert Baratheon\t\tD.Torrhen Stark");
		if (toupper(getch())=='B')
			{printf("\n\nCorrect!!!");countr++;getch(); break;}
		else
		       {printf("\n\nWrong!!! The correct answer is B.Aegon I Targaryen");getch();
		       goto score;
		       break;}

        case 9:
		printf("\n\n\nWhat is the capital of Greenland?");
		printf("\n\nA.Nuuk\t\tB.Helsinki\n\nC.Ajax\t\tD.Galatasaray");
		if (toupper(getch())=='A')
			{printf("\n\nCorrect!!!");countr++; getch();
			break;}
		else
		       {printf("\n\nWrong!!! The correct answer is A.Nuuk");getch();
		       goto score;
		       break;}

        case 10:
		printf("\n\n\nWhich is the longest River in the world?");
		printf("\n\nA.Roe\t\tB.Koshi\n\nC.Ganga\t\tD.Amazon");
		if (toupper(getch())=='A')
			{printf("\n\nCorrect!!!");countr++;getch(); break;}
		else
		       {printf("\n\nWrong!!! The correct answer is A.Roe");getch();break;goto score;}

        case 11:
		printf("\n\n\nWhat is the color of the Black Box in aeroplanes?");
		printf("\n\nA.White\t\tB.Black\n\nC.Orange\t\tD.Red");
		if (toupper(getch())=='C')
			{printf("\n\nCorrect!!!");countr++;getch();
			 break;}
		else
              {printf("\n\nWrong!!! The correct answer is C.Orange");getch();
              break;goto score;}

        case 12:
		printf("\n\n\nWhich city is also known as big apple ?");
		printf("\n\nA.New York\t\tB.Vactican City\n\nC.Madrid\t\tD.Berlin");
		if (toupper(getch())=='A')
			  {printf("\n\nCorrect!!!");countr++;getch();
			   break;}
		else
              {printf("\n\nWrong!!! The correct answer is A.New York");getch();
              break;goto score;}

		case 13:
		printf("\n\n\nName the country where there no mosquitoes are found?");
		printf("\n\nA.Japan\t\tB.Italy\n\nC.Argentina\t\tD.France");
		if (toupper(getch())=='D')
			{printf("\n\nCorrect!!!");countr++;getch();
			break;}
		else
		       {printf("\n\nWrong!!! The correct answer is D.France");getch();
		       break;goto score;}

        case 14:
		printf("\n\n\nWho is the author of 'Mahabharata'?");
		printf("\n\nA.Vyasa\t\tB.Valmiki\n\nC.Satyavati\t\tD.Shantanu");
		if (toupper(getch())=='A')
			{printf("\n\nCorrect!!!");countr++;getch();
			 break;}
		else
		       {printf("\n\nWrong!!! The correct answer is A.Vyasa");getch();
		       break;goto score;}

		case 15:
		printf("\n\n\nWhich Blood Group is known as the Universal Donor?");
		printf("\n\nA.A\t\tB.O\n\nC.B\t\tD.AB");
		if (toupper(getch())=='B')
			{printf("\n\nCorrect!!!");countr++;getch();
			 break;}
		else
		       {printf("\n\nWrong!!! The correct answer is B.O");getch();
		       goto score;
		       break;}

		case 16:
		printf("\n\n\nWhat is the unit of measurement of distance between Atoms?");
		printf("\n\nA.Bond Length\t\tB.Nanometer\n\nC.Nautical Mile\t\tD.Picometer");
		if (toupper(getch())=='A')
			{printf("\n\nCorrect!!!");countr++; getch();
			break;
			}
		else
		       {printf("\n\nWrong!!! The correct answer is A.Bond Length");getch();
		       goto score;
		       break;}


		case 17:
		printf("\n\n\nThe country famous for Samba Dance is........");
		printf("\n\nA.Brazil\t\tB.Venezuela\n\nC.Nigeria\t\tD.Bolivia");
		if (toupper(getch())=='A')
			{printf("\n\nCorrect!!!");countr++; getch();
			break;}
		else
		       {printf("\n\nWrong!!! The correct answer is A.Brazil");getch();goto score;
		       break;}

		case 18:
		printf("\n\n\nWhat is the decimal of an hour is a second?");
		printf("\n\nA.0.1\t\tB.0.25\n\nC.1.0166667\t\tD.0.0166667\n\n");
		if (toupper(getch())=='D')
			{printf("\n\nCorrect!!!");countr++; getch();
			break;}
		else
		       {printf("\n\nWrong!!! The correct answer is D.0.0166667");getch();goto score;
		       break;}

		case 19:
		printf("\n\n\nWhere is the lost city of Machu Picchu located?");
		printf("\n\nA.Brazil\tB.India\n\nC.Peru\tD.Argentina\n\n");
		if (toupper(getch())=='C')
			{printf("\n\nCorrect!!!");countr++; getch();
			break;}
		else
		       {printf("\n\nWrong!!! The correct answer is C.Peru");getch();goto score;
		       break;}

		case 20:
		printf("\n\n\nWhich company developed the first computer?");
		printf("\n\nA.Dell\t\tB.Electronic Controls Company\n\nC.IBM\t\tD.S.S.I");
		if (toupper(getch())=='B')
			{printf("\n\nCorrect!!!");countr++; getch();
			break;}
		else
		       {printf("\n\nWrong!!! The correct answer is B.Electronic Controls Company");getch();goto score;
		       break;}

		case 21:
		printf("\n\n\nOzone plate is being destroyed regularly because of____ ?");
		printf("\n\nA.L.P.G\t\tB.Nitrogen\n\nC.Methane\t\tD. C.F.C");
		if (toupper(getch())=='D')
			{printf("\n\nCorrect!!!");countr++; getch();
			break;}
		else
		       {printf("\n\nWrong!!! The correct answer is D. C.F.C");getch();goto score;
		       break;}

		case 22:
		printf("\n\n\nWhich woman tennis player has won the most grand slam titles after Serena Williams?");
		printf("\n\nA.Martina Hingis\t\tB.Maria Sarapova\n\nC.Venus Williams\t\tD.Steffi Graf");
		if (toupper(getch())=='D')
			{printf("\n\nCorrect!!!");countr++; getch();
			break;}
		else
		       {printf("\n\nWrong!!! The correct answer is D.Steffi Graf");getch();goto score;
		       break;}

		case 23:
		printf("\n\n\nWhich is the only actor to receive to win an Oscar posthumously for a Superhero Film ?");
		printf("\n\nA.Peter Finch\t\tB.Walt Disney\n\nC.Heath Ledger\t\tD.Marit Allen");
		if (toupper(getch())=='C')
			{printf("\n\nCorrect!!!");countr++; getch();
			break;}
		else
		       {printf("\n\nWrong!!! The correct answer is C.Heath Ledger");getch();goto score;
		       break;}}}
	score:
    system("cls");
	score=(float)countr*100000;
	if(score>0.00 && score<1000000)
	{
	   printf("\n\n\t\t**************** CONGRATULATION *****************");
	     printf("\n\t You won $%.2f",score);goto go;}

	 else if(score==1000000.00)
	{
	    printf("\n\n\n \t\t**************** CONGRATULATION ****************");
	    printf("\n\t\t\t\t YOU ARE A MILLIONAIRE!!!!!!!!!");
	    printf("\n\t\t You won $%.2f",score);
	    printf("\t\t Thank You!!");
	}
	 else
{
	 printf("\n\n\t******** SORRY YOU DIDN'T WIN ANY CASH ********");
	    printf("\n\t\t Thanks for your participation");
	    printf("\n\t\t TRY AGAIN");goto go;}

	go:
	puts("\n\n Press Y if you want to play next game");
	puts(" Press any key if you want to go main menu");
	if (toupper(getch())=='Y')
		goto home;
	else
		{
		edit_score(score,playername);
		insert(score);
		goto mainhome;}}}

void show_record()
    {FILE *f;
	system("cls");
	f=fopen("score.txt","r");
	fscanf(f,"%s%f",&name,&scr);
	printf("\n\n\t\t*************************************************************");
	printf("\n\n\t\t %s has secured the Highest Score %0.2f",name,scr);
	printf("\n\n\t\t*************************************************************");
	fclose(f);
	getch();}

void reset_score()
    {	FILE *f;
	system("cls");
    f=fopen("score.txt","r+");
	fscanf(f,"%s%f",&nm,&sc);
	sc=0;
	fprintf(f,"%s,%.2f",nm,sc);
    fclose(f);}

void help()
	{system("cls");
    printf("\n\n                              HELP");
    printf("\n -------------------------------------------------------------------------");
    printf("\n ......................| Quizz Game |.....................");
    printf("\n >> There are two rounds in the game, WARMUP ROUND & CHALLANGE ROUND");
    printf("\n >> In warmup round you will be asked a total of 3 questions to test your general");
    printf("\n    knowledge. You will be eligible to play the game if you can give atleast 2");
    printf("\n    right answers otherwise you can't play the Game...........");
    printf("\n >> Your game starts with the CHALLANGE ROUND. In this round you will be asked");
    printf("\n    total 10 questions each right answer will be awarded $100,000.");
    printf("\n    By this way you can win upto ONE MILLION cash prize in USD...............");
    printf("\n >> You will be given 4 options and you have to press A, B ,C or D for the");
    printf("\n    right option");
    printf("\n >> You will be asked questions continuously if you keep giving the right answers.");
    printf("\n >> No negative marking for wrong answers");

	printf("\n\n\t*********************BEST OF LUCK*********************************");
}

void edit_score(float score, char plnm[20])
	{FILE *f;
	system("cls");
	f=fopen("score.txt","r");
	fscanf(f,"%s%f",&nm,&sc);
	if (score>=sc)
	  { sc=score;
	    fclose(f);
	    f=fopen("score.txt","a+");
	    fprintf(f,"%s\n%.2f",plnm,sc);
	    fclose(f);}}
void insert(float score){
	struct node* new;
	
	new=(struct node*)malloc(sizeof(struct node));
	new->data=score;
	new->link=start;
	start=new;
	
}
int display()
{
	if(start==NULL){printf("PLEASE PLAY THE GAME!!!!!!!");}
	else{struct node* ptr;
	ptr=start;
	printf("\nWinners!!!\n");
	while(ptr!=NULL)
	{
	printf(" %f\n",ptr->data);
	ptr=ptr->link;
	}
	}
}

