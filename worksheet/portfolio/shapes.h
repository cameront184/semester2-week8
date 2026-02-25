
/*
  Structure definitions
*/

typedef struct _point {
    float x;
    float y;
} Point;

typedef struct _line {
    Point p[2];
} Line;

typedef struct _triangle {
    Point p[3];
} Triangle;

/*
  Structure initialisation functions
*/

Point makePoint( float x, float y );                    // create and return a Point structure
Line makeLine( Point p1, Point p2 );                    // create and return a Line structure
Triangle makeTriangle( Point p1, Point p2, Point p3 );  // create and return a Triangle structure

/*
  Structure calculation functions (requires <math.h>)
*/

float lineLength( Line l );        // calculate the length of a Line 
float triangleArea( Triangle t );  // calculate the area of a Triangle

/*
  Structure comparison functions (requires <stdbool.h>)

  Note: 
  * to compare 2 points you should not test float values for equality
  * test if they are "close enough"
  * eg. float values are accurate to 8 d.p.
  * abs(lineLength(p1,p2))<1.0e-6 would be sufficient to say p1 and p2 are the same point 
*/

bool samePoint( Point p1, Point p2 );         // return true only if the point is the same location
bool pointInLine( Point p, Line l);           // return true only if the point is one of the line endpoints
bool pointInTriangle( Point p, Triangle t );  // return true only if the point is one of the triangle vertices
