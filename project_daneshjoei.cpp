// project_daneshjoei.cpp : Defines the entry point for the console application.

//==========================================
#include "stdafx.h"
#include <stdio.h>
#include <string.h>
#include <stdlib.h>
#include <conio.h>
#include <time.h>
//==========================================
struct daneshjooei{
	char lesson[5][12];
	float mark[5];
	char firstname[20],lastname[30];
	char num[19],birth[11];
	char pass[11];
	int student,let;
	float average;
};
struct ostadi{
	char firstname[20],lastname[30];
	char personel[4];
	char pass[11];
	char lesson[12];
};
struct darsos {
	int MATH,PHISICS,ENGLISH,TEOLOGY,AVR,ALTIUM,PROTEUOS,PROGRAMMING,LITERATURE,PLAT;
};
//==========================================
void updan();
void upos();
void indan();
void inos();
void coding(char []);
void uncoding(char []);
void delay(int );
void gotoxy(int ,int );
int select(char [5]);
void seem(char [5]);
void put(char str1[4]);
void search();
void sees(char [12]);
//===========================================
int main(){
	int x=0;
	while (x==0){
		if (x==0){
		system("cls");
		printf("\n\n\n\n\n\t\t\t==============================\n");
		printf("\t\t\t||*   \t \t \t   *||\n");
		printf("\t\t\t||    WELCOME  DEAR USER!   ||\n");
		printf("\t\t\t||*   \t \t \t   *||\n");
		printf("\t\t\t||\t 1 : SING UP\t    ||\n");
		printf("\t\t\t||*   \t \t \t   *||\n");
		printf("\t\t\t||\t 2 : SING IN\t    ||\n");
		printf("\t\t\t||*   \t \t \t   *||\n");
		printf("\t\t\t||\t 3 :  ABOUT\t    ||\n");
		printf("\t\t\t||*   \t \t \t   *||\n");
		printf("\t\t\t||\t 4 :  EXIT \t    ||\n");
		printf("\t\t\t||*   \t \t \t   *||\n");
		printf("\t\t\t||press number  to  continue||\n");
		printf("\t\t\t||*   \t \t \t   *||\n");
		printf("\t\t\t==============================\n");
		}
		char q;
		q=_getch();
		switch (q){
		case '1':
			system("cls");
			printf("\n\n\n\n\n\t\t\t==============================\n");
			printf("\t\t\t||*   \t \t \t   *||\n");
			printf("\t\t\t||   1 - SING UP STUDENTS   ||\n");
			printf("\t\t\t||*   \t \t \t   *||\n");
			printf("\t\t\t||   2 - SING UP TEACHERS   ||\n");
			printf("\t\t\t||*   \t \t \t   *||\n");
			printf("\t\t\t||\t 3 -  RETURN   \t    ||\n");
			printf("\t\t\t||*   \t \t \t   *||\n");
			printf("\t\t\t==============================\n");
			while (1){
				q=_getch();
				if (q=='1'){
					updan();
					break;
				}
				if (q=='2'){
					upos();
					break;
				}
				if (q=='3'){
					x=0;
					break;
				}
				else{
					printf("\t\t\t   please enter correctly!\n");
				}
			}
			break;
		case '2':
			system("cls");
			printf("\n\n\n\n\n\t\t\t==============================\n");
			printf("\t\t\t||*   \t \t \t   *||\n");
			printf("\t\t\t||   1 - SING IN STUDENTS   ||\n");
			printf("\t\t\t||*   \t \t \t   *||\n");
			printf("\t\t\t||   2 - SING IN TEACHERS   ||\n");
			printf("\t\t\t||*   \t \t \t   *||\n");
			printf("\t\t\t||\t 3 -  RETURN   \t    ||\n");
			printf("\t\t\t||*   \t \t \t   *||\n");
			printf("\t\t\t==============================\n");
			while (1){
				q=_getch();
				if (q=='1'){
					indan();
					break;
				}
				if (q=='2'){
					inos();
					break;
				}
				if (q=='3'){
					x=0;
					break;
				}
				else{
					printf("\t\t\t   please enter correctly!\n");
				}
			}
			break;
		case '3':
			system("cls");
			printf("\n\n\n\t\t\t==============================\n");
			printf("\t\t\t||*   \t \t \t   *||\n");
			printf("\t\t\t||  \t PROVISIONER  :     ||\n");
			printf("\t\t\t||*   \t \t \t   *||\n");
			printf("\t\t\t||           MOJAAD         ||\n");
			printf("\t\t\t||\t  9621010042 \t    ||\n");
			printf("\t\t\t||*   \t \t \t   *||\n");
			printf("\t\t\t||   ELECRICAL ENGINEERING  ||\n");
			printf("\t\t\t||   TEACHER  :  Dr.SALIMI  ||\n");
			printf("\t\t\t||*   \t \t \t   *||\n");
			printf("\t\t\t||press any key to  continue||\n");
			printf("\t\t\t||*   \t \t \t   *||\n");
			printf("\t\t\t==============================\n");
			_getch();
			break;
		case '4':
			system("cls");
			gotoxy(35,7);
			printf("*     *\n");
			gotoxy(34,0);
			printf("***   ***\n");
			for (int i = 33 , j =11 ; i < 39 ; i++,j=j-2){
				gotoxy(i,0);
				for (int k=j ; k > 0 ; k--){
					printf("*");
				}
				printf("\n");
			}
			gotoxy(36,2);
			printf("!BYE!");
			delay(1000);
			return 0;
		default:
			x=0;
			printf("\n\t\t\tplease enter correct!!");
		}
	}
	return 0;
}
//===========================================
void gotoxy(int x,int y){
	for (int i = 0; i < y; i++){
		printf("\n");
	}
	for (int i = 0; i < x; i++){
		printf(" ");
	}
}
void delay(int s){
	long pause;
	clock_t now ,then;
	pause=s*(CLOCKS_PER_SEC/1000);
	now=then=clock();
	while ((now-then)<s){
		now=clock();
	}
}
void coding(char name[]){
	for (int i = 0; name[i] != '\0' ; i++){
		name[i]=name[i]+12;
	}
}
void uncoding(char name[]){
	for (int i = 0; name[i] != '\0' ; i++){
		name[i]=name[i]-12;
	}
}
//===========================================
void updan(){
	system("cls");
	struct daneshjooei daneshjoo;
	FILE *dan,*num;
	char w[5];
	int j;
	for (int i = 4444;i<9999;i++){
		num=fopen("usedan.txt","r");
		fread(&j,sizeof (int),1,num);
		fclose(num);
		if (j==i){
			j++;
			num=fopen("usedan.txt","w");
			fwrite(&j,sizeof (int),1,num);
			fclose(num);
			break;
		}
		else if(i>j)
		{
			j=i;
			num=fopen("usedan.txt","w");
			fwrite(&j,sizeof (int),1,num);
			fclose(num);
			break;
		}
	}
	sprintf(w,"%d",j);
	dan=fopen(w,"w");
	if (dan==NULL){
		printf("can not open the file! :-( \n");
		fclose(dan);
	}
	else{
		printf("\n\n==============================================\n");
		printf("ENTER FIRST NAME:\t");
		gets(daneshjoo.firstname);
		coding(daneshjoo.firstname);
		printf("**********************************************\n");
		printf("ENTER LAST NAME:\t");
		gets(daneshjoo.lastname);
		coding(daneshjoo.lastname);
		printf("**********************************************\n");
		printf("ENTER PHONE NUMBER:\t");
		gets(daneshjoo.num);
		coding(daneshjoo.num);
		printf("**********************************************\n");
		printf("ENTER BIRTHDAY(example:1377/08/24):");
		gets(daneshjoo.birth);
		coding(daneshjoo.birth);
		printf("\n\t\tOK");
		printf("\n==============================================\n");
		while(1){
			printf("PLEASE ENTER PASSWORD(max 10 characters):");
			gets(daneshjoo.pass);		
			printf("ENTER AGAIN:");
			char passlub[10];
			gets(passlub);
			if (strcmp(daneshjoo.pass,passlub)==0){
				coding(daneshjoo.pass);
				daneshjoo.student=j;
				daneshjoo.average=-1;
				fwrite(&daneshjoo,sizeof daneshjoo,1,dan);
				fclose(dan);
				break;
			}
			else{
				printf("\t\t\tOH! :-( \nPASSWORD IS NOT CORRECT! PLEASE TRY AGAIN! (press enter)\n");
				_getch();
			}
		}
		system("cls");
		printf("\n\n\n\n\n\n\n\n\n\t\t\t\tWAITING...\n  \t\t\t");
		for (int i = 0; i < 25; i++){
			printf("=");
			delay(250);
		}
		system("cls");
		printf("\n\n\n\n\n\t\t===========================================\n");
		printf("\t\t||* \t  \t  \t  \t   \t*||\n");
		printf("\t\t||\t\tSINGED UP !!\t\t ||\n");
		printf("\t\t||* \t  \t  \t  \t   \t*||\n");
		printf("\t\t||*\t\t   ;-)\t\t\t*||\n");
		printf("\t\t||* \t  \t  \t  \t   \t*||\n");
		printf("\t\t||        YOUR USERNAME IS : %d        ||\n",j);
		printf("\t\t||* \t  \t  \t  \t   \t*||\n");
		printf("\t\t||      PRESS ANY KEY TO CONTINUE...     ||\n");
		printf("\t\t||* \t  \t  \t  \t   \t*||\n");
		printf("\t\t===========================================\n\t\t\t\t");
	}
	_getch();
}

void indan(){
	system("cls");
	gotoxy(28,8);
	printf("PLEASE ENETER USERNAME:\n");
	gotoxy(36,0);
	char str1[5];
	gets(str1);
	gotoxy(28,1);
	printf("PLEASE ENTER PASSWORD:\n");
	gotoxy(35,0);
	char pass1[10];
	gets(pass1);
	printf("\n");
	struct daneshjooei daneshjoo;
	FILE *dan;
	dan=fopen(str1,"r");
	if (dan==NULL){
		system("cls");
		gotoxy(22,10);
		printf("THERE IS NO ONE LIKE THIS NAME! :-( \n");
		_getch();
	}
	else{
		fread(&daneshjoo,sizeof daneshjoo,1,dan);
		fclose(dan);
		uncoding(daneshjoo.pass);
		if (strcmp(daneshjoo.pass,pass1)==0){
			system("cls");
			printf("\n\n\n\n\n\n\n\n\n\t\t\t\tWAITING...\n  \t\t\t");
		for (int i = 0; i < 23; i++){
			printf("#");
			delay(35);
		}
		system("cls");
		gotoxy(30,10);
		printf("OPENED! :-) ");
		delay(1000);
		int q=0;
		while(q==0){
		system("cls");
		uncoding(daneshjoo.firstname);
		printf("\n\n\n\t\t\t==================================\n");
		printf("\t\t\t||*   \t \t \t       *||\n");
		printf("\t\t\t     WELCOME  DEAR %s!   \n",daneshjoo.firstname);
		printf("\t\t\t||*   \t \t \t       *||\n");
		printf("\t\t\t||   1 : SELECT LESSON    \t||\n");
		printf("\t\t\t||*   \t \t \t       *||\n");
		printf("\t\t\t||   2 : SEE MARKS        \t||\n");
		printf("\t\t\t||*   \t \t \t       *||\n"); 
		printf("\t\t\t||   3 : SEE AVERAGE      \t||\n");
		printf("\t\t\t||*   \t \t \t       *||\n"); 
		printf("\t\t\t||   4 : EDIT PASSWORD\t        ||\n");
		printf("\t\t\t||*   \t \t \t       *||\n");
		printf("\t\t\t||   5 : EXIT FROM USER \t||\n");
		printf("\t\t\t||*   \t \t \t       *||\n");
		printf("\t\t\t||   press number  to  continue ||\n");
		printf("\t\t\t||*   \t \t \t       *||\n");
		printf("\t\t\t==================================\n");
		coding (daneshjoo.firstname);
		char y;
			y=_getch();
			switch (y){
			case '1':
				select(str1);
				q=0;
				break;
			case '2':
				dan=fopen(str1,"r");
				fread(&daneshjoo,sizeof daneshjoo,1,dan);
				fclose(dan);
				if (daneshjoo.let!=1){
					printf("you don't select lessons yet!\n");
					break;
				}
				else{
				seem(str1);
				}
				q=0;
				break;
			case '3':
				dan=fopen(str1,"r");
				fread(&daneshjoo,sizeof daneshjoo,1,dan);
				fclose(dan);
				if (daneshjoo.let!=1){
					printf("you don't select lessons yet!\n");
					break;
				}
				else{
					system("cls");
					gotoxy(17,9);
					printf("_-_-_-_-_-_-_-_-_-_-_-_-_-_-_-_-_-_-_-_-_-_-_-_\n");
					gotoxy(26,0);
					printf("THE AVERAGE:");
					if (daneshjoo.average>=0){
						printf("%.2f\n",daneshjoo.average);
					}
					else{
						printf("NOT COMPUTE YET!\n");
					}
					gotoxy(17,0);
					printf("_-_-_-_-_-_-_-_-_-_-_-_-_-_-_-_-_-_-_-_-_-_-_-_\n");
					_getch();
				}
				q=0;
				break;
			case '4':
				system("cls");
				gotoxy(20,8);
				printf("--------------------------------\n");
				gotoxy(20,0);
				printf("ENTER OLD PASSWORD:\n");
				gotoxy(20,0);
				gets(pass1);
				if (strcmp(daneshjoo.pass,pass1)==0){
					gotoxy(20,0);
					printf("ENTER NEW PASSWORD:\n");
					gotoxy(20,0);
					gets(pass1);
					gotoxy(20,0);
					printf("ENTER AGAIN:\n");
					gotoxy(20,0);
					char str2[10];
					gets(str2);
					if (strcmp(pass1,str2)==0){
						strcpy(daneshjoo.pass,pass1);
						coding(daneshjoo.pass);
						gotoxy(20,0);
						printf("PASSWORD CHANGED!\n");
						gotoxy(20,0);
						printf("-------------------------------\n");
						dan=fopen(str1,"w");
						fwrite(&daneshjoo,sizeof daneshjoo,1,dan);
						fclose(dan);
						delay(1000);
						system("cls");
					}
				}
				else{
					printf("\t\t\t\tplease enter correctly!\n");
				}
				q=0;
				break;
			case '5':
				q=1;
				break;
			default:printf("\t\t\t\tplease enter correctly!\n");
			}
		}
		}
		else{
			system("cls");
			gotoxy(19,10);
			printf("THE PASSWORD IS INCORRECT PLEASE TRY AGAIN!");
			_getch();
			fclose(dan);
		}
	}
}

int select(char str1[5]){
	system("cls");
	FILE *sel;
	struct daneshjooei daneshjoo;
	gotoxy(15,5);
	printf("========================================\n");
	gotoxy(16,0);
	printf("WHICH LESSON DO YOU WANT TO CHOOSE?:\n");
	gotoxy(20,0);
	printf("PLEASE ENTER 5 LESSONS(MAX)\n");
	gotoxy(22,0);
	printf("=======================\n\n");
	printf("0-MATH\t   1-PHISICS\t2-ENGLISH\t3-TEOLOGY\t4-AVR\n5-ALTIUM    6-PROTEUOS\t7-PROGRAMMING\t8-LITERATURE\t9-PLAT\n");
	sel=fopen(str1,"r");
	fread(&daneshjoo,sizeof daneshjoo,1,sel);
	fclose(sel);
	sel=fopen(str1,"r");
	if (sel==NULL || daneshjoo.let==1){
		system("cls");
		gotoxy(16,7);
		printf("can not open or meybe you choose lessons in past!\n");
		fclose(sel);
		_getch();
		system("cls");
		return 0;
		}
	for (int i = 0; i < 5; i++){
		printf(" ");
		char j;
		j=_getche();
		switch (j){
		case '0':
			strcpy(daneshjoo.lesson[i],"MATH");
			coding(daneshjoo.lesson[i]);
			daneshjoo.mark[i]=-1;
			break;
		case '1':
			strcpy(daneshjoo.lesson[i],"PHISICS");
			coding(daneshjoo.lesson[i]);
			daneshjoo.mark[i]=-1;
			break;
		case '2':
			strcpy(daneshjoo.lesson[i],"ENGLISH");
			coding(daneshjoo.lesson[i]);
			daneshjoo.mark[i]=-1;
			break;
		case '3':
			strcpy(daneshjoo.lesson[i],"TEOLOGY");
			coding(daneshjoo.lesson[i]);
			daneshjoo.mark[i]=-1;
			break;
		case '4':
			strcpy(daneshjoo.lesson[i],"AVR");
			coding(daneshjoo.lesson[i]);
			daneshjoo.mark[i]=-1;
			break;
		case '5':
			strcpy(daneshjoo.lesson[i],"ALTIUM");
			coding(daneshjoo.lesson[i]);
			daneshjoo.mark[i]=-1;
			break;
		case '6':
			strcpy(daneshjoo.lesson[i],"PROTEUOS");
			coding(daneshjoo.lesson[i]);
			daneshjoo.mark[i]=-1;
			break;
		case '7':
			strcpy(daneshjoo.lesson[i],"PROGRAMMING");
			coding(daneshjoo.lesson[i]);
			daneshjoo.mark[i]=-1;
			break;
		case '8':
			strcpy(daneshjoo.lesson[i],"LITERATURE");
			coding(daneshjoo.lesson[i]);
			daneshjoo.mark[i]=-1;
			break;
		case '9':
			strcpy(daneshjoo.lesson[i],"PLAT");
			coding(daneshjoo.lesson[i]);
			daneshjoo.mark[i]=-1;
			break;
		}
	}
	daneshjoo.let=1;
	sel=fopen(str1,"w");
	fwrite(&daneshjoo,sizeof daneshjoo,1,sel);
	fclose(sel);
	system("cls");
	printf("\n\n\n\n\n\n\n\n\n\t\t\t\tWAITING...\n  \t\t\t");
		for (int i = 0; i < 22; i++){
			printf("*");
			delay(40);
		}
	system("cls");
	gotoxy(30,9);
	printf("SAVED!! :-) \n");
	delay(500);
	system("cls");
	return 0;
}

void seem(char str1[5]){
	system("cls");
	FILE *see;
	struct daneshjooei see1;
	see=fopen(str1,"r");
	fread(&see1,sizeof see1,1,see);
	fclose(see);
	gotoxy(15,6);
	printf("_-_-_-_-_-_-_-_-_-_-_-_-_-_-_-_-_-_-_-_-_-_-_-_\n\n");
	for (int i = 0; i < 5; i++){
			uncoding(see1.lesson[i]);
			gotoxy(22,0);
			printf("YOUR %s'S MARK IS:",see1.lesson[i]);
			coding(see1.lesson[i]);
			if (see1.mark[i]>=0){
				printf("%.2f\n\n",see1.mark[i]);
			}
			else{
				printf("NOT ENTERED	\n\n");
			}
	}
	gotoxy(27,0);
	printf("PRESS ANY KEY TO RETURN\n\n");
	gotoxy(15,0);
	printf("_-_-_-_-_-_-_-_-_-_-_-_-_-_-_-_-_-_-_-_-_-_-_-_\n");
	_getch();
}
//===========================================
void upos(){	
	system("cls");
	struct ostadi ostad;
	FILE *os,*dars;
	printf("\n\n==============================================\n");
	printf("ENTER PERSONEL CODE:\t");
	gets(ostad.personel);
	os=fopen(ostad.personel,"w");
	if (os==NULL){
		printf("can not open the file! :-( \n");
		_getch();
	}
	else{
		printf("**********************************************\n");
		printf("ENTER FIRST NAME:\t");
		gets(ostad.firstname);
		printf("**********************************************\n");
		printf("ENTER LAST NAME:\t");
		gets(ostad.lastname);
		char i='0',z;
		struct darsos value;
		dars=fopen("darsos.txt","r");
		if (dars==NULL){
		printf("can not open please try again!");
		_getch();
		exit(1);
		}
		fread(&value,sizeof value,1,dars);
		fclose(dars);
		while(i=='0'){
		i='1';
		printf("**********************************************\n");
		printf("WHICH LESSON DO YOU WANT TO CHOOSE?:\n");
		printf("0-MATH\t   1-PHISICS\t2-ENGLISH\t3-TEOLOGY\t4-AVR\n5-ALTIUM   6-PROTEUOS\t7-PROGRAMMING\t8-LITERATURE\t9-PLAT\n");
		z=_getch();
		switch (z){
				case '0':
					if (value.MATH==1){
						i='0';
						printf("sorry other one select this!(press any key to repeat)\n");
						_getch();
						system("cls");
					}
					else{
					value.MATH=1;
					strcpy(ostad.lesson,"MATH");
					}
					break;
				case '1':
					if (value.PHISICS==1){
						i='0';
						printf("sorry other one select this!(press any key to repeat)\n");
						_getch();
						system("cls");
					}
					else{
					value.PHISICS=1;
					strcpy(ostad.lesson,"PHISICS");
					}
					break;
				case '2':
					if (value.ENGLISH==1){
						i='0';
						printf("sorry other one select this!(press any key to repeat)\n");
						_getch();
						system("cls");
					}
					else{
					value.ENGLISH=1;
					strcpy(ostad.lesson,"ENGLISH");
					}
					break;
				case '3':
					if (value.TEOLOGY==1){
						i='0';
						printf("sorry other one select this!(press any key to repeat)\n");
						_getch();
						system("cls");
					}
					else{
					value.TEOLOGY=1;
					strcpy(ostad.lesson,"TEOLOGY");
					}
					break;
				case '4':
					if (value.AVR==1){
						i='0';
						printf("sorry other one select this!(press any key to repeat)\n");
						_getch();
						system("cls");
					}
					else{
					value.AVR=1;
					strcpy(ostad.lesson,"AVR");
					}
					break;
				case '5':
					if (value.ALTIUM==1){
						i='0';
						printf("sorry other one select this!(press any key to repeat)\n");
						_getch();
						system("cls");
					}
					else{
					value.ALTIUM=1;
					strcpy(ostad.lesson,"ALTIUM");
					}
					break;
				case '6':
					if (value.PROTEUOS==1){
						i='0';
						printf("sorry other one select this!(press any key to repeat)\n");
						_getch();
						system("cls");
					}
					else{
					value.PROTEUOS=1;
					strcpy(ostad.lesson,"PROTEUOS");
					}
					break;
				case '7':
					if (value.PROGRAMMING==1){
						i='0';
						printf("sorry other one select this!(press any key to repeat)\n");
						_getch();
						system("cls");
					}
					else{
					value.PROGRAMMING=1;
					strcpy(ostad.lesson,"PROGRAMMING");
					}
					break;
				case '8':
					if (value.LITERATURE==1){
						i='0';
						printf("sorry other one select this!(press any key to repeat)\n");
						_getch();
						system("cls");
					}
					else{
					value.LITERATURE=1;
					strcpy(ostad.lesson,"LITERATURE");
					}
					break;
				case '9':
					if (value.PLAT==1){
						i='0';
						printf("sorry other one select this!(press any key to repeat)\n");
						_getch();
						system("cls");
					}
					else{
					value.PLAT=1;
					strcpy(ostad.lesson,"PLAT");
					}
					break;
				default:
					i='0';
					printf("please enter correctly!\n");
				}
			}
			dars=fopen("darsos.txt","w");
			fwrite(&value,sizeof value,1,dars);
			fclose(dars);
		printf("\n\t\tOK");
		printf("\n==============================================\n");
		while(1){
			printf("PLEASE ENTER PASSWORD(max 10 characters):");
			gets(ostad.pass);		
			printf("ENTER AGAIN:");
			char passlab[10];
			gets(passlab);
			if (strcmp(ostad.pass,passlab)==0){
				coding(ostad.lastname);
				coding(ostad.firstname);
				coding(ostad.personel);
				coding(ostad.lesson);
				coding(ostad.pass);
				fwrite(&ostad,sizeof ostad,1,os);
				fclose(os);
				break;
			}
			else{
				printf("\t\t\tOH! :-( \nPASSWORD IS NOT CORRECT! PLEASE TRY AGAIN! (press enter)\n");
				_getch();
			}
		}
		system("cls");
		printf("\n\n\n\n\n\n\n\n\n\t\t\t\tWAITING...\n  \t\t\t");
		for (int i = 0; i < 25; i++){
			printf("=");
			delay(250);
		}
		system("cls");
		uncoding(ostad.personel);
		printf("\n\n\n\n\n\t\t===========================================\n");
		printf("\t\t||* \t  \t  \t  \t   \t*||\n");
		printf("\t\t||\t\tSINGED UP !!\t\t ||\n");
		printf("\t\t||* \t  \t  \t  \t   \t*||\n");
		printf("\t\t||*\t\t   ;-)\t\t\t*||\n");
		printf("\t\t||* \t  \t  \t  \t   \t*||\n");
		printf("\t\t||        YOUR USERNAME IS :%s          ||\n",ostad.personel);
		printf("\t\t||* \t  \t  \t  \t   \t*||\n");
		printf("\t\t||      PRESS ANY KEY TO CONTINUE...     ||\n");
		printf("\t\t||* \t  \t  \t  \t   \t*||\n");
		printf("\t\t===========================================\n\t\t\t\t");
		_getch();
	}
}

void inos(){
	system("cls");
	gotoxy(28,8);
	printf("PLEASE ENETER USERNAME:\n");
	gotoxy(36,0);
	char str1[4];
	gets(str1);
	gotoxy(28,1);
	printf("PLEASE ENTER PASSWORD:\n");
	gotoxy(35,0);
	char pass1[10];
	gets(pass1);
	printf("\n");
	struct ostadi ostad;
	FILE *os;
	os=fopen(str1,"r");
	if (os==NULL){
		system("cls");
		gotoxy(22,10);
		printf("THERE IS NO ONE LIKE THIS NAME! :-( \n");
		_getch();
	}
	else{
		fread(&ostad,sizeof ostad,1,os);
		fclose(os);
		uncoding(ostad.pass);
		if (strcmp(ostad.pass,pass1)==0){
			system("cls");
			printf("\n\n\n\n\n\n\n\n\n\t\t\t\tWAITING...\n  \t\t\t");
		for (int i = 0; i < 23; i++){
			printf("#");
			delay(35);
		}
		system("cls");
		gotoxy(30,10);
		printf("OPENED! :-) ");
		delay(1000);
		int q=0;
		while(q==0){
		uncoding(ostad.firstname);
		system("cls");
		printf("\n\n\n\t\t\t==================================\n");
		printf("\t\t\t||*   \t \t \t       *||\n");
		printf("\t\t\t      WELCOME  DEAR %s!   \n",ostad.firstname);
		printf("\t\t\t||*   \t \t \t       *||\n");
		printf("\t\t\t||   1 : PUT STUDENTS MARK\t||\n");
		printf("\t\t\t||*   \t \t \t       *||\n");
		printf("\t\t\t||   2 : SEE STUDENTS LIST\t||\n");
		printf("\t\t\t||*   \t \t \t       *||\n"); 
		printf("\t\t\t||   3 : SEARCH STUDENTS\t||\n");
		printf("\t\t\t||*   \t \t \t       *||\n");
		printf("\t\t\t||   4 : EDIT PASSWORD\t        ||\n");
		printf("\t\t\t||*   \t \t \t       *||\n");
		printf("\t\t\t||   5 : EXIT FROM USER \t||\n");
		printf("\t\t\t||*   \t \t \t       *||\n");
		printf("\t\t\t||   press number  to  continue ||\n");
		printf("\t\t\t||*   \t \t \t       *||\n");
		printf("\t\t\t==================================\n");
		coding(ostad.firstname);
		char y;
			y=_getch();
			switch (y)
			{
			case '1':
				put(str1);
				break;
			case '2':
				sees(ostad.lesson);
				break;
			case '3':
				search();
				break;
			case '4':
				system("cls");
				gotoxy(20,8);
				printf("--------------------------------\n");
				gotoxy(20,0);
				printf("ENTER OLD PASSWORD:\n");
				gotoxy(20,0);
				gets(pass1);
				if (strcmp(ostad.pass,pass1)==0){
					gotoxy(20,0);
					printf("ENTER NEW PASSWORD:\n");
					gotoxy(20,0);
					gets(pass1);
					gotoxy(20,0);
					printf("ENTER AGAIN:\n");
					gotoxy(20,0);
					char str2[10];
					gets(str2);
					if (strcmp(pass1,str2)==0){
						strcpy(ostad.pass,pass1);
						coding(ostad.pass);
						gotoxy(20,0);
						printf("PASSWORD CHANGED!\n");
						gotoxy(20,0);
						printf("-------------------------------\n");
						os=fopen(str1,"w");
						fwrite(&ostad,sizeof ostad,1,os);
						fclose(os);
						delay(1000);
						system("cls");
					}
				}
				else{
					printf("\t\t\t\tplease enter correctly!\n");
				}
				break;
			case '5':
				q=1;
				break;
			default:printf("\t\t\t\tplease enter correctly!\n");
			}
		}
	}
		else{
			system("cls");
			gotoxy(19,10);
			printf("THE PASSWORD IS INCORRECT PLEASE TRY AGAIN!");
			_getch();
			fclose(os);
		}
	}
}

void put(char str1[4]){
	system("cls");
	FILE *dan,*os;
	struct ostadi ost;
	struct daneshjooei dane;
	char q[5];
	os=fopen(str1,"r");
	if (os==NULL){
		printf("can not open the file\n");
		exit(1);
	}
	fread(&ost,sizeof ost,1,os);
	fclose(os);
	uncoding(ost.lesson);
	for (int j = 4444; j < 9999; j++){
		system("cls");
		sprintf(q,"%d",j);
		dan=fopen(q,"r");
		if (dan==NULL){
			gotoxy(27,9);
			printf("THERE IS NO ONE ELSE!\n");
			_getch();
			break;
		}
		fread(&dane,sizeof dane,1,dan);
		fclose(dan);
		for (int k = 0; k < 5; k++){
			uncoding(dane.lesson[k]);
			if (strcmp(dane.lesson[k],ost.lesson)==0){
				gotoxy(16,6);
				printf("^*^*^*^*^*^*^*^*^*^*^*^*^*^*^*^*^*^*^*^*^*^*^*^*^\n");
				uncoding(dane.firstname);
				gotoxy(20,0);
				printf("first name:%s\n",dane.firstname);
				coding(dane.firstname);
				gotoxy(20,0);
				uncoding(dane.lastname);
				printf("last name:%s\n",dane.lastname);
				coding(dane.lastname);
				gotoxy(20,0);
				printf("ENTER %s'S MARK:",ost.lesson);
				scanf("%f",&dane.mark[k]);	
				gotoxy(20,0);
				printf("PRESS ANY KEY TO CONTINIUE...\n");
				gotoxy(16,0);
				printf("^*^*^*^*^*^*^*^*^*^*^*^*^*^*^*^*^*^*^*^*^*^*^*^*^\n");
				int r=0;
				float sum=0;
				for (int p = 0; p < 5; p++){
					if (dane.mark[p]>=0){
						r++;
						sum=sum+dane.mark[p];
					}
					if (p==4){
						dane.average=sum/r;
					}
				}
				_getch();
				coding(dane.lesson[k]);
				dan=fopen(q,"w");
				fwrite(&dane,sizeof dane,1,dan);
				fclose(dan);
				uncoding(dane.lesson[k]);
				break;
			}	
			coding(dane.lesson[k]);
		}
	}
	coding(ost.lesson);
}

void sees(char str1[12]){
	system("cls");
	FILE *dan;
	struct daneshjooei dane;
	printf("\n\n\n\t\t\t==================================\n");
	printf("\t\t\t||\t     SORT BY:    \t||\n");
	printf("\t\t\t||*   \t \t \t       *||\n");
	printf("\t\t\t||\t     1 : MARK    \t||\n");
	printf("\t\t\t||*   \t \t \t       *||\n");
	printf("\t\t\t||\t   2 : ALPHABET  \t||\n");
	printf("\t\t\t||*   \t \t \t       *||\n");
	printf("\t\t\t||  press  number  to  continue ||\n");
	printf("\t\t\t||*   \t \t \t       *||\n");
	printf("\t\t\t==================================\n");
	float j[50];
	char l[50][20];
	char g[50][20];
	int k=0;
	while (1){
		char w[5];
		for (int i = 4444; i < 9999; i++){
			sprintf(w,"%d",i);
			dan=fopen(w,"r");
			if (dan==NULL){
				break;
			}
			fread(&dane,sizeof dane,1,dan);
			fclose(dan);
			//uncoding(str1);
			for (int o = 0; o < 5; o++){
				if (strcmp(dane.lesson[o],str1)==0){
					j[k]=dane.mark[o];
					strcpy(l[k],dane.lastname);
					strcpy(g[k],dane.firstname);
					break;
				}
				else if (o==4){
					k=k-1;
				}
			}
		//	coding(str1);
			k++;
		}
		char q;
		q=_getch();
		if (q=='1'){
			for (int o = 0; o < k; o++){
					if (j[o]<j[o+1]){
						char temp1[20];
						strcpy(temp1,l[o]);
						strcpy(l[o],l[o+1]);
						strcpy(l[o+1],temp1);
						char temp2[20];
						strcpy(temp2,g[o]);
						strcpy(g[o],g[o+1]);
						strcpy(g[o+1],temp2);
						float x;
						x=j[o];
						j[o]=j[o+1];
						j[o+1]=x;
					}
				}
		break;
		}
		else if (q=='2'){
			for (int o = 0; o < k; o++){
					if (strcmp(l[o],l[o+1])<0){
						char temp1[20];
						strcpy(temp1,l[o]);
						strcpy(l[o],l[o+1]);
						strcpy(l[o+1],temp1);
						char temp2[20];
						strcpy(temp2,g[o]);
						strcpy(g[o],g[o+1]);
						strcpy(g[o+1],temp2);
						float x;
						x=j[o];
						j[o]=j[o+1];
						j[o+1]=x;
					}
				}
		break;
		}
		else{
			printf("\n\n\n\n\t\t\t\tplease enter correctly!\n");
		}
	}
	system("cls");
	printf("\n\n||*_*_*_*_*_*_*_*_*_*_*_*_*_*_*_*_*_*_*_*_*_*_*_*_\n");
	printf("|| ROW       LASTNAME        FIRSTNAME       MARK  \n");
	for (int o = 0; o < k; o++){
		uncoding(l[o]);
		uncoding(g[o]);
		printf("|| %d       %s        %s          %.2f  \n",o+1,l[o],g[o],j[o]);

	}
	printf("||        PRESS ANY KEY TO CONTINIUE...\n");
	printf("||*_*_*_*_*_*_*_*_*_*_*_*_*_*_*_*_*_*_*_*_*_*_*_*_\n");
	_getch();
}

void search(){
	FILE *dan;
	struct daneshjooei dane;
	system("cls");
	gotoxy(16,4);
	printf("^*^*^*^*^*^*^*^*^*^*^*^*^*^*^*^*^*^*^*^*^*^*^*^*^\n");
	gotoxy(23,0);
	printf("PLEASE ENTER STUDEN'S NUMBER TO SEARCH:\n");
	char danesh[5];
	gotoxy(34,0);
	gets(danesh);
	dan=fopen(danesh,"r");
	if (dan==NULL){
		gotoxy(23,0);
		printf("\nTHERE IS NO ONE LIKE THIS NUMBER!!\n");
		_getch();
	}
	else{
		fread(&dane,sizeof dane,1,dan);
		fclose(dan);
		gotoxy(23,0);
		uncoding(dane.firstname);
		printf("FIRST NAME:%s\n\n",dane.firstname);
		gotoxy(23,0);
		uncoding(dane.lastname);
		printf("LAST NAME:%s\n\n",dane.lastname);
		gotoxy(23,0);
		uncoding(dane.num);
		printf("PHONE NUMBER:%s\n\n",dane.num);
		gotoxy(23,0);
		printf("THE AVERAGE:");
		if (dane.average>=0){
			printf("%.2f\n\n",dane.average);
		}
		else{
			printf("NOT COMPUTE YET!\n\n");
		}
		gotoxy(23,0);
		printf("PRESS ANY KEY TO CONTINIUE...\n\n");
		gotoxy(16,0);
		printf("^*^*^*^*^*^*^*^*^*^*^*^*^*^*^*^*^*^*^*^*^*^*^*^*^\n");
		_getch();
	}
}
//===========================================END!