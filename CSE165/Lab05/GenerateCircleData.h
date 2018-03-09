#ifndef GenerateCircleData_h
#define GenerateCircleData_h

#include "Vec.h"
#include <iostream>
#include <vector>
#include <math.h>

void generateCircleData(std::vector<Vec*>& points, const Vec& center, float radius, int resolution){
    // Clear the points vector to make sure it's empty before you start
    points.clear();
    
    // Provide the rest of the code here...
    points.resize(resolution);
    int i = 0;
    for (float rad = 0.0; rad < 2 * M_PI; rad = rad + 2 * M_PI / resolution) {
        float circleX = radius * cos(rad);
        float circleY = radius * sin(rad);

        points[i] = new Vec;

        points[i]->setX(center.getX() + circleX);
        points[i]->setY(center.getY() + circleY);
        i++;
    }
    
}

#endif