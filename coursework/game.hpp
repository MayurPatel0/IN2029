//
//  game.hpp
//  coursework
//
//  Created by mayur patel on 04/12/2022.
//
#pragma once
#ifndef game_hpp
#define game_hpp

#include <stdio.h>
#include "robot.hpp"
#include <string>
#include <list>
#include <map>
#include <vector>
#include <iostream>

using namespace std;


class game{
    
private:
    std::map<std::string, robot> games;    //map to hold all the robots
    list<string> robots; // list to keep all the robots with no more than n steps from the origin
    int maxTravelled;//furtherest distance for any robot that has travelled
    string furtherestTravelledRobot; //robot which is the furtherest from origin
    
    
public:
    
    game();
    
    //number of robots set to 0
    int num_robots() const{
        return games.size();
    }
    
    //move the robot
    void move(const string &name, int dir);
    
    /*bool findRobotName10(const string &name);*/
    
    //returns the n number of robots that are from the origin
    int num_within(int n) const{
        return robots.size();
    }
    
    //returns the furtherest distance that any robot has travelled
    int max_travelled() const{
        return maxTravelled;
    }
    
    //returns the robot that has travelled furtherest from origin
    string furtherest() const{
        return furtherestTravelledRobot;
    }
    
    //returns a collection of names of all the robots in the system
    vector<robot> robots_by_distance() const;
    
};

//comapring robots on their total distance travelled from origin
bool compare_distance(const robot& x, const robot& y);


#endif /* game2_hpp */
