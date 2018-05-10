/* Function to add the student record
*/


#include <conio.h>
#include <fstream.h>

/*this function adds the student record to files*/

/****************************Function To Add Data***************************/
void add()
 {
 textbackground(16);
 textcolor(7);
 int i=0;
 char ch='y';//initializing choice to continue or not
 char fn[20];
 fstream file;//creating a filestream
 do
  {
  records++;
  ss:
  clrscr();
  int st;
  int t_redg,mark;
  gotoxy(20,2);
  cout<<"Students Data Collector";
  gotoxy(20,3);
  cout<<"=======================";
  gotoxy(19,7);
  cout<<"Enter The Following";
  gotoxy(19,8);
  cout<<"Registaration No:";gotoxy(36,8);cin>>t_redg;
  s[i].redgno=t_redg; //entering data and storing them in structure variables
  gotoxy(20,10);
  cout<<"Name          :";gotoxy(35,10);gets(s[i].name);
  gotoxy(20,12);
  cout<<"Address       :";gotoxy(35,12);gets(s[i].address);
  gotoxy(20,14);
  cout<<"Father's Name :";gotoxy(35,14);gets(s[i].fname);
  gotoxy(20,16);
  cout<<"Year          :";gotoxy(35,16);cin>>s[i].clas;
  gotoxy(20,18);
  cout<<"Date Of Birth :DD MM YYYY";gotoxy(35,18);//printing dd mm yy which
  cin>>s[i].dob.dd>>s[i].dob.mm>>s[i].dob.yyyy;//will be overwritten on entry
					       //as dd mm yy is entry is
					       //also taking place on (35,18)
  sa:
  clrscr();//screen will be cleared for selection of stream
  gotoxy(20,2);
  cout<<"Student Data Entry Form";
  gotoxy(20,3);
  cout<<"=======================";
  gotoxy(10,7);
  cout<<"Enter The Stream Code:\n1.MCA Stream\n2.MBA Stream";
  gotoxy(32,7);
  cin>>st;
  switch(st)
   {
   case 1:strcpy(s[i].st_code,"MCA");//depending on choice stream will be stored in struct
  //clearing screen for entry of marks
  clrscr();
  gotoxy(20,2);
  cout<<"Student Data Entry Form";
  gotoxy(20,3);
  cout<<"=======================";
  gotoxy(10,5);
  cout<<"Enter The Following Marks";
  gotoxy(10,10);
  cout<<"Sub1(MC0"<<s[i].clas<<"A):";//creating sub code, using year(s[i].clas)
  gotoxy(30,10);
  cin>>s[i].sub1;
  gotoxy(10,12);
  cout<<"Sub2(MC0"<<s[i].clas<<"B):";                                          //Sub 2
  gotoxy(30,12);
  cin>>s[i].sub2;
  gotoxy(10,14);
  cout<<"Sub3(MC0"<<s[i].clas<<"C):";					    //Sub 3
  gotoxy(30,14);
  cin>>s[i].sub3;
  gotoxy(10,16);
  cout<<"Sub4(MC0"<<s[i].clas<<"D):";					     //Sub 4
  gotoxy(30,16);
  cin>>s[i].sub4;
  gotoxy(10,18);						     //Sub 5
  cout<<"Sub5(MC0"<<s[i].clas<<"E):";
  gotoxy(30,18);
  cin>>s[i].sub5;
   break;
   case 2:strcpy(s[i].st_code,"MBA");
   clrscr();
  gotoxy(20,2);
  cout<<"Student Data Entry Form";
  gotoxy(20,3);
  cout<<"=======================";
  gotoxy(10,5);
  cout<<"Enter The Following Marks";
  gotoxy(10,10);
  cout<<"Sub1(MB0"<<s[i].clas<<"A):";                                           //Sub 1
  gotoxy(30,10);
  cin>>s[i].sub1;
  gotoxy(10,12);
  cout<<"Sub2(MB0"<<s[i].clas<<"B):";                                          //Sub 2
  gotoxy(30,12);
  cin>>s[i].sub2;
  gotoxy(10,14);
  cout<<"Sub3(MB0"<<s[i].clas<<"C):";					    //Sub 3
  gotoxy(30,14);
  cin>>s[i].sub3;
  gotoxy(10,16);
  cout<<"Sub4(MB0"<<s[i].clas<<"D):";					     //Sub 4
  gotoxy(30,16);
  cin>>s[i].sub4;
  gotoxy(10,18);						     //Sub 5
  cout<<"Sub5(MB0"<<s[i].clas<<"E):";
  gotoxy(30,18);
  cin>>s[i].sub5;
   break;
   default:cout<<"\n\t\t\tInvalid Type.\n\nDo you want to continue?(Y/N)...";
	   cin>>ch;              //for invalid type entry....
	   if (ch=='y'||ch=='Y')// if yes, user will be given another chance
	   {                    //to enter stream
	   clrscr();
	   goto sa;
	   }
	   else add();//if no he has to enter the current record again
   }
    s[i].total=s[i].sub1+s[i].sub2+s[i].sub3+s[i].sub4+s[i].sub5;//calc total
  if((s[i].sub1<33)||(s[i].sub2<33)||(s[i].sub3<33)||(s[i].sub4<33)||(s[i].sub5<33))
  strcpy(s[i].div,"Fail");
  else if(s[i].total>=375)            //calc division
  strcpy(s[i].div,"Distintion");
  else if((s[i].total>=300)&&(s[i].total<375))
  strcpy(s[i].div,"First Class");
  else if((s[i].total>=250)&&(s[i].total<300))
  strcpy(s[i].div,"Second Class");
  else if(s[i].total<165)
  strcpy(s[i].div,"Fail");

  strcat(fn,s[i].name);
  strcat(fn,".txt"); //appending txt to the person's name
  file.open(fn,ios::out); //opening a file by his [name].txt in output mode
   if(!file)
    {         //???????
    gotoxy(25,79);
    cout<<".";
    }
  //writing all details of persons deatils and his marks to his file
  file<<"                            Report Card Of "<<s[i].name
      <<"\nRegistration Number:"<<s[i].redgno<<"\nClass:"<<s[i].clas
      <<"\nAddress:"<<s[i].address<<"\nFather's Name:"<<s[i].fname
      <<"\nDate Of Birth:"<<s[i].dob.dd<<"-"<<s[i].dob.mm<<"-"<<s[i].dob.yyyy
      <<"\nStream:"<<s[i].st_code<<"\n\n\
-------------------------------------------------------------------------------\
	\nSubject Marks\n-------------\nSubject 1 :"
      <<s[i].sub1<<"\nSubject 2 :"<<s[i].sub2<<"\nSubject 3 :"<<s[i].sub3
      <<"\nSubject 4 :"<<s[i].sub4<<"\nSubject 5 :"<<s[i].sub5
      <<"\nTotal     :"<<s[i].total<<"\nGrade     :"<<s[i].div;
  file.close();

  i++;//incrementing the structure array subscript
  gotoxy(10,22);
  cout<<"Want More Record To Be Written?(Y/N)......";
  cin>>ch;
  }while(ch=='y'||ch=='Y');//if yes repeat whole process again
  if(ch=='n'||ch=='N') student_menu();//if no call student menu
 }