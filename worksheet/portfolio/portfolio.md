# Advice for portfolio task

## Provided code

Do not edit the provided files:
- `Makefile`
- `shapes.h`

Implement code in:
- `shapes.c`
    - for implementation of functions defined in `shapes.h`
- `main.c`
    - for testing your solutions

## Compilation

Use the `Makefile` to build the code.
- type `make` to compile
- type `make clean` to clear the object code and executable

## Advice and hints

Create placeholders in `shapes.c` for all functions defined in the header file.

This will mean the code compiles and you can gradually complete the implementation.

eg. The header line `Point makePoint( float x, float y );` will specify a placeholder function
```
Point makePoint( float x, float y ) {
    Point p;
    // implementation
    return p;
}
```
You can then complete the implementation.

The Boolean functions require you to test float values for equality
- due to floating point representation you should not do this directly
    - `x1==x2` may not return a reliable result
- instead, test if they are close
    - `abs(x1-x2)<1.0e-6` is sufficiently close to be the same point

Hint:

After implementing the `samePoint()` function, consider if this can reused in the `pointInLine()` function
- this is better programming style than repeating a lot of code

## Testing

Write code in `main()` to create Point, Line, Triangle structures and to test the functions that operate on them. eg.
- a line (1,1),(2,1) will have length 1.0
- a triangle (0,0),(1,0),(0,1) will have area 0.5
- a point (1,1) is not part of the previous triangle (false/0) 
- a point (2,2) is part of the line (3,2),(2,2) (true/1)

# Submission to Gradescope

The only file you neeed to submit is `shapes.c`
