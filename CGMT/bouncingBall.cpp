#include<stdio.h> 
#include<conio.h> 
#include<graphics.h> 
#include<dos.h> 
int main() { 
 int gd = DETECT, gm = DETECT; 
 int x, y = 0, j, t = 400, c = 1; 
 initgraph(&gd, &gm, ""); 
 setcolor(WHITE); 
 setfillstyle(SOLID_FILL, RED); 
 for (x = 40; x < 602; x++) { 
  cleardevice(); 
  circle(x, y, 30); 
  floodfill(x, y, WHITE); 
  delay(30); 
  if (y >= 400) { 
   c = 0; 
   t -= 20; 
  } 
  if (y <= (400 - t)) 
       c = 1; 
  y = y + (c ? 15 : -15); 
 } 
 getch(); 
}
