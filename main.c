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

  //draw_line(500,50,80,80,s,c);
  //draw_line(150,499,90,300,s,c);
  //draw_line(375,500,250,250,s,c);
  // draw_line(330,0,250,250,s,c);
  draw_line(250,250,500,500,s,c);
  draw_line(250,250,0,480,s,c);
  draw_line(250,250,0,0,s,c);
  draw_line(250,250,500,20,s,c);
  


  display(s);
  save_extension(s, "lines.png");
}  
