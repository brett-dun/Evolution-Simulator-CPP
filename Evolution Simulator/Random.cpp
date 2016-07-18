//
//  Random.cpp
//  Evolution Simulator
//
//  Created by Brett Duncan on 6/29/16.
//  Copyright © 2016 Brett James Duncan. All rights reserved.
//

#include "Random.hpp"
#include <cstdlib>
#include <ctime>

bool nextBoolean() {
    std::srand((unsigned int) std::time(0));
    long double rand = std::rand();
    if(rand/RAND_MAX > 0.5)
        return true;
    else
        return false;
}


short nextShort(short max) {
    std::srand((unsigned int) std::time(0));
    long double rand = std::rand();
    return (short) rand/RAND_MAX*max;
}
short nextShort() {
    return nextShort(32767);
}


int nextInt(int max) {
    std::srand((unsigned int) std::time(0));
    long double rand = std::rand();
    return (int) rand/RAND_MAX*max;
}
int nextInt() {
    return nextInt(2147483647);
}


float nextFloat() {
    std::srand((unsigned int) std::time(0));
    long double rand = std::rand();
    return (float) rand / RAND_MAX;
}
double nextDouble() {
    std::srand((unsigned int) std::time(0));
    long double rand = std::rand();
    return (double) rand / RAND_MAX;
}