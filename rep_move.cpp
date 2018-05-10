

/************************Function To Show Credits****************************/
void updown()
{
int i;
textcolor(GREEN);
for (i=25;i>10;i--)
{
delay(180);
clrscr();
gotoxy(30,i);
cputs("PROGRAMMER");
gotoxy(30,i+3);
cputs("AVN9");

gotoxy(30,6+i);


}
delay(800);
clrscr();

delay(800);
clrscr();

delay(800);
clrscr();
for (i=25;i>10;i--)
{
delay(180);
clrscr();
textcolor(RED+BLINK);
gotoxy(10,i);
cputs("                     HAVE A GOOD DAY");

}
delay(3000);
}
