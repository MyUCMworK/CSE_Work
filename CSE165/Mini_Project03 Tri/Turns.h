#ifndef Turns_h
#define Turns_h
#include <iostream>
#include "Board.h"
#include <math.h>
#include <vector>
using namespace std;

class Turns{
    int Result;
    int stepNum;
    vector<Board*> dataBoard;
public:
    Turns();
    Turns(int r, int s){
        this -> Result = r;
        this -> stepNum = s;
    }
    
    
    int getR(){
        return Result;
    }
    int getS(){
        return stepNum;
    }
    
    void setR(int r){
        Result = r;
    }
    void setS(int s){
        stepNum = s;
    }
    
    /*void checkClick(float x, float y, int& moveStep) {
        if (dataBoard -> contains(x, y) && getS() == 0) {
            moveStep++;
            int mark = moveStep % 2 + 2;
            cout << "Mark: " << mark << endl;
            dataBoard -> setC(true);
            setS(mark);
        }
    }*/
    int judgement(int moveStep){
        if (moveStep >= 5){
            for (int i = 0; i < 3; i++) {
                if (dataBoard[i] -> getStep() == 0){
                    Result = 10;
                }
                Result = Result + dataBoard[i]->getStep();
            }
            if (Result == 6 || Result == 9) {
                return Result;
            }
            
            Result = 0;
            for (int i = 0; i < 7; i+=3) {
                if (dataBoard[i] -> getStep() == 0){
                    Result = 10;
                }
                Result = Result + dataBoard[i]->getStep();
            }
            if (Result == 6 || Result == 9) {
                return Result;
            }
            
            Result = 0;
            for (int i = 0; i < 9; i+=4) {
                if (dataBoard[i] -> getStep() == 0){
                    Result = 10;
                }
                Result = Result + dataBoard[i]->getStep();
            }
            if (Result == 6 || Result == 9) {
                return Result;
            }
            
            Result = 0;
            for (int i = 1; i < 8; i+=3) {
                if (dataBoard[i] -> getStep() == 0){
                    Result = 10;
                }
                Result = Result + dataBoard[i]->getStep();
            }
            if (Result == 6 || Result == 9) {
                return Result;
            }
            
            Result = 0;
            for (int i = 2; i < 9; i+=3) {
                if (dataBoard[i] -> getStep() == 0){
                    Result = 10;
                }
                Result = Result + dataBoard[i]->getStep();
            }
            if (Result == 6 || Result == 9) {
                return Result;
            }
            
            Result = 0;
            for (int i = 2; i < 7; i+=2) {
                if (dataBoard[i] -> getStep() == 0){
                    Result = 10;
                }
                Result = Result + dataBoard[i]->getStep();
            }
            if (Result == 6 || Result == 9) {
                return Result;
            }
            
            Result = 0;
            for (int i = 3; i < 6; i++){
                if (dataBoard[i] -> getStep() == 0){
                    Result = 10;
                }
                Result = Result + dataBoard[i]->getStep();
            }
            if (Result == 6 || Result == 9) {
                return Result;
            }
            
            Result = 0;
            for (int i = 6; i < 9; i++) {
                if (dataBoard[i] -> getStep() == 0){
                    Result = 10;
                }
                Result = Result + dataBoard[i]->getStep();
            }
            if (Result == 6 || Result == 9) {
                return Result;
            }
        }
        return Result;
    }
};

#endif /* Turns_h */
