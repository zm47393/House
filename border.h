#include "rectangle.h"
#include <iostream>
using namespace std;

class Border : public Rectangle {
public:
    void Fill();
    void Alloc();
    void Print();

    using Rectangle::Rectangle;
    Border(int h, int w, char s, string c);
    Border(int h, char s, string c);

};