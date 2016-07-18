//
//  Genotype.cpp
//  Evolution Simulator
//
//  Created by Brett Duncan on 6/29/16.
//  Copyright © 2016 Brett James Duncan. All rights reserved.
//

//#include <cstdlib>
//#include <iostream>
//#include <ctime>
#include "Genotype.hpp"
//#include "Chromosome.cpp"
#include "Chromosome.hpp"
#include "Random.hpp"

InheritedGenes::InheritedGenes(BloodType var1, ColorVision var2, EyeColor var3, Gender var4, HairColor var5, Hearing var6, Height var7, QualityOfVision var8, SkinColor var9) {
    bloodType = var1;
    colorVision = var2;
    eyeColor = var3;
    gender = var4;
    hairColor = var5;
    hearing = var6;
    height = var7;
    qualityOfVision = var8;
    skinColor = var9;
}
InheritedGenes::InheritedGenes(std::string var1, bool var2, bool var3, bool var4, bool var5, bool var6, bool var7, bool var8, bool var9) {
    InheritedGenes(BloodType(var1), ColorVision(var2), EyeColor(var3), Gender(var4), HairColor(var5), Hearing(var6), Height(var7), QualityOfVision(var8), SkinColor(var9));
    /*bloodType = BloodType(var1);
    colorVision = ColorVision(var2);
    eyeColor = EyeColor(var3);
    gender = Gender(var4);
    hairColor = HairColor(var5);
    hearing = Hearing(var6);
    height = Height(var7);
    qualityOfVision = QualityOfVision(var8);
    skinColor = SkinColor(var9);*/
}
InheritedGenes::InheritedGenes(bool var) {
    std::string temp;
    int num = nextInt(3);
    if (num == 0) {
        temp = "A";
    } else if (num == 1) {
        temp = "B";
    } else {
        temp = "o";
    }
    InheritedGenes(temp, nextBoolean(), nextBoolean(), var, nextBoolean(),nextBoolean(), nextBoolean(), nextBoolean(), nextBoolean());
}
InheritedGenes::InheritedGenes() {
    InheritedGenes(false);
}
BloodType InheritedGenes::getBloodType() {
    return bloodType;
}
ColorVision InheritedGenes::getColorVision() {
    return colorVision;
}
EyeColor InheritedGenes::getEyeColor() {
    return eyeColor;
}
Gender InheritedGenes::getGender() {
    return gender;
}
HairColor InheritedGenes::getHairColor() {
    return hairColor;
}
Hearing InheritedGenes::getHearing() {
    return hearing;
}
Height InheritedGenes::getHeight() {
    return height;
}
QualityOfVision InheritedGenes::getQualityOfVision() {
    return qualityOfVision;
}
SkinColor InheritedGenes::getSkinColor() {
    return skinColor;
}


Genotype::Genotype(InheritedGenes mom, InheritedGenes dad) {
    momsGenes = mom;
    dadsGenes = dad;
}
Genotype::Genotype(bool gender) {
    Genotype(InheritedGenes(true), InheritedGenes(gender));
}
Genotype::Genotype() {
    Genotype(false);
}
InheritedGenes Genotype::getMomsGenes() {
    return momsGenes;
}
InheritedGenes Genotype::getDadsGenes() {
    return dadsGenes;
}