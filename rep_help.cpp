

/****************************Function To View Help***************************/
void help()
{
//clrscr();
textcolor(WHITE);
message(12,8,6,"This Software is designed for aiding schools in",
	       "keeping report of students and their information.",
	       "This software is a interactive menu driven program.",
	       "This program will create a file with students name ",
	       "with his or her report","OK",LIGHTGRAY);
gotoxy(15,14);
textcolor(WHITE);
textbackground(LIGHTGRAY);
cputs("    Keys:-Up,-Down,Enter-Selecting,Esc-To Exit.");
getch();
textcolor(BLACK);
main_menu();
}