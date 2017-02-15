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

  draw_line(80,80,500,50,s,c, 8);
  draw_line(90,300,150,499,s,c,1);
  draw_line(250,250,375,500,s,c,2);
  draw_line(250,250,330,0,s,c,7);


  display(s);
  save_extension(s, "lines.png");
}  
