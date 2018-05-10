

//This function defines options for student menu
//called on selecting student details
//also calls respective fns depending on value returned by menu fn.


/******************************Student Menu*********************************/
void student_menu()
 {
 textbackground(16);
 textcolor(15);
 unsigned int tredg;
 char ch='y',ch1;
 do
  {
  clrscr();
  ch1=menu(1,5,3,"1.Add Students","2.Display Student","3.Back","","","[","] "
		,"Student Menu","=");//leads to display in a menu format
  switch(ch1)                //menu fn also returns the option no. selected
   {
   case 1:clrscr();                             //add new record
	  add();
	  break;
   case 2:clrscr();                             //View Marks
	  view();
	  break;
   case 3:main_menu();                          //Main Menu
	  getch();
	  break;
   case 6:main_menu();                  	//Main Menu
	  getch();
	  break;

   default:cout<<"\n\nWrong Choice!!";
   }
  cout<<"\n\nDo You Want to Continue?(Y/N)";
  cin>>ch;
  }
 while(ch=='y'||ch=='Y');
 main_menu();
 }
