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

int Point::extract(Point *t, int k){
    if(k == 1){
        return t->coord_X_;

    }else{
        return t->coord_y_;
    }

}

int Point::extract2(Point t, int k){
    if(k == 1){
        return t.coord_X_;

    }else{
        return t.coord_y_;
    }

}

void Point::insert(int k, int l){
    coord_X_=k;
    coord_y_=l;

}
