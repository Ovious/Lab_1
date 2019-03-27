#include "zbior_punktow.h"

Pi::Pi(){
    int n1;
    cout<<"Podaj liczbe punktow"<<endl;
    cin>>n1;
    n = n1;

    tab = new Point [n];

    for( int i=0; i<n ; i++ ){
        cout<<i<<endl;
        Point my_point;
        my_point.addPoint();
        tab[i] = my_point;
    }
}
