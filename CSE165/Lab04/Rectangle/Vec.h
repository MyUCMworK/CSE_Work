#include <iostream>
#include <vector>
using namespace std;

struct Vec{
    double x;
    double y;

    Vec(){
        x = 0.0f;
        y = 0.0f;
    }

    Vec(double x, double y){
        this -> x = x;
        this -> y = y;
    }

    double getX() const{
        return x;
    }
    double getY() const{
        return y;
    }
    void add(Vec v){
        x = v.x + x;
        y = v.y + y;
    }

    void print(){
        cout << "(" << x << ", " << y << ")" << endl;
    }

};