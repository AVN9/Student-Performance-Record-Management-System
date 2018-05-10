

/*********************************Menus*************************************/
/********************************Menu To View Marks**************************/
void view()
 {
 int opt,i,reg,flag=0;
 char n[20],ch;
 view:
 opt=menu(1,5,5,"1.View All","2.Search By Reg No","3.Show Failures","4.Read From File"
	       ,"5.Back","[","]", "Dispay Menu","=");
 switch(opt)
  {
  case 1:				//Show All Marks
  for(i=0;i<10;i++)
   {
   clrscr();
   if(s[i].redgno!=NULL)
    {
    cout<<"                            Report Card Of "<<s[i].name
      <<"\nRegistration Number:"<<s[i].redgno<<"\nClass:"<<s[i].clas
      <<"\nAddress:"<<s[i].address<<"\nFather's Name:"<<s[i].fname
      <<"\nDate Of Birth:"<<s[i].dob.dd<<"-"<<s[i].dob.mm<<"-"<<s[i].dob.yyyy
      <<"\nStream:"<<s[i].st_code<<"\n\n\
-------------------------------------------------------------------------------\
	\nSubject Marks\n-------------\nSubject 1 :"
      <<s[i].sub1<<"\nSubject 2 :"<<s[i].sub2<<"\nSubject 3 :"<<s[i].sub3
      <<"\nSubject 4 :"<<s[i].sub4<<"\nSubject 5 :"<<s[i].sub5
      <<"\nTotal     :"<<s[i].total<<"\nGrade     :"<<s[i].div;
    cout<<"\n\nPress Any Key To Continue..";
    getch();
    }
   else break;
   }
  break;
  case 3:clrscr();			      //Show Failers
  for(i=0;i<records;i++)
   {
   if((s[i].sub1<33)||(s[i].sub2<33)||(s[i].sub3<33)||(s[i].sub4<33)||(s[i].sub5<33))
    {
    cout<<"			    Report Card Of "<<s[i].name
      <<"\nRegistration Number:"<<s[i].redgno<<"\nClass:"<<s[i].clas
      <<"\nAddress:"<<s[i].address<<"\nFather's Name:"<<s[i].fname
      <<"\nDate Of Birth:"<<s[i].dob.dd<<"-"<<s[i].dob.mm<<"-"<<s[i].dob.yyyy
      <<"\nStream:"<<s[i].st_code<<"\n\n\
-------------------------------------------------------------------------------\
	\nSubject Marks\n-------------\nSubject 1 :"
      <<s[i].sub1<<"\nSubject 2 :"<<s[i].sub2<<"\nSubject 3 :"<<s[i].sub3
      <<"\nSubject 4 :"<<s[i].sub4<<"\nSubject 5 :"<<s[i].sub5
      <<"\nTotal     :"<<s[i].total<<"\nGrade     :"<<s[i].div;
      cout<<"\n\nPress Any Key To Continue...";
    flag=1;
    getch();
    }
   }
  if(flag==0)
   {
   cout<<"No Failers Found";
   getch();
   view();
   }
  break;
  case 2:clrscr();                           //Search By Reg No
  cout<<"\n\n\tEnter Number To Be Searched:";cin>>reg;
  for(i=0;i<10;i++)
   {
   if(s[i].redgno==reg)
    {
    cout<<"			    Report Card Of "<<s[i].name
      <<"\nRegistration Number:"<<s[i].redgno<<"\nClass:"<<s[i].clas
      <<"\nAddress:"<<s[i].address<<"\nFather's Name:"<<s[i].fname
      <<"\nDate Of Birth:"<<s[i].dob.dd<<"-"<<s[i].dob.mm<<"-"<<s[i].dob.yyyy
      <<"\nStream:"<<s[i].st_code<<"\n\n\
-------------------------------------------------------------------------------\
	\nSubject Marks\n-------------\nSubject 1 :"
      <<s[i].sub1<<"\nSubject 2 :"<<s[i].sub2<<"\nSubject 3 :"<<s[i].sub3
      <<"\nSubject 4 :"<<s[i].sub4<<"\nSubject 5 :"<<s[i].sub5
      <<"\nTotal     :"<<s[i].total<<"\nGrade     :"<<s[i].div;
    flag=1;
    getch();
    }
   }
  if(flag==0)
   {
   cout<<"Record Not Found";
   getch();
   view();
   }
  break;
  case 4:                                    //Read File
  clrscr();
  cout<<"\n\n\tEnter Name Of Student:";gets(n);
  ifstream fil;
  strcat(n,".txt");
  fil.open(n);
  if(fil)
  {
	while(!fil.eof())
	{
		fil.get(ch);
		cout<<ch;
	}
  }
  else
	cout<<"\n\n         File does not exist";
  cout<<"\n\n\n\n\nPress Any Key To Continue...";
  getch();
  clrscr();
  break;
  case 5:student_menu();                      //Exit
  default:student_menu();
  }
 goto view;
 }