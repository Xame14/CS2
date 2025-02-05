#include <iostream>
using namespace std;


class Rectangle{
    private:    //Data members: private
    
    float width;
    float length;
  
    public:     // Methods: public
    
    Rectangle(float, float);    //constructor
    void print();           //print lenght and width
    float getLength();      // gets length
    float getWidth();       // gets Width
    float getArea();        // gets Area
    
    
};
