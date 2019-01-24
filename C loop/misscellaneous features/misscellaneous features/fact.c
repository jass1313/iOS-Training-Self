//
//  fact.c
//  misscellaneous features
//
//  Created by KiwiTech on 24/01/19.
//  Copyright © 2019 KiwiTech. All rights reserved.
//

#include "fact.h"
#define MALE 0
#define FEMALE 1

#define MINOR 0
#define MAJOR 1

#define MOTOR 0
#define HEALTH 1
#define TRAVEL 2

#define OneYear 0
#define TwoYear 1
struct insurance {
    unsigned gender:1;
    unsigned holder:1;
    unsigned policyName:2;
    unsigned policyDuration:1;
};

int main(){
    struct insurance holder[2];
    
    holder[0].gender= MALE;
    holder[0].holder= MINOR;
    holder[0].policyName= HEALTH;
    holder[0].policyDuration= OneYear;
    holder[1].gender= FEMALE;
    holder[1].holder= MAJOR;
    holder[1].policyName= TRAVEL;
    holder[1].policyDuration= TwoYear;
    
    for (int i=0; i<2; i++) {
        printf("Gender: %d\n",holder[i].gender);
        printf("HolderType: %d\n",holder[i].holder);
        printf("Policy Name: %d\n",holder[i].policyName);
        printf("Duration: %d\n",holder[i].policyDuration);
        printf("\n");
        }
}
