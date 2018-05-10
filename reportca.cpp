/************************************************************************
*               STUDENT PERFORMANCE RECORD MANAGEMENT                   *
*       The main purpose of this project  is to create a software that  *
*	will serve  as a Student  Marks management system. The software *
*	system is designed to perform the following functions 		*
************************************************************************/

#include<iostream.h>
#include<conio.h>
#include<graphics.h>
#include<dos.h>
#include<bios.h>
#include<stdlib.h>
#include<stdio.h>
#include<string.h>
#include<fstream.h>
#include<ctype.h>



int menu(int,int,int,char a[25],char b[25],char c[25],char d[25],char e[25],char sl1[25],char sl2[25],char title[40],char under[2]);
void main_menu();

void student_menu();
void updown();
void mark_menu();
int records=0;

struct s_date
{
	int dd,mm,yyyy;
};

//DEFINATION of Class Student
class student
{
	public:
	char address[30];//stores address
	char fname[30];//stores father name
	int redgno;//stores registration no.
	s_date dob;//date of birth
	int clas;//course enrolled
	char name[20];//stores name
	int sub1,sub2,sub3,sub4,sub5,total;//stores sub marks and their sum
	float avg,pre;//stores average
	char div[10];//stores division
	char st_code[10]; //
	student():redgno(0),clas(0),sub1(0),sub2(0),sub3(0),
		sub4(0),sub5(0),avg(0),pre(0),total(0){}
}s[10];

//Custom files
#include "c:\report\rep_mod.cpp"
#include "c:\report\rep_mesg.cpp"
#include"c:\report\rep_add.cpp"
#include"c:\report\rep_help.cpp"
#include"c:\report\rep_move.cpp"
#include"c:\report\rep_box.cpp"
#include"c:\report\rep_menu.cpp"
#include "c:\report\rep_view.cpp"
#include "c:\report\rep_smen.cpp"
#include "c:report\rep_mmen.cpp"



/*********************************Main Menu**********************************/
void main_menu()
{
	textbackground(16);
	textcolor(LIGHTGRAY);
	char ch1;
	do{
		clrscr();
		ch1=menu(1,4,4,"1. Students Details","2. Modify Students","3. Help","4. Exit"
		,""," [","]","Student Report Maker","=");
		switch(ch1)
		{
			case 1:clrscr();                       //Student Menu
		       student_menu();
		       break;
			case 2:clrscr();                       //Modify records
			 mark_menu();
		       break;
			case 3:help();
		       break;                           //calls help fn.
			case 4:clrscr();
		       updown();
		       exit(0);                        //exit after showing credits
		       break;
			case 6:clrscr();                        //Exit
		//       updown();
		//       man();
		//       exit(0);
		       break;
			default:cout<<"\n\nWrong Choice!!";
		}
	}while(ch1==4);
}


/******************************Main Function*********************************/
void main()
{
	clrscr();
	main_menu();
	getch();
}

/************************************End*************************************/