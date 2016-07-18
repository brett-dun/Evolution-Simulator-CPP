//
//  Population.hpp
//  Evolution Simulator
//
//  Created by Brett Duncan on 7/1/16.
//  Copyright © 2016 Brett James Duncan. All rights reserved.
//

#ifndef Population_hpp
#define Population_hpp

#include <stdio.h>
#include <list>
#include <vector>
#include "Species.hpp"

class Population {
public:
    Population();
    Population(Species,Species);
    void reproduce(int min, int max, int kids);
    void age();
    void die(int age);
    void naturalSelection(std::string trait, int num, int age);
    void addFemales();
    void addMales();
protected:
    std::allocator<Species> females;
    std::allocator<Species> males;
};

#endif /* Population_hpp */
