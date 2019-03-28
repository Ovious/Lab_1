#ifndef PUNKT_H
#define PUNKT_H
#include <string>
#include <cmath>
#include <iostream>

using namespace std;

class Point
{
private:
    int coord_X_;
    int coord_y_;

public:

    Point();
    void addPoint();
    int extract(Point* t, int k);
    void insert(int k, int l );
    int extract2(Point t, int k);

};

#endif // PUNKT_H
