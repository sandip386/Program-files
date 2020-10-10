#include<stdio.h>
#include<conio.h>
#include<dos.h>
#include<string.h>
#include<graphics.h>
#include<stdlib.h>

//***************************all the function used in the game*************//
void front();
void rules();
void game();
//**************************************************************************//

//main program//
int main() {
front();
rules();
game();
return 0;
}


//****************************the begining section of the game************//
void front()
{
int gd=DETECT,gm,i;
initgraph(&gd,&gm,"C:\\TURBOC3\\BGI");
setbkcolor(BLUE);
outtextxy(250,80,"HANGING");
delay(1000);
outtextxy(310,80,"MAN");
delay(500);
//for the line//
for(i=10;i<=30;i+=10)
{
setcolor(RED);
line(230,160,368,160);
if(i==30)
{
delay(700);
setcolor(BLUE);
line(299,160,299,180);
}
else
{
line(299,160,299,180);
}
//for the head//
{
setcolor(YELLOW);
circle(299,200,20);
setfillstyle(SOLID_FILL,YELLOW);
floodfill(299,200,YELLOW);
}

//fot the right eye//
{
if(i==30)
{
setcolor(YELLOW);
ellipse(290,190,0,360,2,5);
setfillstyle(SOLID_FILL,YELLOW);
floodfill(290,190,YELLOW);
setcolor(GREEN);
 line(288,185,293,191);
 line(293,185,288,191);
}
else
{
setcolor(GREEN);
ellipse(290,190,0,360,2,5);
setfillstyle(SOLID_FILL,GREEN);
floodfill(290,190,GREEN);
}
//for the left eye//
if(i==30)
{
setcolor(YELLOW);
ellipse(306,190,0,360,2,5);
setfillstyle(SOLID_FILL,YELLOW);
floodfill(306,190,YELLOW);
setcolor(GREEN);
line(304,185,309,191);
line(309,185,304,191);

}
else
{
setcolor(GREEN);
ellipse(306,190,0,360,2,5);
setfillstyle(SOLID_FILL,GREEN);
floodfill(306,190,GREEN);
}
//for the smile//
if(i==30)
{
setcolor(GREEN);
ellipse(299,207,0,180,10,7);
setcolor(YELLOW);
ellipse(299,207,180,360,10,4);
}
else
{
setcolor(GREEN);
ellipse(299,207,180,360,10,4);
}
}
//fo the neck//
{
setcolor(13);
line(299,220,299,290);
//for the left hand//
line(299,225,288,245);
//for the right hand//
line(299,225,310,245);
//for the left leg//
line(299,291,287,310);
//for the right leg//
line(299,291,311,310);
}
}
delay(500);
setcolor(WHITE);
outtextxy(250,350,"PRESS ENTER");
outtextxy(30,450,"DEVELOPED BY SANDIP");
getch();
closegraph();
}
//***************end of the first part*************************************//
void rules()
{
printf("\t\t\tWELCOME TO HANGING MAN\n\n\n");
printf("1) You have to answer 10 question\n");
printf("2) If you fail to answer the question you will die\n");
printf("3) you have to type all answer in lowwercase\n");
printf("\nENJOY\n\n\n\n\n\n\n\n\n\n\t\t\t\tPress Enter\n");
getch();
clrscr();
}
//*************************************************************************//

//*********************************The Game Part***************************//
void game()
{
int i,k,j=0,check;
char ans[7][150];
char soln[8][550]={"shadow","130","71%","canada","32","120","24","1914"};
char question[8][550]={"what is sciophobia the fear of","At what IQ score (or above)is a person classified as gifted","Approximately waht percentage of the eaths surface is covered by water","what is the 2nd largest country in the world [by land area","what is the average number of teeth in a normal adult male?(excluding wisom teeth)","what is the life span of RED BLOOD CELL?","the number of ribs in human body is___.","when the world war 1 began?"};
int gd=DETECT,gm;
initgraph(&gd,&gm,"C:\\TURBOC3\\BGI");
clrscr();
for(i=0;i<7;i++)
{
printf("%s\n",question[i]);
 //for checking answer//
for(k=0;k<7;k++)
{
printf("->");
scanf("%s",&ans[k]);
check=strcmp(ans[k],soln[j]);
if(check==0)
{
clrscr();
//###############################for win#########################//
outtextxy(281,150,"BINGO");
//for head/
{
setcolor(YELLOW);
circle(299,200,20);
setfillstyle(SOLID_FILL,YELLOW);
floodfill(299,200,YELLOW);
}
//for eyes//
delay(500);
setcolor(GREEN);
ellipse(290,190,0,360,2,5);
setfillstyle(SOLID_FILL,GREEN);
floodfill(290,190,GREEN);
//for left eye//
delay(500);
setcolor(GREEN);
ellipse(306,190,0,360,2,5);
setfillstyle(SOLID_FILL,GREEN);
floodfill(306,190,GREEN);
//for smile//
delay(500);
{
setcolor(GREEN);
ellipse(299,207,180,360,10,4);
}
getch();
break;
//#################################################################//
}
//########################################for the loss part############//
else if(k==0)
{
setcolor(GREEN);
line(540,80,620,80);
line(580,80,580,110);
}
else if(k==1)
{
//for head//
setcolor(YELLOW);
circle(580,140,30);
setfillstyle(SOLID_FILL,YELLOW);
floodfill(580,140,YELLOW);
//for eyes//
setcolor(RED);
ellipse(565,124,0,360,3,5);
setfillstyle(SOLID_FILL,RED);
floodfill(565,124,RED);
setcolor(RED);
ellipse(595,124,0,360,3,5);
setfillstyle(SOLID_FILL,RED);
floodfill(595,124,RED);
}
//for smile//
else if(k==2)
{
setcolor(BLUE);
ellipse(580,150,180,360,10,5);
}
//for neck//
else if(k==3)
{
setcolor(9);
line(580,171,580,290);
}
//for hand//
else if(k==4)
{
setcolor(8);
line(580,174,550,200);
line(580,174,610,200);
}
//for leg//
else if(k==5)
{
setcolor(10);
line(580,290,550,316);
line(580,290,610,316);
}
//for dead//
else if(k==6)
{
setcolor(7);
//for rope disapper//
line(580,80,580,110);
//for eye//
setcolor(YELLOW);
ellipse(565,124,0,360,3,5);
setfillstyle(SOLID_FILL,YELLOW);
floodfill(565,124,YELLOW);
setcolor(YELLOW);
ellipse(595,124,0,360,3,5);
setfillstyle(SOLID_FILL,YELLOW);
floodfill(595,124,YELLOW);
setcolor(RED);
line(565,124,570,130);
line(570,124,565,130);
line(595,124,600,130);
line(600,124,595,130);
//for smile//
setcolor(YELLOW);
ellipse(580,150,180,360,10,5);
setcolor(BLUE);
ellipse(580,150,0,180,10,5);
//for message//
outtextxy(200,360,"SORRY YOU HAVE LOST THE GAME");
getch();

}
//#####################################################################//
}//for j//
if(check==0)
{
clrscr();
j++;
}
else
{
clrscr();
break;
}
}//for i//
if(check==0)
{
clrscr();
outtextxy(180,150,"CONGRATULATION ON CLEARING GAME");
//for head/
{
setcolor(YELLOW);
circle(299,200,20);
setfillstyle(SOLID_FILL,YELLOW);
floodfill(299,200,YELLOW);
}
//for eyes//
delay(500);
setcolor(GREEN);
ellipse(290,190,0,360,2,5);
setfillstyle(SOLID_FILL,GREEN);
floodfill(290,190,GREEN);
//for left eye//
delay(500);
setcolor(GREEN);
ellipse(306,190,0,360,2,5);
setfillstyle(SOLID_FILL,GREEN);
floodfill(306,190,GREEN);
//for smile//
delay(500);
{
setcolor(GREEN);
ellipse(299,207,180,360,10,4);
}
getch();
}
}//for void//
//real one program//

//###########################for winning###########################//
