#include "zbior_punktow.h"

using namespace std;

int main()
{
    int k=4;
    Pi dim_1(k);
    dim_1.fill();

    cout<<"Czas wydrukowac Twoja tablice"<<endl;
    cout<<dim_1;
    Point dist = dim_1.closest();
    cout<<"najblizsze punktu to:"<<endl;
    dim_1.pointOut(dist);
    cout<<endl<<"teraz dodamy punkt"<<endl;
    dim_1.newPoint();
    cout<<"Czas wydrukowac Twoja tablice"<<endl;
    cout<<dim_1;
    cout<<endl;

    int l=3;
    Pi dim_2(l);
    dim_2.fill();
    cout<<"Czas wydrukowac Twoja tablice"<<endl;
    cout<<dim_2;

    Pi dim_3(8);
    dim_3 = dim_1+dim_2;
    cout<<"Czas wydrukowac Twoja tablice"<<endl;
    cout<<dim_3;


    dim_1.rid();
    dim_2.rid();
    return 0;
}

