#include <iostream>
#include "Vec.h"

using namespace std;

struct Rect{
    float x;
    float y;
    float height;
    float width;

    Rect(){
        x = 0.0;
        y = 0.0;
        height = 0.0;
        width = 0.0;
    }

    Rect(float x, float y, float height, float width){
        this -> x = x;
        this -> y = y;
        this -> height = height;
        this -> width = width;
    }

    bool contains (Vec v){
        if (v.x >= x && v.y <= y && v.x <= x + width && v.y >= y - height ){
            return true;
        }else {
            return false;
        }
    }
};