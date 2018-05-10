

/******************************Function To Modify Marks**********************/
void mod()
 {
 int regno,flag=0,i;
 char ch;
 student te;
 clrscr();
 cout<<"\n\nEnter The Reg No to be modified:";
 cin>>regno;
 for(i=0;i<10;i++)
  {
  if(s[i].redgno==regno)
   {
   flag=1;                                    //display sub marks and ask
   cout<<"\nSubject 1    :"<<s[i].sub1;       //whether modification is needed or not
   cout<<"\nDo you want to change this?[y/n]";
   ch=getch();
   if(ch=='y')
    {
    cout<<"\nEnter New Value:";
    cin>>te.sub1;
    s[i].sub1=te.sub1;
    }
   cout<<"\nSubject  2  :"<<s[i].sub2;
   cout<<"\nDo you want to change this?[y/n]";
   ch=getch();
   if(ch=='y')
    {
    cout<<"\nEnter New Value:";
    cin>>te.sub2;
    s[i].sub2=te.sub2;
    }
   cout<<"\nSubject 3   :"<<s[i].sub3;
   cout<<"\nDo you want to change this?[y/n]";
   ch=getch();
   if(ch=='y')
    {
    cout<<"\nEnter New Value:";
    cin>>te.sub3;
    s[i].sub3=te.sub3;
    }
   cout<<"\nSubject 4   :"<<s[i].sub4;
   cout<<"\nDo you want to change this?[y/n]";
   ch=getch();
   if(ch=='y')
    {
    cout<<"\nEnter New Value:";
    cin>>te.sub4;
    s[i].sub4=te.sub4;
    }
   cout<<"\nSubject 5   :"<<s[i].sub5;
   cout<<"\nDo you want to change this?[y/n]";
   ch=getch();
   if(ch=='y')
    {
    cout<<"\nEnter New Value:";
    cin>>te.sub5;
    s[i].sub5=te.sub5;
    }
   }
  }
  if(flag==0) cout<<"Invalid Reg No!";
 }
