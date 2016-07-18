//
//  Population.cpp
//  Evolution Simulator
//
//  Created by Brett Duncan on 7/1/16.
//  Copyright © 2016 Brett James Duncan. All rights reserved.
//

#include "Population.hpp"

Population::Population() {
    //females.allocate(<#size_type __n#>)
    //females.
    for (int j=1; j<=5; ++j)
        females.push_back(Species(true));
    //std::list<Species>::iterator i = females.begin();
    //females.insert(i,Species(true));
   //std::allocator<Species> males;
}