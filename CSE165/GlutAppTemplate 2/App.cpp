#include "App.h"
#include <iostream>
#include <vector>
#include "Rectangle.h"
using namespace std;
// begin of my code
vector<Rect*> data; // create a list of data
// two Rect pointers point to two different objects called rect0 and rect1
Rect* rect0 = new Rect(-0.5, 0.5, 0.5, 0.5, false);
Rect* rect1 = new Rect(-0.5, 0.3, 1, 0.5, false);

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
    
    // Draw some points
    glBegin(GL_POINTS);
    
    glVertex2f(0.5, 0.5);
    glVertex2f(0.5, -0.5);
    glVertex2f(-0.5, -0.5);
    glVertex2f(-0.5, 0.5);
    
    glEnd();
    
    // Draw a yellow cross
    glColor3d(1.0, 1.0, 0.0);
    
    glBegin(GL_LINES);
    
    glVertex2f(mx - 0.05f, my);
    glVertex2f(mx + 0.05f, my);
    
    glVertex2f(mx, my - 0.05f);
    glVertex2f(mx, my + 0.05f);
    
    glEnd();
    
    // begin of my code
    data.resize(2); //data need to have two pointers to deaw two rectangles
    data[0] = rect0; // store rect0 to be the first element of the verctor
    data[1] = rect1; // store rect1 to be the second element of the verctor
    // if the first element of the vector which is first rectangle being clicked the first element will be at the top of the
    // second rectangle, and the first rectangle's color will be changed.
    if (data[0] -> contains(mx, my) == true){
        data[0] -> build(data[0]);
        data[1] -> build(data[1]); //also the second rectangle will not be diappear
    // if the second element of the vector which is second rectangle being clicked the second element will be at the top of the
    // first rectangle, and the second rectangle's color will be changed.
    }else if (data[1] -> contains(mx, my) == true){
        data[1] -> build(data[1]);
        data[0] -> build(data[0]); // also the first rectangle will not be diappear
    }else{ // if click on the outside of the rectangle, the two rectangle will be shown up with no highlighted
        data[0] -> build(data[0]);
        data[1] -> build(data[1]);
    }
    //end of my code

    // We have been drawing everything to the back buffer
    // Swap the buffers to see the result of what we drew
    glFlush();
    glutSwapBuffers();
}

void App::mouseDown(float x, float y){
    // Update app state
    mx = x;
    my = y;
    // begin of my code
    // a for loop and a if-else statement to check if the rectangle is clicked or not
    for (int i = 0; i < data.size(); i++){
        // if clicked on the rectangle the setC will store a true
        if (data[i] -> contains(mx, my) == true){
            data[i] -> setC(true);
        // if not clicked on the rectangle the setC will store a false
        }else{
            data[i] -> setC(false);
        }
    }
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
}
