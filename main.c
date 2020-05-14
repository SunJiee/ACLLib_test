#include "acllib.h"
#include <stdio.h>

int Setup() {
  initWindow("Mywin", DEFAULT, DEFAULT, 600, 600);
  beginPaint();
  setPenColor(BLUE);
  setPenWidth(1);
  setPenStyle(PEN_STYLE_DASHDOTDOT);
  line(20, 20, 600-20, 600-20);
  putPixel(100,150,GREEN);
  endPaint();
  return 0;
}
