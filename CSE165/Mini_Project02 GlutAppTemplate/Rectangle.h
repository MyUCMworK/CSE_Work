#ifndef Rectangle_h
#define Rectangle_h
#include <iostream>
using namespace std;

// create a class called Rect and have five private objects
class Rect{
    float tlx;
    float tly;
    float width;
    float height;
    bool color;

    public:
        Rect();
        Rect(float x, float y, float w, float h, bool c){
            this -> tlx = x;
            this -> tly = y;
            this -> width = w;
            this -> height = h;
            this -> color = c;
        }
    
        // write the get functions to get tlx, tly, width, height, and color
        float getX(){
            return tlx;
        }
        float getY(){
            return tly;
        }
        float getW(){
            return width;
        }
        float getH(){
            return height;
        }
        float getC(){
            return color;
        }
        // write the set functions to store the data in tlx, tly, width, height, and color
        void setX(float x){
            tlx = x;
        }
        void setY(float y){
            tly = y;
        }
        void setW(float w){
            width = w;
        }
        void setH(float h){
            height = h;
        }
        void setC(bool c){
            color = c;
        }

        // create a function to check if color is true or false by the monthdown function
        void build(Rect* data){
            // if color is false, then the rectangle is white
            if (color == false){
                glColor3f(1.0, 1.0, 1.0);
            // otherwise, it is bule
            }else{
                glColor3f(0.0, 1.0, 1.0);
            }
            // using the GL_POLYGON to draw rectangle
            glBegin(GL_POLYGON);
            glVertex2f(data -> getX(),data -> getY());
            glVertex2f(data -> getX(), data -> getY() - data -> getH());
            glVertex2f(data -> getX() + data -> getW(), data -> getY() - data -> getH());
            glVertex2f(data -> getX() + data -> getW(), data -> getY());
            glEnd();
        }
        // create a function to check if the month is click inside of the rectangle by using the number of tlx, tly, width and height to check, if it is return the contaons funtion to true, otherwise, return false
        bool contains(float mx, float my){
            if (mx >= tlx && my <= tly && mx <= tlx + width && my >= tly - height){
                return true;
            }else{
                return false;
            }
        }
};

#endif
