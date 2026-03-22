
#include <stdbool.h>
#include <math.h>

#include "shapes.h"

Point makePoint( float x, float y ) {              // Initialise a Point struct with the x and y values
    Point p;
    p.x = x;
    p.y = y;
    return p;
}

// complete other functions below

Line makeLine (Point p1, Point p2) {               // Build a Line from the two Points stored in an array
    Line l;
    l.p[0] = p1;
    l.p[1] = p2;
    return l;
}

Triangle makeTriangle (Point p1, Point p2, Point p3) {           // Build a Triangle from the three Points
    Triangle t;
    t.p[0] = p1;
    t.p[1] = p2;
    t.p[2] = p3;
    return t;
}

float lineLength(Line l) {                           // Compute the distance between the two points using the formula
    float dx = l.p[1].x  - l.p[0].x;
    float dy = l.p[1].y  - l.p[0].y;
    return sqrt (dx * dx + dy * dy);
}

float triangleArea(triangle t) {                    // Compute the triangles area by using th side lengths and another formula
    Line l1 = makeLine(t.p[0] , t.p[1]);
    Line l2 = makeLine(t.p[1] , t.p[2]);
    Line l3 = makeLine(t.p[2] , t.p[0]);

    float a = lineLength(l1);
    float b = lineLength(l2);
    float c = lineLength(l3);

    float s = (a + b + c)/2.0f;
    
    return sqrt(s * (s - a) * (s - b) * (s - c));
}

