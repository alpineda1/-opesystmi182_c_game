#include <ncurses.h>
#include <unistd.h>
#include <curses.h>
#include <stdio.h>

int chance;
char name[2][30];
int box;
char a[3][3];
int navigate (char a[3][3], int box, int player, int key);
//rand()
int turns;
void putintobox(char a[3][3], char ch, int box);

void showframe(int posx, int posy)
{

  int hr=196, vr=179; // These are ascii character which display the lines
  int crossbr=197;    // Another ascii character
  int x=posx, y=posy;
  int i,j;

  gotoxy(35,4); cprintf("TIC TAC TOE");
  gotoxy(35,5); for(i=0;i<11;i++) cprintf("%c",223);


  for(i=0;i<2;i++)
  {
    for(j=1;j<=11;j++)
     {
      gotoxy(x,y);
      printf("%c",hr);
      x++;p;    x++;
     }
    x=posx; y+=2;
  }
  x=posx+3; y=posy-1;

  for(i=0;i<2;i++)
  {

   for(j=1;j<=5;j++)
   {
      gotoxy(x,y);
      printf("%c",vr);
      y++;
   }
   x+=4;y=posy-1;
  }


  x=posx+3; y=posy;  
  gotoxy(x,y);
  printf("%c",crossbr);

   x=posx+7; y=posy;      
  gotoxy(x,y);
  printf("%c",crossbr);

  x=posx+3; y=posy+2;                    
  gotoxy(x,y);
  printf("%c",crossbr);

  x=posx+7; y=posy+2;         
  gotoxy(x,y);
  printf("%c",crossbr);

}

void showbox(char ch, int box)
{
   switch(box)
   {
     case 1 :	gotoxy(_x+1,_y-1); printf("%c",ch); break; //1st box
     case 2 :	gotoxy(_x+5,_y-1); printf("%c",ch); break; //2nd box
     case 3 :	gotoxy(_x+9,_y-1); printf("%c",ch); break; //3rd box
     case 4 :	gotoxy(_x+1,_y+1); printf("%c",ch); break; //4th box
     case 5 :	gotoxy(_x+5,_y+1); printf("%c",ch); break; //5th box
     case 6 :	gotoxy(_x+9,_y+1); printf("%c",ch); break; //6th box
     case 7 :	gotoxy(_x+1,_y+3); printf("%c",ch); break; //7th box
     case 8 :	gotoxy(_x+5,_y+3); printf("%c",ch); break; //8th box
     case 9 :	gotoxy(_x+9,_y+3); printf("%c",ch); break; //9th box
   }
}



