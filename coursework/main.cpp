//
//  main.cpp
//  coursework
//
//  Created by mayur patel on 04/12/2022.
//
//This is a test main
#include "game.hpp"
#include <iostream>
#include <vector>

using namespace std;

int main(){
    
    game g;
      cout << "Count before: " << g.num_robots() << '\n';
      g.move("Robbie", 1); // east
      g.move("Marvin", 2); // south
      g.move("Robbie", 3); // west
      g.move("Mggn", 2); // south
      g.move("Roggie", 3); // west
      cout << "Count after: " << g.num_robots() << '\n';
      cout << "Furtherest travelled: " << g.max_travelled() << '\n';
      cout << "Within 0 steps: " << g.num_within(0) << '\n';
      cout << "Within 1 step: " << g.num_within(1) << '\n';
      for (const auto &name : g.robots_by_distance())
        cout << &name << '\n';

    return 0;;
}
