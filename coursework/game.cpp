//
//  game.cpp
//  coursework
//
//  Created by mayur patel on 04/12/2022.
//

#include "game.hpp"
#include <algorithm>
#include <iostream>

using namespace std;

game::game(){

    //intitallizing the maximum distance travelled by a robot at 0
    maxTravelled = 0;
    furtherestTravelledRobot = "none at the moment";
}

void game::move(const string &name, int dir){
    
    //create a robot at the origin
    if (games.count(name) == 0){
        games.emplace(name, robot(name));
    }
    
    //moving the robot, 0 = north
    if (dir == 0){
        games.at(name).move_north();
    }
    //moving the robot, 1 = east
    else if (dir == 1){
        games.at(name).move_east();
    }
    
    //moving the robot, 2 = south
    else if (dir == 2){
        games.at(name).move_south();
    }
    
    //moving the robot, 3 = west
    else if (dir == 3){
        games.at(name).move_west();
    }
    
    //furtherest distance travelled robot
    if (distance(games.at(name)) > maxTravelled){
        maxTravelled = distance(games.at(name));
        furtherestTravelledRobot = name;
    }
    
}
        
bool compare_travelled(const robot& x, const robot& y){
return x.travelled()< y.travelled();
            
        }

//returns a collection of names of all the robots in the system
vector<robot>  game::robots_by_distance() const {

    
    //new vector
            vector<robot> temp;

            for (auto elem : games) {
                temp.push_back(elem.second);
            }for (std::vector<robot>::iterator it1 = temp.begin(); it1 != temp.end(); ++it1) {
                for (std::vector<robot>::iterator it2 = temp.begin(); it2 != temp.end(); ++it2){
                    //returning in increasing order
                    sort(temp.begin(), temp.end(), compare_travelled);
                }
            }

            return temp;
        }

