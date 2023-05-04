#include "shape.h"
#include <iostream>
using namespace std;

class Triangle : public Shape {
public:
    void Fill();
    void Alloc();
    void Print();

    using Shape::Shape;
    Triangle(int h, char s, string c);

};
