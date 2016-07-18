//
//  Chromosome.cpp
//  Evolution Simulator
//
//  Created by Brett Duncan on 6/28/16.
//  Copyright © 2016 Brett James Duncan. All rights reserved.
//

#include "Chromosome.hpp"
#include <string>

BloodType::BloodType() {
    BloodType("");
}
BloodType::BloodType(std::string var) {
    allele = var;
}
std::string BloodType::getAllele() {
    return allele;
}


ColorVision::ColorVision() {
    ColorVision(false);
}
ColorVision::ColorVision(bool var) {
    allele = var;
}
bool ColorVision::isAllele() {
    return allele;
}


EyeColor::EyeColor() {
    EyeColor(false);
}
EyeColor::EyeColor(bool var) {
    allele = var;
}
bool EyeColor::isAllele() {
    return allele;
}


Gender::Gender() {
    Gender(true);
}
Gender::Gender(bool var) {
    allele = var;
}
bool Gender::isAllele() {
    return allele;
}

HairColor::HairColor() {
    HairColor(false);
}
HairColor::HairColor(bool var) {
    allele = var;
}
bool HairColor::isAllele() {
    return allele;
}


Hearing::Hearing() {
    Hearing(false);
}
Hearing::Hearing(bool var) {
    allele = var;
}
bool Hearing::isAllele() {
    return allele;
}


Height::Height() {
    Height(false);
}
Height::Height(bool var) {
    allele = var;
}
bool Height::isAllele() {
    return allele;
}


QualityOfVision::QualityOfVision() {
    QualityOfVision(false);
}
QualityOfVision::QualityOfVision(bool var) {
    allele = var;
}
bool QualityOfVision::isAllele() {
    return allele;
}


SkinColor::SkinColor() {
    SkinColor(false);
}
SkinColor::SkinColor(bool var) {
    allele = var;
}
bool SkinColor::isAllele() {
    return allele;
}