

//This func. is called to create a menu containing args passed as options
//num=no.of items in menu
//it also returns a value indicating the fn selected
//it also facilitates navigation through options using arrow keys
int menu(int x,int y,int num,char a[25],char b[25],char c[25],char d[25],char e[25],char f[25],char g[25],char title[40],char extra[2])
 {
 char h[25]="";
 char ch;
 int key=72,sel=1,lengthest=0;//dos.h function--KEY
 //sel will point to the option that is highlighted
 //Get all items in menu in an array,will help when we navigate through keys
 char item[8][25];
 strcpy(item[0],a);
 strcpy(item[1],b);
 strcpy(item[2],c);
 strcpy(item[3],d);
 strcpy(item[4],e);
 strcpy(item[5],f);
 strcpy(item[6],g);
 strcpy(item[7],h);

 for(int i=0;i<num;i++) //num--number of items
  {
  if(strlen(item[i])>lengthest) lengthest=strlen(item[i]);
  }//finding max length string for formatting
 if(strlen(title)>lengthest) lengthest=strlen(title);
 box(x,y-1,lengthest+1,num+3);//calling the box fn to write box

 x++;//moving text to be printed one pos away from box boundary
 textbackground(default_back);textcolor(default_fore);
 gotoxy(x,y);cputs(title);
 y = y + 2;

 //Print the first option in menu.
 textbackground(sel_back_color);textcolor(sel_text_color);
 gotoxy(x,y);cputs(a);
 textbackground(back_color);textcolor(text_color);
 //Then print the rest as default.
 for(i=1;i<num;i++)
  {
  gotoxy(x,y+i);
  cputs(item[i]);
  }
//this loop allows navigation through up-down keys
 while (key!=13) //Until Enter Key is pressed loop works
  {
  key=getch();

  //Otherwise pressing any invalid key will remove the selection.
  //Note : 49 is the ascii code of '1'
  if((key==72)||(key==80)||(key<49+num&&key>49)||(key==27))//49 ?? 27 esc.key
   text(x,y+sel-1,1,item[sel-1]);//text fn will highlight the option
				 //selected in item[],...3rd arg i.e 1 passed to text
				//fn would cause no highlighting
  switch(key)
   {
   case 72: //UP
    //Note that 'sel' starts at 1 and not 0.
    if(sel==1) text(x,y+num-1,0,item[num-1]); //points to middle if num=3
    else text(x,y+sel-2,0,item[sel-2]);

    if(sel==1) sel=num;//initializing sel
    else sel--;//decrementing sel (up arrow)

    break;
   case 80: //DOWN
    if(sel==num) text(x,y,0,item[0]);
    else text(x,y+sel,0,item[sel]);

    if(sel==num) sel=1;
    else sel++;

   break;
   //Number selections.
   case '1':
    text(x,y,0,item[0]);
    sel=1;
    goto end;
   case '2':
    text(x,y+1,0,item[1]);
    sel=2;
    goto end;
   case '3':
    if(num>=3)
     {
     text(x,y+2,0,item[2]);
     sel=3;
     goto end;
     }
    else break;
   case '4':
    if(num>=4)
     {
     text(x,y+3,0,item[3]);
     sel=4;
     goto end;
     }
    else break;
   case '5':
    if(num>=5)
     {
     text(x,y+4,0,item[4]);
     sel=5;
     goto end;
     }
    else break;
   case '6':
    if(num>=6)
     {
     text(x,y+5,0,item[5]);
     sel=6;
     goto end;
     }
    else break;
   case '7':
    if(num>=7)
     {
     text(x,y+6,0,item[6]);
     sel=7;
     goto end;
     }
    else break;
   case '8':
    if(num==8)
     {
     text(x,y+7,0,item[7]);
     sel=8;
     goto end;
     }
    else break;

   case 27:sel=0; goto end; //Escape Button.
   default:break;
   }

  }

 end:
 textbackground(default_back);textcolor(default_fore);
 return sel;//return position selected
 }
