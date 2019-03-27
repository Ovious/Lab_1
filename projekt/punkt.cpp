#include "punkt.h"

Point::Point(){
    coord_X_ = 0;
    coord_y_ = 0;
}
void Point::addPoint(){
    int x;
    int y;
    cout<<"Podaj x"<<endl;
    cin>>x;
    cout<<"Podaj y"<<endl;
    cin>>y;
    coord_X_ = x;
    coord_y_ = y;
}
