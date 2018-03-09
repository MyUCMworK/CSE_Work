#ifndef Rectangle_h
#define Rectangle_h
#include <iostream>
#include "Pieces.h"
#include <math.h>
using namespace std;

// create a class called Rect and have five private objects
class Board{
    float tlx;
    float tly;
    float width;
    float height;
    bool click;
    int stepNum;
    int Result;
    //vector<Board*> dataBoard;

public:
    Board();
    Board(float x, float y, float w, float h, bool c, int s = 0, int r = 0){
        this -> tlx = x;
        this -> tly = y;
        this -> width = w;
        this -> height = h;
        this -> click = c;
        this -> stepNum = s;
        this -> Result = r;
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
        return click;
    }
    int getStep(){
        return stepNum;
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
    void setW(float w){
        width = w;
    }
    void setH(float h){
        height = h;
    }
    void setC(bool c){
        click = c;
    }
    void setStep(int s) {
        stepNum = s;
    }
    void setResult(int r){
        Result = r;
    }
        // create a function to check if color is true or false by the monthdown function
    void buildBoard(Board* data){
        // using the GL_POLYGON to draw rectangle
        //int k = 0;
        
        glColor3f(1.0, 1.0, 1.0);
        glBegin(GL_POLYGON);
        glVertex2f(data -> getX(),data -> getY());
        glVertex2f(data -> getX(), data -> getY() - data -> getH());
        glVertex2f(data -> getX() + data -> getW(), data -> getY() - data -> getH());
        glVertex2f(data -> getX() + data -> getW(), data -> getY());
        glEnd();
    }

    void checkClick(float x, float y, int& moveStep) {
            if (contains(x, y) && getStep() == 0) {
                moveStep++;
                int mark = moveStep % 2 + 2;
                //cout << "Mark: " << mark << endl;
                setC(true);
                setStep(mark);
            }
    }
    
    void buil_Won_Line(Board* data){
        glColor3f(1.0, 0.0, 0.0);
        glBegin(GL_LINES);
        glVertex2f(data -> getX(), data -> getY() - 0.25);
        glVertex2f(data -> getX() + 0.5, data -> getY() - 0.25);
        
        glVertex2f(data -> getX() + 0.25, data -> getY());
        glVertex2f(data -> getX() + 0.25, data -> getY() - 0.5);
        
        glVertex2f(data -> getX(), data -> getY());
        glVertex2f(data -> getX() + 0.5, data -> getY() - 0.5);
        
        glVertex2f(data -> getX() + 0.5, data -> getY());
        glVertex2f(data -> getX(), data -> getY() - 0.5);
        glEnd();
    }
    
    
    
    void drawOX() {
        if (getC()) {
            if (getStep() == 3) {
                for (float i = -0.5; i <= 0.5; i = i + 0.5){
                    for (float j = 0.5; j >= -0.5; j = j - 0.5){
                        Pieces dataPieces(i, j, 0.1, 100000, 0, 0);
                        dataPieces.buildPiecesCircles(dataPieces.contains(tlx, tly));
                    }
                }
            } else {
                for (float i = -0.5; i <= 0.5; i = i + 0.5){
                    for (float j = 0.5; j >= -0.5; j = j - 0.5){
                        Pieces dataPieces(i, j, 0.1, 100000, 0, 0);
                        dataPieces.buildPiecesCross(dataPieces.contains(tlx, tly));
                    }
                }
            }
        }
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
