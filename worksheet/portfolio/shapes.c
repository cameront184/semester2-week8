
#include <stdbool.h>
#include <math.h>

#include "shapes.h"

Point makePoint( float x, float y ) {
    Point p;
    p.x = x;
    p.y = y;
    return p;
}

// complete other functions below

Line makeLine (point p1, point p2) {
    line l;
    l.p[0] = p1;
    l.p[1] = p2;
    return l;
}

Triangle makeTriangle (point p1, point p2, point p3) {
    Triangle t;
    t.p[0] = p1;
    t.p[1] = p2;
    t.p[3] = p3;
    return t;
}

float lineLength(line 1) {
    float dx = l.p[1].x  - l.p[0].x;
    float dy = l.p[1].y  - l.p[1].y;
    return sqrt (dx * dx + dy * dy);
}

float triangleArea(triangle t) {
    Line l1 = makeLine(t.p[0] , t.p[1]);
    Line l2 = makeLine(t.p[1] , t.p[2]);
    Line l3 = makeLine(t.p[2] , t.p[0]);

    float a = lineLength(l1);
    float b = lineLength(l2);
    float c = lineLength(l3);

    float s = (a + b + c)/2.0f;
    
    return sqrt(s * (s - a) * (s - b) * (s - c));
}




// - start with stubs as above
// - compile regularly to test syntax
// - test functions by calling them from main()
