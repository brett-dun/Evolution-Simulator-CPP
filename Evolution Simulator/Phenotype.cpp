//
//  Phenotype.cpp
//  Evolution Simulator
//
//  Created by Brett Duncan on 6/30/16.
//  Copyright © 2016 Brett James Duncan. All rights reserved.
//

#include "Phenotype.hpp"


Phenotype::Phenotype(Genotype genotype) {
    
    if(genotype.getMomsGenes().getGender().isAllele() && genotype.getDadsGenes().getGender().isAllele()) {
        female = true; //Female
    } else {
        female = false; //Male
    }
    
    if(genotype.getMomsGenes().getHairColor().isAllele() && genotype.getDadsGenes().getHairColor().isAllele()) {
        hairColor = 0; //Black
    } else if(genotype.getMomsGenes().getHairColor().isAllele() || genotype.getDadsGenes().getHairColor().isAllele()) {
        hairColor = 1; //Brown
    } else {
        hairColor = 2; //Blond
    }
    
    //Test
    /*if((genotype.getMomsGenes().getBloodType().getAllele().equals("A") && !genotype.getDadsGenes().getBloodType().getAllele().equals("B")) || (genotype.getDadsGenes().getBloodType().getAllele().equals("A") && !genotype.getMomsGenes().getBloodType().getAllele().equals("B"))) {
        this.bloodType = 0; //A
    } else if ((genotype.getMomsGenes().getBloodType().getAllele().equals("B") && !genotype.getDadsGenes().getBloodType().getAllele().equals("A")) || (genotype.getDadsGenes().getBloodType().getAllele().equals("B") && !genotype.getMomsGenes().getBloodType().getAllele().equals("A"))) {
        this.bloodType = 1; //B
    } else if ((genotype.getMomsGenes().getBloodType().getAllele().equals("A") && genotype.getDadsGenes().getBloodType().getAllele().equals("B")) || (genotype.getDadsGenes().getBloodType().getAllele().equals("A") && genotype.getMomsGenes().getBloodType().getAllele().equals("B"))) {
        this.bloodType = 2; //AB
    } else {
        this.bloodType = 3; //c
    }*/
    
    if(genotype.getMomsGenes().getHeight().isAllele() && genotype.getDadsGenes().getHeight().isAllele()) {
        height = 0; //Tall
    } else if(genotype.getMomsGenes().getHeight().isAllele() || genotype.getDadsGenes().getHeight().isAllele()) {
        height = 1; //Medium
    } else {
        height = 2; //Short
    }
    
    if(genotype.getMomsGenes().getHearing().isAllele() || genotype.getDadsGenes().getHearing().isAllele()) {
        hearing = true; //Regular
    } else {
        hearing = false; //Deaf
    }
    
    if(genotype.getMomsGenes().getColorVision().isAllele() || genotype.getDadsGenes().getColorVision().isAllele()) {
        colorVision = true;
    } else {
        colorVision = false;
    }
    
    if(genotype.getMomsGenes().getQualityOfVision().isAllele() && genotype.getDadsGenes().getQualityOfVision().isAllele()) {
        qualityOfVision = 0; //Good Vision
    } else if(genotype.getMomsGenes().getQualityOfVision().isAllele() || genotype.getDadsGenes().getQualityOfVision().isAllele()) {
        qualityOfVision = 1; //Medium Vision
    } else {
        qualityOfVision = 2; //Bad Vision
    }
    
    if(genotype.getMomsGenes().getEyeColor().isAllele() && genotype.getDadsGenes().getEyeColor().isAllele()) {
        eyeColor = 0; //Brown
    } else if(genotype.getMomsGenes().getEyeColor().isAllele() || genotype.getDadsGenes().getEyeColor().isAllele()) {
        eyeColor = 1; //Green
    } else {
        eyeColor = 2; //Blue
    }
    
    if(genotype.getMomsGenes().getSkinColor().isAllele() && genotype.getDadsGenes().getSkinColor().isAllele()) {
        skinColor = 0; //Black
    } else if(genotype.getMomsGenes().getSkinColor().isAllele() || genotype.getDadsGenes().getSkinColor().isAllele()) {
        skinColor = 1; //Brown
    } else {
        skinColor = 2; //White
    }
}
Phenotype::Phenotype() {
    Phenotype(Genotype());
}
bool Phenotype::isFemale() {
    return female;
}
int Phenotype::getHairColor() {
    return hairColor;
}
int Phenotype::getBloodType() {
    return bloodType;
}
int Phenotype::getHeight() {
    return height;
}
bool Phenotype::isHearing() {
    return hearing;
}
bool Phenotype::isColorVision() {
    return colorVision;
}
int Phenotype::getQualityOfVision() {
    return qualityOfVision;
}
int Phenotype::getEyeColor() {
    return eyeColor;
}
int Phenotype::getSkinColor() {
    return skinColor;
}