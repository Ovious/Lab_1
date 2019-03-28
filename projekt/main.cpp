#include "zbior_punktow.h"

using namespace std;

int main()
{
    Pi dim_1;

    cout<<"Czas wydrukowac Twoja tablice"<<endl;
    cout<<dim_1;
    Point dist = dim_1.closest();
    cout<<"najblizsze punktu to:"<<endl;
    dim_1.pointOut(dist);
    cout<<endl<<"teraz dodamy punkt"<<endl;
    dim_1.newPoint();
    cout<<"Czas wydrukowac Twoja tablice"<<endl;
    cout<<dim_1;
    dim_1.rid();
    return 0;
}

