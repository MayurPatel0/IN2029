//
//  robot.hpp
//  coursework
//
//  Created by mayur patel on 04/12/2022.
//
#pragma once
#ifndef robot_hpp
#define robot_hpp

#include <stdio.h>
#include <string>

using namespace std;

class robot
{
    
    std::string denomination;
    int numberOfSteps;//steps taken by robot
    int positionX;//position of robot in x plane
    int positionY;//position of robot in y plane
    
public:
    
    explicit robot(const std::string &d);
    
    const std::string &name() const{
        return denomination;
    }
    
    //moving robot to the north
    void move_north();
    
    //moving robot to the east
    void move_east();
    
    //moving robot to the south
    void move_south();
    

    //moving robot to the west
    void move_west();
    
    
    //returning the distance covered north of the robot - (y- plane)
    int north() const{
        return positionY;
    }
    
    //returning the distance covered east of the robot - (x-plane)
    int east() const{
        return positionX;
        
    }
    
    //returns the total distance travelled by the robot since it was created
    int travelled() const{
        return numberOfSteps;
    }
    
    /*void set_name(const std::string &n);
    
    const std::string get_name()const;*/
};

//returns the distance of robot r from the origin according the Manhattan metric
int distance(const robot &r);


#endif /* robot_hpp */
