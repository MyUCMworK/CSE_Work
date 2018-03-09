#ifndef Piece_h
#define Piece_h
#include <iostream>
#include <vector>
#include <math.h>
using namespace std;

class Pieces{
    float tlx;
    float tly;
    float radius;
    int resolutions;
    bool clicked;
    int Result;
    
    public:
        Pieces();
        Pieces(float x, float y, float r, int res, bool c, int result){
            this -> tlx = x;
            this -> tly = y;
            this -> radius = r;
            this -> resolutions = res;
            this -> clicked = c;
            this -> Result = result;
        }
    
        // write the get functions to get tlx, tly, width, height, and color
        float getX(){
            return tlx;
        }
        float getY(){
            return tly;
        }
        float getRad(){
            return radius;
        }
        float getRes(){
            return resolutions;
        }
        float getC(){
            return clicked;
        }
    int getResult() {
        return Result;
    }
    
        // write the set functions to store the data in tlx, tly, width, height, and color
        void setX(float x){
            tlx = x;
        }
        void setY(float y){
            tly = y;
        }
        void setRad(float r){
            radius = r;
        }
        void setRes(int res){
            resolutions = res;
        }
        bool setC(bool c){
            clicked = c;
            return c;
        }
    void setResult(int r){
        Result = r;
    }
    
        
        void buildPiecesCircles(bool clicked){
            if (clicked == true){
                glColor3d(1.0, 0.0, 1.0);
                glBegin(GL_POLYGON);
                for (float i = 0.0; i < 2 * M_PI; i = i + 2 * M_PI / resolutions){
                    float CircleX = radius * cos(i);
                    float CircleY = radius * sin(i);
                    glVertex2f(tlx + CircleX, tly + CircleY);
                }
                glEnd();
                
            }
           
        }
    
        void buildPiecesCross(bool clicked){
            if (clicked == true){
                //glLineWidth(2.5);
                glColor3d(0.0, 1.0, 0.0);
                glBegin(GL_LINES);
                glVertex2f(tlx - 0.1, tly - 0.1);
                glVertex2f(tlx + 0.1, tly + 0.1);
            
                glVertex2f(tlx - 0.1,  tly + 0.1);
                glVertex2f(tlx + 0.1, tly - 0.1);
                glEnd();
            }
        }
    
    
    bool contains(float mx, float my){
        if (mx >= tlx - 0.25 && my <= tly + 0.25 && mx <= tlx + 0.25 && my >= tly - 0.25){
            return true;
        }else{
            return false;
        }
    }
    
};


#endif /* Piece_h */
