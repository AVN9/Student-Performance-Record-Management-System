
//
/*****************************Draws a box*****************************/
void box(int x,int y,int width,int height)
 {
 int i,j;
 //Clear the space,in case anything is already written at that place i.e
 //it will overwrite a window on it
 for(j=y;j<y+height;j++)
 for(i=x;i<x+width;i++)
  {
  gotoxy(i,j);cputs(" ");
  }
 //Draw the box
 for(i=x+1;i<x+width;i++)
  {
  gotoxy(i,y);cputs("Í");
  gotoxy(i,y+height);cputs("Í");
  }
 for(i=y+1;i<y+height;i++)
  {
  gotoxy(x,i);cputs("º");
  gotoxy(x+width,i);cputs("º");
  }
 //The Corners
 gotoxy(x,y);cputs("É");
 gotoxy(x+width,y);cputs("»");
 gotoxy(x,y+height);cputs("È");
 gotoxy(x+width,y+height);cputs("¼");
 }//end of fn



//Default Colour Settings
int default_back=BLACK;
int default_fore=LIGHTGRAY;
int sel_back_color=LIGHTGRAY; //Selected Back Colour
int sel_text_color=WHITE; //Selected Text Colour
int back_color=BLACK; //Default Back Colour
int text_color=WHITE; //Default Text Colour

//Other options
int fill=1; //This will make all menus equal in length
int show_numbers=0; //Will show Item index

/********************BackMenu() for intractive menus***********************/
//The function highlights text.in var txt
void text(int x,int y,int sel,char txt[25])
 {
 if(!sel) //if sel=0 dont highlight
  {
  textbackground(sel_back_color);
  textcolor(sel_text_color);
  }
 else
  {
  textbackground(back_color);
  textcolor(text_color);
  }
 gotoxy(x,y);
 cputs(txt);
 }