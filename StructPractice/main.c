//
//  main.c
//  StructPractice
//
//  Created by Alex on 2015-06-09.
//  Copyright (c) 2015 Alex. All rights reserved.
//

#include <stdio.h>

typedef struct {
    float l;
    float w;
    float h;
} Box;

Box buildBox();
float volume(Box myBox);
Box boxMaker(float length, float width, float height);
float boxComparer(Box box1, Box box2);
Box buildAnotherBox();

int main(int argc, const char * argv[]) {
    
    Box box3 = buildBox();
    Box box4 = buildAnotherBox();
    
    printf("%f \n",volume(box3));
    boxMaker(box3.l, box3.w, box3.h);
    float boxRatio = boxComparer(box4, box3);
    printf("%f \n", boxRatio);
}

Box buildBox() {
    Box box;
    box.l = 10;
    box.w = 11;
    box.h = 12;
    return box;
}

Box buildAnotherBox() {
    Box box;
    box.l = 20;
    box.w = 22;
    box.h = 24;
    return box;
}

float volume(Box box) {
    return box.l * box.w * box.h;
}

Box boxMaker(float length, float width, float height) {
    Box box;
    box.l = length;
    box.w = width;
    box.h = height;
    return box;
}

float boxComparer(Box box1, Box box2) {
    float box1Volume = volume(box1);
    float box2Volume = volume(box2);
    
    return box1Volume / box2Volume;
}
