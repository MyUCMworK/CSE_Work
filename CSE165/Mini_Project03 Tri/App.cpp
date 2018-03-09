#include "App.h"
#include <iostream>
#include <vector>
#include "Board.h"
#include "Pieces.h"
#include "AIPlayer.h"
//#include "Turns.h"
using namespace std;
// begin of my code
vector<Pieces*> dataPieces;
//Pieces* piece0 = new Pieces(0, 0, 0.1, 10);
//Pieces a(0, 0, 0.1, 10);
int Result = 0;
//Turns* turns = new Turns(0, 0);
AIPlayer* ai = new AIPlayer;
int press = 0;
int turn = 0;

vector<Board*> dataBoard; // create a list of data
// two Rect pointers point to two different objects called rect0 and rect1
Board* rect0 = new Board(-0.7375, 0.7375, 0.475, 0.475, false);
Board* rect1 = new Board(-0.2375, 0.7375, 0.475, 0.475, false);
Board* rect2 = new Board(0.2625, 0.7375, 0.475, 0.475, false);
Board* rect3 = new Board(-0.7375, 0.2375, 0.475, 0.475, false);
Board* rect4 = new Board(-0.2375, 0.2375, 0.475, 0.475, false);
Board* rect5 = new Board(0.2625, 0.2375, 0.475, 0.475, false);
Board* rect6 = new Board(-0.7375, -0.2625, 0.475, 0.475, false);
Board* rect7 = new Board(-0.2375, -0.2625, 0.475, 0.475, false);
Board* rect8 = new Board(0.2625, -0.2625, 0.475, 0.475, false);

int click = 0;

Board* x;
Board* o;
//int vector<Turns*> dataTurns;
void drawResult() {
    if (Result == 9) {
        cout << "Circle Wins!" << endl;
    } else if (Result == 6) {
        cout << "X Wins!" << endl;
    } else {
        cout << "Nobody Wins" << endl;
    }
}
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


App::App(const char* label, int x, int y, int w, int h): GlutApp(label, x, y, w, h){
    // Initialize state variables
    mx = 0.0;
    my = 0.0;
}
// end of my code

void App::draw() {

    // Clear the screen
    glClear(GL_COLOR_BUFFER_BIT | GL_DEPTH_BUFFER_BIT);
    
    // Set background color to black
    glClearColor(0.0, 0.0, 0.0, 1.0);
    
    // Set up the transformations stack
    glMatrixMode(GL_MODELVIEW);
    glLoadIdentity();
    
    // Set Color
    glColor3d(1.0, 1.0, 1.0);
    
    // Draw a yellow cross
    glColor3d(1.0, 1.0, 0.0);
    
    glBegin(GL_LINES);
    
    glVertex2f(mx - 0.05f, my);
    glVertex2f(mx + 0.05f, my);
    
    glVertex2f(mx, my - 0.05f);
    glVertex2f(mx, my + 0.05f);
    
    glEnd();
    
    if (press == 1){
        judgement(click);
    }
    for (int i = 0; i< dataBoard.size(); i++){
        if (Result == 6 || Result == 9 || click > 8) {
            //dataBoard[i] -> buil_Won_Line(dataBoard[i]);
            drawResult();
            keyPress(27);
        }
    }
    
    for (int i = 0; i < dataBoard.size(); i++){
        dataBoard[i] -> drawOX();
    }
    
    dataBoard.resize(9); //data need to have two pointers to deaw two rectangles
    dataBoard[0] = rect0; // store rect0 to be the first element of the verctor
    dataBoard[1] = rect1;// store rect1 to be the second element of the verctor
    dataBoard[2] = rect2;
    dataBoard[3] = rect3;
    dataBoard[4] = rect4;
    dataBoard[5] = rect5;
    dataBoard[6] = rect6;
    dataBoard[7] = rect7;
    dataBoard[8] = rect8;
    
    for (int i = 0; i < dataBoard.size(); i++){
        dataBoard[i] -> buildBoard(dataBoard[i]);
    }
    
    
    //end of my code

    // We have been drawing everything to the back buffer
    // Swap the buffers to see the result of what we drew
    glFlush();
    glutSwapBuffers();
}


void moveAI(AIPlayer* AI, int& turn){
    //for (int i = 0; i < 9; i++){
        if (Result != 6 || Result != 9){
            int i = AI -> moveChoose(dataBoard);
            turn++;
            int mark = 2;
            dataBoard[i] -> setC(true);
            dataBoard[i] -> setStep(mark);
            
            
        }
    //}
}



void App::mouseDown(float x, float y){
    // Update app state
    mx = x;
    my = y;

    // begin of my code
    // a for loop and a if-else statement to check if the rectangle is clicked or not
    /*for (int i = 0; i < dataBoard.size(); i++){
        // if clicked on the rectangle the setC will store a true
        if (dataBoard[i] -> contains(mx, my) == true){
            dataBoard[i] -> setC(true);
            //dataBoard[i] -> buildBoard(dataBoard[i]);
        }
    }*/
    for (int i = 0; i < dataBoard.size(); i++){
        dataBoard[i] -> checkClick(mx, my, click);
    }
    judgement(click);

    if (press == 1 && turn % 2 == 0 && click < 9){
        moveAI(ai, turn);
        click++;
    }
    turn++;
    
    
    
    
    // end of my code
    // Redraw the scene
    redraw();
    
    
}

void App::mouseDrag(float x, float y){
    // Update app state
    mx = x;
    my = y;
    
    // Redraw the scene
    redraw();
}

void App::keyPress(unsigned char key) {
    if (key == 27){
        // Exit the app when Esc key is pressed
        exit(0);
    }
    if (key == 49){
        press = 1;
        cout << "1 Players" << endl;
    } else {
        cout << "2 Players" << endl;
    }
}
