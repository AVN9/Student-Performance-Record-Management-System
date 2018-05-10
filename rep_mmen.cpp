//This function modifies student records
/**********************************Marks Menu********************************/
void mark_menu()
{
textbackground(BLACK);
textcolor(WHITE);
int t_redg,i,opt,flag=0;
char ch='y',na[20];
do
{
clrscr();
gotoxy(1,25);
cout<<"Press Esc to Quit";
opt=menu(1,5,3,"1.Modify Student","2.Remove Student","3.Back",
	       "",""," [","] "," Menu","=");//menu fn creates menu & returns
switch(opt)                                 //option selected
{
case 1:	clrscr();				//Modify Student
	mod();                                 // by using mod fn
	getch();
	mark_menu();               //again calls itself to display  menu
	break;
case 2:	clrscr();				//Delete Student
	cout<<"Which Student Do you want to Delete\nEnter Reg No:";
	cin>>t_redg;
	for(i=0;i<10;i++)
	 {
	 if(s[i].redgno==t_redg)
	  {
	  strcat(na,s[i].name); //remove fn returns true if record exists
	  strcat(na,".txt");
	  if(remove(na)) cout<<"The Record of "<<s[i].name<<" is removed.";
	  else cout<<"Internal Error. "<<s[i].name<<" could not be removed.";
	  s[i].redgno = -1;
	  flag=1;
	  break;
	  }
	 }
	if(flag==0)
	cout<<"Record not found";
	mark_menu();
	break;
default:main_menu();
}
gotoxy(30,25);
cout<<"Do you want to Continue?(Y/N)...";
cin>>ch;
}while(ch=='y'||ch=='Y');
if(ch=='n'||ch=='N')
main_menu();
}