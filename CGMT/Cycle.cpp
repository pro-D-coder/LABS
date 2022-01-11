#include<graphics.h>
#include<dos.h>

int main(){
	int gd=DETECT,gm;
	initgraph(&gd,&gm,(char *)""); //change for turbo C++ initgraph(&gd,&gm,"C:\\TURBOC3\\BGI";
	int x = getmaxx();
	int y =getmaxy();
	int window_margin = 10;
	int tyre_radius = 30;
	printf("%d %d",x,y);
	for (int i = 10; i < x-150-tyre_radius-window_margin; i++) {
		rectangle(10,10,x-window_margin,y-window_margin); //window in which cycle move
        // Upper body of cycle
        line(50+window_margin+i,y-110-window_margin,150+i+window_margin,y-110-window_margin);
        line(50+window_margin+i,y-110-window_margin,50+i+window_margin,y-30-window_margin);
        line(150+window_margin+i,y-110-window_margin,150+i+window_margin,y-30-window_margin);
  
        // Wheel
        circle(150 + i+window_margin, y-tyre_radius-window_margin, tyre_radius);
        circle(50 + i+window_margin, y-tyre_radius-window_margin, tyre_radius);
  
        // Stop the screen for 10 secs
        delay(10);
  
        // Clear the screen
        cleardevice();
    }
    for (int i = 10; i<=y-window_margin-tyre_radius-150; i++) {
		rectangle(10,10,x-window_margin,y-window_margin); //window in which cycle move
        // Upper body of cycle
        line(x-110-tyre_radius-window_margin,y-150-window_margin-i,x-110-tyre_radius-window_margin,y-50-window_margin-i);
        line(x-110-tyre_radius-window_margin,y-150-window_margin-i,x-tyre_radius-window_margin, y-150-window_margin-i);
        line(x-110-tyre_radius-window_margin,y-50-window_margin-i,x-tyre_radius-window_margin, y-50-window_margin-i);
        
  
        // Wheel
        circle(x-tyre_radius-window_margin, y-50-window_margin-i, tyre_radius);
        circle(x-tyre_radius-window_margin, y-150-window_margin-i, tyre_radius);
  
        // Stop the screen for 10 secs
        delay(10);
  
        // Clear the screen
        cleardevice();
    }
    
    for (int i = 10; i <= x-150-tyre_radius-window_margin; i++) {
		rectangle(10,10,x-window_margin,y-window_margin); //window in which cycle move
        // Upper body of cycle
        line(x-50+window_margin-i,110+window_margin,x-150-i+window_margin,110+window_margin);
        
		line(x-50+window_margin-i,110+window_margin,x-50-i+window_margin,50-window_margin);
        line(x-150+window_margin-i,50+window_margin,x-150-i+window_margin,150-window_margin);
		
  
        // Wheel
        circle(x-150-i+window_margin, 50-window_margin, tyre_radius);
        circle(x-50-i+window_margin, 50-window_margin, tyre_radius);
  
        // Stop the screen for 10 secs
        delay(10);
  
        // Clear the screen
        cleardevice();
    }
    
    for (int i = 10; i<=y+window_margin+tyre_radius; i++) {
		rectangle(10,10,x-window_margin,y-window_margin); //window in which cycle move
        // Upper body of cycle
        line(150-tyre_radius-window_margin,150-window_margin+i,150-tyre_radius-window_margin,50-window_margin+i);
        line(tyre_radius+window_margin,150-window_margin+i,150-tyre_radius-window_margin, 150-window_margin+i);
		line(tyre_radius+window_margin,50-window_margin+i,150-tyre_radius-window_margin, 50-window_margin+i);        
        // Wheel
        circle(tyre_radius+window_margin, 50-window_margin+i, tyre_radius);
        circle(tyre_radius+window_margin, 150-window_margin+i, tyre_radius);
  
        // Stop the screen for 10 secs
        delay(10);
  
        // Clear the screen
        cleardevice();
    }
	getch();
	closegraph();
}

