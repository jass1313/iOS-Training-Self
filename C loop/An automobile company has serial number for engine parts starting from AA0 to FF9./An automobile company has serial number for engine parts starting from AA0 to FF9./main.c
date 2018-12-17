//
//  main.c
//  An automobile company has serial number for engine parts starting from AA0 to FF9.
//
//  Created by KiwiTech on 17/12/18.
//  Copyright © 2018 KiwiTech. All rights reserved.
//

#include <stdio.h>
struct engine{
    char serialNumber[3];
    int Yearofmanufacture;
    char material[10];
    int quantity;
    char manufactured[10];
};

void retrieveinformation(struct engine eng[0]);
int main() {
    
    struct engine eng[6] = {"AA1",2006,"lights",5,"honda",
                            "AA2",2008,"bumper",10,"maruti",
                            "AA3",2012,"tyre",20,"maruti",
                            "AA4",2016,"seats",10,"honda",
                            "AA5",2017,"glass",2,"ford",
                            "AA6",2018,"door",3,"hyundai"
        
    };
    
    retrieveinformation(eng);
    
}
void retrieveinformation(struct engine eng[0]){
    int i;
    
    for (i=0; i<6; i++) {
        if(eng[i].serialNumber=='AA5'){
            
        }
    }
}
