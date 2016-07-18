//
//  Chromosome.hpp
//  Evolution Simulator
//
//  Created by Brett Duncan on 6/28/16.
//  Copyright © 2016 Brett James Duncan. All rights reserved.
//

#ifndef Chromosome_hpp
#define Chromosome_hpp

#include <stdio.h>
#include <string>

class BloodType {
public:
    BloodType();
    BloodType(std::string);
    std::string getAllele();
protected:
    std::string allele;
};


class ColorVision {
public:
    ColorVision();
    ColorVision(bool);
    bool isAllele();
protected:
    bool allele;
};


class EyeColor {
public:
    EyeColor();
    EyeColor(bool);
    bool isAllele();
protected:
    bool allele;
};


class Gender {
public:
    Gender();
    Gender(bool);
    bool isAllele();
protected:
    bool allele;
};


class HairColor {
public:
    HairColor();
    HairColor(bool);
    bool isAllele();
protected:
    bool allele;
};


class Hearing {
public:
    Hearing();
    Hearing(bool);
    bool isAllele();
protected:
    bool allele;
};


class Height {
public:
    Height();
    Height(bool);
    bool isAllele();
protected:
    bool allele;
};


class QualityOfVision {
public:
    QualityOfVision();
    QualityOfVision(bool);
    bool isAllele();
protected:
    bool allele;
};


class SkinColor {
public:
    SkinColor();
    SkinColor(bool);
    bool isAllele();
protected:
    bool allele;
};


#endif /* Chromosome_hpp */
