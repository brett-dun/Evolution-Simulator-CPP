//
//  Genotype.hpp
//  Evolution Simulator
//
//  Created by Brett Duncan on 6/29/16.
//  Copyright © 2016 Brett James Duncan. All rights reserved.
//

#ifndef Genotype_hpp
#define Genotype_hpp

#include <stdio.h>
#include <string>
#include "Chromosome.hpp"

class InheritedGenes {
public:
    InheritedGenes();
    InheritedGenes(bool);
    InheritedGenes(std::string, bool, bool, bool, bool, bool, bool, bool, bool);
    InheritedGenes(BloodType, ColorVision, EyeColor, Gender, HairColor, Hearing, Height, QualityOfVision, SkinColor);
    BloodType getBloodType();
    ColorVision getColorVision();
    EyeColor getEyeColor();
    Gender getGender();
    HairColor getHairColor();
    Hearing getHearing();
    Height getHeight();
    QualityOfVision getQualityOfVision();
    SkinColor getSkinColor();
protected:
    BloodType bloodType;
    ColorVision colorVision;
    EyeColor eyeColor;
    Gender gender;
    HairColor hairColor;
    Hearing hearing;
    Height height;
    QualityOfVision qualityOfVision;
    SkinColor skinColor;
};


class Genotype {
public:
    Genotype();
    Genotype(bool);
    Genotype(InheritedGenes,InheritedGenes);
    InheritedGenes getMomsGenes();
    InheritedGenes getDadsGenes();
protected:
    InheritedGenes momsGenes;
    InheritedGenes dadsGenes;
};

#endif /* Genotype_hpp */
