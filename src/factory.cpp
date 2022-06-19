#include "factory.h"

vector* new_vector(int x, int y){
    return new vector(x, y);
}

triangle* new_triangle(int a, int b, int c){
    return new triangle(
        new segment(a),
        new segment(b),
        new segment(c)
    );
}

square* new_square(int side){
    return new square(new segment(side));
}