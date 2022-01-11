#include<graphics.h>
#include<dos.h>

int main(){
int gd=DETECT,gm;
int i;
initgraph(&gd,&gm,(char *)"");//change for turbo C++ initgraph(&gd,&gm,"C:\\TURBOC3\\BGI";
int xRight = 336,yRight=220;
int xLeft=298,yLeft=134;

//loop for straight line ball movement
for(i=260;i<=335;i++){
//triangle
line(300,100,250,220); //left tilt line
line(300,100,350,220); //right tilt line
line(250,220,350,220); //straight line

setcolor(YELLOW);
setfillstyle(SOLID_FILL,YELLOW);
circle(i,220-10,10);
floodfill(i-1,220-10,YELLOW);
delay(50);
cleardevice();
}


//loop for right tilt line ball movement
for(i=1;i<=37;i++){
//triangle
line(300,100,250,220); //left tilt line
line(300,100,350,220); //right tilt line
line(250,220,350,220); //straight line

setcolor(YELLOW);
setfillstyle(SOLID_FILL,YELLOW);
circle(xRight-i,yRight-10-i*2,10);
floodfill(xRight-i-1,yRight-10-i*2,YELLOW);

delay(50);
cleardevice();
}

//loop for left tilt line
for(i=1;i<=32;i++){
//triangle
line(300,100,250,220); //left tilt line
line(300,100,350,220); //right tilt line
line(250,220,350,220); //straight line

setcolor(YELLOW);
setfillstyle(SOLID_FILL,YELLOW);
circle(xLeft-i,yLeft-10+i*2.7,10);
floodfill(xLeft-i-1,yLeft-10+i*2.7,YELLOW);

delay(50);
cleardevice();
}
//code for where ball stops at end.
line(300,100,250,220); //left tilt line
line(300,100,350,220); //right tilt line
line(250,220,350,220); //straight line
setcolor(YELLOW);
setfillstyle(SOLID_FILL,YELLOW);
circle(xLeft-i,yLeft-10+i*2.7,10);
floodfill(xLeft-i-1,yLeft-10+i*2.7,YELLOW);
getch();
closegraph();
}
