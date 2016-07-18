//
//  Species.cpp
//  Evolution Simulator
//
//  Created by Brett Duncan on 7/1/16.
//  Copyright © 2016 Brett James Duncan. All rights reserved.
//

#include "Species.hpp"


Species::Species(bool var) {
    genotype = Genotype(var);
    phenotype = Phenotype(genotype);
    age = 0;
    offSpring = 0;
    generation = 0;
}


Species::Species() {
    Species(true);
}


Species::Species(InheritedGenes one, InheritedGenes two) {
    genotype = Genotype(one, two);
    phenotype = Phenotype(genotype);
    age = 0;
    offSpring = 0;
    generation = 0;
}


Species::Species(Species mom, Species dad) {
    
    Gender momGender, dadGender;
    HairColor momHairColor, dadHairColor;
    BloodType momBloodType, dadBloodType;
    Height momHeight, dadHeight;
    Hearing momHearing, dadHearing;
    
    ColorVision momColorVision, dadColorVision;
    QualityOfVision momQualityOfVision, dadQualityOfVision;
    EyeColor momEyeColor, dadEyeColor;
    SkinColor momSkinColor, dadSkinColor;
    
    if(nextInt(2) == 1) {
        momGender = mom.getGenotype().getMomsGenes().getGender();
    } else {
        momGender = mom.getGenotype().getDadsGenes().getGender();
    }
    if(nextInt(2) == 1) {
        momHairColor = mom.getGenotype().getMomsGenes().getHairColor();
    } else {
        momHairColor = mom.getGenotype().getDadsGenes().getHairColor();
    }
    if(nextInt(2) == 1) {
        momBloodType = mom.getGenotype().getMomsGenes().getBloodType();
    } else {
        momBloodType = mom.getGenotype().getDadsGenes().getBloodType();
    }
    if(nextInt(2) == 1) {
        momHeight = mom.getGenotype().getMomsGenes().getHeight();
    } else {
        momHeight = mom.getGenotype().getDadsGenes().getHeight();
    }
    if(nextInt(2) == 1) {
        momHearing = mom.getGenotype().getMomsGenes().getHearing();
    } else {
        momHearing = mom.getGenotype().getDadsGenes().getHearing();
    }
    if(nextInt(2) == 1) {
        momColorVision = mom.getGenotype().getMomsGenes().getColorVision();
    } else {
        momColorVision = mom.getGenotype().getDadsGenes().getColorVision();
    }
    if(nextInt(2) == 1) {
        momQualityOfVision = mom.getGenotype().getMomsGenes().getQualityOfVision();
    } else {
        momQualityOfVision = mom.getGenotype().getDadsGenes().getQualityOfVision();
    }
    if(nextInt(2) == 1) {
        momEyeColor = mom.getGenotype().getMomsGenes().getEyeColor();
    } else {
        momEyeColor = mom.getGenotype().getDadsGenes().getEyeColor();
    }
    if(nextInt(2) == 1) {
        momSkinColor = mom.getGenotype().getMomsGenes().getSkinColor();
    } else {
        momSkinColor = mom.getGenotype().getDadsGenes().getSkinColor();
    }
    
    
    if(nextInt(2) == 1) {
        dadGender = dad.getGenotype().getMomsGenes().getGender();
    } else {
        dadGender = dad.getGenotype().getDadsGenes().getGender();
    }
    if(nextInt(2) == 1) {
        dadHairColor = dad.getGenotype().getMomsGenes().getHairColor();
    } else {
        dadHairColor = dad.getGenotype().getDadsGenes().getHairColor();
    }
    if(nextInt(2) == 1) {
        dadBloodType = dad.getGenotype().getMomsGenes().getBloodType();
    } else {
        dadBloodType = dad.getGenotype().getDadsGenes().getBloodType();
    }
    if(nextInt(2) == 1) {
        dadHeight = dad.getGenotype().getMomsGenes().getHeight();
    } else {
        dadHeight = dad.getGenotype().getDadsGenes().getHeight();
    }
    if(nextInt(2) == 1) {
        dadHearing = dad.getGenotype().getMomsGenes().getHearing();
    } else {
        dadHearing = dad.getGenotype().getDadsGenes().getHearing();
    }
    if(nextInt(2) == 1) {
        dadColorVision = dad.getGenotype().getMomsGenes().getColorVision();
    } else {
        dadColorVision = dad.getGenotype().getDadsGenes().getColorVision();
    }
    if(nextInt(2) == 1) {
        dadQualityOfVision = dad.getGenotype().getMomsGenes().getQualityOfVision();
    } else {
        dadQualityOfVision = dad.getGenotype().getDadsGenes().getQualityOfVision();
    }
    if(nextInt(2) == 1) {
        dadEyeColor = dad.getGenotype().getMomsGenes().getEyeColor();
    } else {
        dadEyeColor = dad.getGenotype().getDadsGenes().getEyeColor();
    }
    if(nextInt(2) == 1) {
        dadSkinColor = dad.getGenotype().getMomsGenes().getSkinColor();
    } else {
        dadSkinColor = dad.getGenotype().getDadsGenes().getSkinColor();
    }
    
    InheritedGenes momsGenes = InheritedGenes(momBloodType,momColorVision,momEyeColor,momGender,momHairColor,momHearing,momHeight,momQualityOfVision,momSkinColor);
    InheritedGenes dadsGenes = InheritedGenes(dadBloodType,dadColorVision,momEyeColor,momGender,momHairColor,momHearing,momHeight,momQualityOfVision,momSkinColor);
    genotype = Genotype(momsGenes,dadsGenes);
    
    age = 0;
    offSpring = 0;
    generation = 0;
}

Genotype Species::getGenotype() {
    return genotype;
}
Phenotype Species::getPhenotype() {
    return phenotype;
}
int Species::getAge() {
    return age;
}
int Species::getOffSpring() {
    return offSpring;
}
int Species::getGeneration() {
    return generation;
}
bool Species::isFemale() {
    return genotype.getDadsGenes().getGender().isAllele();
}
