#include<stdio.h>
#include<conio.h>
#include"show1.h"
#include"write1.h"
#include"read1.h"
#include"append2.h"
#include"rename1.h"
#include"delete1.h"
#include"copy1.h"
#include<graphics.h>
#include<dir.h>
#include<process.h>
void main()
{
char ch;
char c;
int gd=DETECT,gm,err,maxx,maxy;
 clrscr();
 initgraph(&gd,&gm,"c:\\turboc3\\bgi");
 err=graphresult();
 if(err!=grOk)
 {
  printf("graphics error : %s",grapherrormsg(err));
  getch();
  //exit(1);
}
 maxx=getmaxx() ;
 maxy=getmaxy();
 setbkcolor(BLUE);
 rectangle(20,20,maxx-20,maxy-20);
 //setcolor(4);
 //line(190,10,maxx-200,10);
 //line(190,9,maxx-200,9);
 //line(190,8,maxx-200,8);
 //line(190,7,maxx-200,7);
 //printfxy(200,15,"RESULT:");
 //setcolor(BROWN);
 //settextstyle(2,1,3);
    //clrscr();
   // textcolor(RED+BLINK);//this one is blinking the text
   // cprintf("Color is RED with blinkingnn");
ch='1';
do
{
printf("\n\n\t\t\t MENU\n");
printf("\tpress 1 ___ Showing all the Files and Folders\n");
printf("\tpress 2 ___ Creating a particular File\n");
printf("\tpress 3 ___ Reading the contents of File\n");
printf("\tpress 4 ___ Merging the contents of Two File\n");
printf("\tpress 5 ___ Rename the File\n");
printf("\tpress 6 ___ Deleting the File\n");
printf("\tpress 7 ___ Creating a COPY of File\n");
	fflush(stdin);
	printf("\t\Enter your CHOICE ___ ");
	scanf("%c",&c);
	fflush(stdin);
	switch(c)
	{
	  case '1':     setbkcolor(GREEN);
			show1();
			break;
	  case '2':     setbkcolor(CYAN);
			write1();
			break;
	  case '3':     setbkcolor(RED);
			read1();
			break;
	  case '4':     setbkcolor(MAGENTA);
			append2();
			break;
	  case '5':     setbkcolor(BROWN);
			rename1();
			break;
	  case '6':     setbkcolor(DARKGRAY);
			delete1();
			break;
	  case '7':     setbkcolor(LIGHTGREEN);
			copy1();
			break;
	  default  :    setbkcolor(LIGHTBLUE);
			printf("\tWrong ENTRY\n\t TRY again\n");

	}
	 setbkcolor(BLUE);
	 printf("Wanna Continue\n");
	 printf("Enter your Choice  (y/n)  :  ");
	 fflush(stdin);
	 scanf("%c",&ch);
	 if(ch=='y')  ;
	 else ch='0';
	cleardevice();



}while(ch=='y');



setbkcolor(9);
getch();
restorecrtmode();
closegraph();


}