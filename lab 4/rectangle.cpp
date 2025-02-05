#include "rectangle.h"

Rectangle::Rectangle(float l, float w){
    width = w;
    length = l;
}

void Rectangle::print(){
    cout<<"Length is: " << length << endl
        <<"Width is: " << width << endl;
}

float Rectangle::getLength(){
    return length;
}

float Rectangle::getWidth(){
    return width;
}

float Rectangle::getArea(){
    float area = 0;
    area = length * width;
    return area;
}
