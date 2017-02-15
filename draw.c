#include <stdio.h>
#include <stdlib.h>

#include "ml6.h"
#include "display.h"
#include "draw.h"

//Insert your line algorithm here
void draw_line(int x0, int y0, int x1, int y1, screen s, color c){
  int deb;
  double m;
  int skip = 0;
  if(x0 == x1){
    skip ++;
    deb = 21;
  }
  
  if(!skip){
    m = ((y0-y1) * 1.0)/(x0-x1);
    
    if(m <= 1 && m> 0){
      deb = 1; 
    }
    if(m > 1){
      deb = 2;
    }
    if(m < 0 && m > -1){
      deb = 8; 
    }
    if(m <= -1){
      deb = 7; 
    }
    if(m == 0){
      deb = 20;
    }
  }

  if(x0 > x1){
    int temp = x0;
    x0 = x1;
    x1 = temp;
    temp = y0;
    y0 = y1;
    y1 = temp;
  }
  if (deb == 1){
    int A = y1 - y0;
    int B = -1 * (x1 -x0);
    int d = (2 * A) + B;
    while(x0 < x1){
      plot(s,c,x0,y0);
      if(d > 0){
	y0 ++;
	d += (2 * B);
      }
      x0 ++;
      d += (2 * A);
    }
  }
  if (deb == 2){
    int A = y1 - y0;
    int B = -1 * (x1 -x0);
    int d =  A + (2 * B);
    while(y0 < y1){
      plot(s,c,x0,y0);
      if(d < 0){
	x0 ++;
	d += (2 * A);
      }
      y0 ++;
      d += (2 * B);
    }
  }
  if (deb == 7){
    int A = y1 - y0;
    int B = -1 * (x1 -x0);
    int d =  A - (2 * B);
    while(y0 > y1){
      plot(s,c,x0,y0);
      if(d > 0){
	x0 ++;
	d += (2 * A);
      }
      y0 --;
      d -= (2 * B);
    }
  }
  if (deb == 8){
    int A = y1 - y0;
    int B = -1 * (x1 -x0);
    int d = (2 * A) - B;
    while(x0 < x1){
      plot(s,c,x0,y0);
      if(d < 0){
	y0 --;
	d -= (2 * B);
      }
      x0 ++;
      d += (2 * A);
    }
  }
  if(deb == 20){
    while(x0 <=x1){
      plot(s,c,x0,y0);
      x0 ++;
    }
  }
  if(deb == 21){
    if(y0 > y1){
      int t = y1;
      y1 = y0;
      y0 = t;
    }
    while(y0 <=y1){
      plot(s,c,x0,y0);
      y0 ++;
    }
  }
  
  
  
}
