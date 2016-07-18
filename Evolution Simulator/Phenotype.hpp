//
//  Phenotype.hpp
//  Evolution Simulator
//
//  Created by Brett Duncan on 6/30/16.
//  Copyright © 2016 Brett James Duncan. All rights reserved.
//

#ifndef Phenotype_hpp
#define Phenotype_hpp

#include <stdio.h>
#include "Genotype.hpp"

#endif /* Phenotype_hpp */

class Phenotype {
public:
    Phenotype();
    Phenotype(Genotype);
    bool isFemale();
    int getHairColor();
    int getBloodType();
    int getHeight();
    bool isHearing();
    bool isColorVision();
    int getQualityOfVision();
    int getEyeColor();
    int getSkinColor();
protected:
    bool female, hearing, colorVision;
    int hairColor, bloodType, height, qualityOfVision, eyeColor, skinColor;
};