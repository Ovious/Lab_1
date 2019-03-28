#ifndef ZBIOR_PUNKTOW_H
#define ZBIOR_PUNKTOW_H
#include "punkt.h"

using namespace std;

class Pi
{
private:
    int n;
    Point* tab;

public:
    Pi();
    friend ostream & operator << (ostream&out, const Pi &dim);
    void rid();
    Point closest();
    void pointOut(Point k); // drukowanie punktu
    void newPoint();        // dodadnie nowego punktu do tablicy

};

#endif // ZBIOR_PUNKTOW_H
