#include <stdio.h>
#include <stdlib.h>
#include <string.h>

#include "ml6.h"
#include "display.h"
#include "draw.h"

int main() {

  screen s;
  color c;
 
  
  c.red = 0;
  c.green = MAX_COLOR;
  c.blue = 0;
  
  clear_screen(s);

  //draw_line(200,100,80,150,s,c);
  //draw_line(150,315,90,300,s,c);
  //draw_line(330,500,250,250,s,c);
  //draw_line(300,0,250,275,s,c);
  draw_line(250,250,500,480,s,c);
  draw_line(250,250,480,500,s,c);
  draw_line(250,250,500,20,s,c);
  draw_line(250,250,480,0,s,c);
  draw_line(250,250,500,250,s,c);
  draw_line(250,250,250,500,s,c);


  draw_line(250,250,0,480,s,c);
  draw_line(250,250,20,500,s,c);
  draw_line(250,250,0,20,s,c);
  draw_line(250,250,20,0,s,c);
  draw_line(250,250,0,250,s,c);
  draw_line(250,250,250,0,s,c);



  draw_line(250,250,500,300,s,c);
  draw_line(250,250,341,500,s,c);
  draw_line(250,250,500,78,s,c);
  draw_line(250,250,320,0,s,c);

  draw_line(250,250,500,500,s,c);
  draw_line(250,250,500,0,s,c);
  draw_line(250,250,0,500,s,c);
  draw_line(250,250,0,0,s,c);
  
 


  draw_line(250,250,34,380,s,c);
  draw_line(250,250,200,89,s,c);
  draw_line(250,250,78,234,s,c);
  draw_line(250,250,123,123,s,c);
  
 






  
  draw_line(40,320,60,320,s,c);
  draw_line(80,320,100,320,s,c);
  draw_line(70,315,60,310,s,c);
  draw_line(70,315,60,310,s,c);
  draw_line(60,310,70,305,s,c);
  draw_line(65,295,75,295,s,c);
  


  display(s);
  save_extension(s, "lines.png");
}  
