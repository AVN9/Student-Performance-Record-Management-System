


/* This function would create a message box containing the various options.

decr. of var passed--
int x,y : to set screen positions
char a,b,c,d,e : would take  the various options as arguments
int back : To decide background color
int lines : No. of options*/

void message(int x,int y,int lines,char a[50],char b[50],char c[50],
			 char d[50],char e[50],char f[10],int back)
{
	int l,i,j;
	char f1[10];

	l=strlen(a);
	if(l<strlen(b))
		 l=strlen(b);
	if(l<strlen(c))  // To calculate maximum length string
		 l=strlen(c);   // for formatting the msg box size
	if(l<strlen(d))
		 l=strlen(d);
	if(l<strlen(e))
		 l=strlen(e);
	if(l<strlen(f))
	 l=strlen(f);
	l+=4;

	textbackground(back);
	for(i=1;i<l+2;i++)
	for(j=1;j<lines+4;j++)
	 {
		 gotoxy(i+x,j+y);
		 cputs(" ");
	 }

	 // Making the message box structure
	 gotoxy(x,y);
	 cputs("É");
	 for(i=x+1;i<l+x+1;i++)
	 {
		 gotoxy(i,y);
		 cputs("Í");
		 gotoxy(i,y+lines+3);
		 cputs("Í");
	 }
	gotoxy(x+1+l,y);
	cputs("»");

	for(i=y+1;i<lines+4+y;i++)
	 {
		 gotoxy(x,i);
		 cputs("º");
		 gotoxy(x+l+1,i);
		 cputs("º");
	 }
	gotoxy(x,y+lines+3);
	cputs("È");
	gotoxy(x+l+1,y+lines+3);
	cputs("¼");
//Printing the options....varibles j & l are used for positioning at centre
	j=l-strlen(a);
	j=j/2;
	gotoxy(j+x+1,++y);
	cputs(a);
	j=l-strlen(b);
	j=j/2;
	gotoxy(x+j+1,y+1);
	cputs(b);
	j=l-strlen(c);
	j=j/2;
	gotoxy(x+j+1,2+y);
	cputs(c);
	j=l-strlen(d);
	j=j/2;
	gotoxy(x+j+1,3+y);
	cputs(d);
	j=l-strlen(e);
	j=j/2;
	gotoxy(x+j+1,4+y);
	cputs(e);
	j=l-strlen(f)-3;
	j=j/2;
	gotoxy(x+j+1,y+lines+1);
	strcat(f1," ");
	strcat(f1,f);   //formatting the last(OK) string.
	strcat(f1," ");
	textbackground(BLACK);
	cputs(f1);
	textcolor(BLACK);
	for(i=0;i<lines+3;i++)
	 {
		 gotoxy(x+l+2,i+y);
		 cputs("Û");
	 }
	for(i=1;i<l+3;i++)
	 {
		 gotoxy(x+i,y+lines+3);
		 cputs("ß");
	 }
}
