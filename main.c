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
  draw_line(250,250,480, 0,s,c);
  draw_line(250,250,500,250,s,c);
  draw_line(250,250,250,500,s,c);
  


  display(s);
  save_extension(s, "lines.png");
}  
