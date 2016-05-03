////////////////////////////////////////////////////////////////////////
// ASCII-BROT :: Student Exercise
/*
  TASK ONE:   Implement the incomplete functions:
 
              - int mandelbrot(double x, double y);
              - void square(point * p);
              - double lengthSquared(point * p);
 
  TASK TWO:   Allow the user to specify a different centre point:
 
              - Currently the centre point is always (0,0).
	      - By modifying the range values for X/Y axis, you can
                set the centre point to be any 2D point you like.
 
  CHALLENGE:  Provide a way for the user to specify a 'zoom' level for
              rendering the mandelbrot set.
 
	      - In order to implement zoom you will have to replace
	        the calculation for scaling the provided x/y values.
	      - The zoom level is the number of complex plane units
                between each coordinate represented by a character
                in the Ascii-Brot.
	      - For example, initially we have a height of 30 characters,
                with a Y-Axis range of (1 - -1) == 2. This means that
                there are 30/2 units between each coordinate represented
		by a character in the Ascii-Brot.
 
		For this example if we replaced the axis ranges with zoom,
		then a zoom level of 30/2 would give us the same mandelbrot.
 */
////////////////////////////////////////////////////////////////////////
 
// std headers
#include <stdlib.h>
#include <stdio.h>
#include <assert.h>
 
// logic defines
#define TRUE   1
#define FALSE  0
 
// ascii-brot size
#define HEIGHT 30
#define WIDTH  72
#define MAX_ITERATIONS 255
 
// ascii-brot viewport
#define MIN_X -1.5
#define MAX_X  1
#define MIN_Y -1
#define MAX_Y  1
#define X_RANGE (MAX_X - MIN_X)
#define Y_RANGE (MAX_Y - MIN_Y)
 
// 2D point (also represented as a 'vector' in mathematics)
typedef struct _point {
  double x;
  double y;
} point;
 
// these are implemented for you
void setPoint(point * p, double x, double y);
void addPoint(point * p, point * q);
 
// *** STUDENT REQUIRED TO COMPLETE THESE FUNCTIONS *** //
int mandelbrot(double x, double y);
void square(point * p);
double lengthSquared(point * p);
 
 
////////////////////////////////////////////////////////////////////////
// complete the mandelbrot algorithm to render a beautiful ASCII-BROT!
 
int main(int argc, char * argv[]) {
  printf(" UNSW Computing 1 - ASCII-BROT\n");
 
  // iterate through each row
  int x = 0;
  int y = 0;
 
  while (y < HEIGHT) {
    // iterate through each column
    while (x < WIDTH) {
      if (mandelbrot(x, y)) {
	printf("*");
      } else {
	printf(" ");
      }
      x++;
    }
 
    printf("\n");
    x = 0;
    y++;
  }
 
  return EXIT_SUCCESS;
}
 
 
////////////////////////////////////////////////////////////////////////
// implement mandelbrot escape-time algorithm for a given x,y coordinate
 
int mandelbrot(double x, double y) {
  int result = TRUE;
 
  /*
 
     ... your code goes here
 
  */
 
  return result;
}
 
 
////////////////////////////////////////////////////////////////////////
// helper function to assign values to a point type
 
void setPoint(point * p, double x, double y) {
  assert(p != NULL);
  p->x = x;
  p->y = y;
}
 
 
////////////////////////////////////////////////////////////////////////
// adds the x/y values of another point 'q' to a given point 'p'
 
void addPoint(point * p, point * q) {
  p->x += q->x;
  p->y += q->y;
}
 
 
////////////////////////////////////////////////////////////////////////
// compute the length/magnitude squared of a 2D vector
 
double lengthSquared(point * p) {
  assert(p != NULL);
 
  /*
 
     ... your code goes here
 
  */
 
  return 0;
}
 
 
////////////////////////////////////////////////////////////////////////
// performs the calculation Z^2, where Z is a 2D point/vector
 
void square(point * p) {
  assert(p != NULL);
 
  /*
 
     ... your code goes here
 
  */
 
}
 
// EOF