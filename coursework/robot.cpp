//
//  robot.cpp
//  coursework
//
//  Created by mayur patel on 04/12/2022.
//

#include "robot.hpp"
#include <cstdlib> //<cstdlib> library for abs(n) function

using namespace std;

robot::robot(const string &d){ //setting up a robot with name d
    denomination = d;
    positionX = 0;
    positionY = 0;
    numberOfSteps = 0;
}

//north = y in positive direction
//south = y in negative direction
//east = x in positive direction
//west = x in negative direction

//moves the robot d one step to the north
void robot::move_north(){
    positionY++;
    numberOfSteps++;
}


//moves the robot d one step to the east
void robot::move_east(){
    positionX++;
    numberOfSteps++;
}


//moves the robot d one step to the south
void robot::move_south(){
    positionY--;
    numberOfSteps++;
}


//moves the robot d one step to the west
void robot::move_west(){
    positionX--;
    numberOfSteps++;
}


//distance from the origin for the robot d
int distance(const robot &r){
    return abs(r.north()) + abs(r.east());
    
}

