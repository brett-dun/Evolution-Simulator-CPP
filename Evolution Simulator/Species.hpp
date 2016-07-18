//
//  Species.hpp
//  Evolution Simulator
//
//  Created by Brett Duncan on 7/1/16.
//  Copyright © 2016 Brett James Duncan. All rights reserved.
//

#ifndef Species_hpp
#define Species_hpp

#include <stdio.h>
#include "Genotype.hpp"
#include "Phenotype.hpp"
#include "Random.hpp"

class Species {
public:
    Species();
    Species(bool);
    Species(InheritedGenes,InheritedGenes);
    Species(Genotype);
    Species(Species,Species);
    Genotype getGenotype();
    Phenotype getPhenotype();
    int getAge();
    int getOffSpring();
    int getGeneration();
    bool isFemale();
protected:
    Genotype genotype;
    Phenotype phenotype;
    int age;
    int offSpring;
    int generation;
};

#endif /* Species_hpp */
