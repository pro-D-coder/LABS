#include<stdio.h> 
#include<conio.h> 
#include<graphics.h> 
#include<dos.h> 
int main() { 
 int gd = DETECT, gm = DETECT; 
 int x, y = 0, j, t = 400, c = 1; 
 int xBlink=30,yBlink=30,doBlink=1;
 initgraph(&gd, &gm, (char *)""); //change for turbo C++ initgraph(&gd,&gm,"C:\\TURBOC3\\BGI");
 
 
 while(!kbhit()){ //blink until nothing is pressed.
 setcolor(YELLOW);
 setfillstyle(SOLID_FILL,YELLOW);
 
 //face
 circle(300,200,200);
 floodfill(300,199,YELLOW);
 
 setcolor(BLACK);
 setfillstyle(SOLID_FILL,BLACK);
 
 //eye1
 ellipse(200,120,0,360,xBlink,yBlink);
 floodfill(200,120,BLACK);
 //eye2
 ellipse(400,120,0,360,xBlink,yBlink);
 floodfill(400,120,BLACK);
 //smile
 arc(300,200,200,340,150);
 floodfill(400,120,BLACK);
 
 if(doBlink){
 		yBlink -= 5; //blink speed
 }
 if(yBlink<=0){
 	doBlink = 0; //do not close eye
 	yBlink=30; //open eye suddenly
 }
 else{
 	doBlink = 1; //close eye
 }
 delay(80);
 cleardevice();
}
 getch();
 closegraph();
 
}
