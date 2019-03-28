#include "zbior_punktow.h"

Pi::Pi(){
    int n1;
    cout<<"Podaj liczbe punktow"<<endl;
    cin>>n1;
    n = n1;

    tab = new Point [n];

    for( int i=0; i<n ; i++ ){
        cout<<i<<endl;
        Point* my_point;
        my_point->addPoint();
        if(i != 0){
        for(int j=0; j<i; j++){
            while(my_point->extract(my_point, 1) == tab->extract(tab+j, 1) && my_point->extract(my_point, 2) == tab->extract(tab+j, 2)){
                cout<<"Punkty nie moga sie powtarzac"<<endl;
                my_point->addPoint();
            }
            tab[i] = *my_point;
        }}else
        tab[i] = *my_point;
    }


}

ostream& operator<<(ostream& out, const Pi& dim){
    for( int i=0 ; i<dim.n ; i++){
        out<< dim.tab->extract(dim.tab+i, 1) << " " << dim.tab->extract(dim.tab+i, 2 ) <<endl;
    }
    return out;

}

void Pi::rid(){
    delete []tab;
}

Point Pi::closest(){
    int d1=sqrt(pow( tab->extract(tab, 1) - tab->extract(tab+1, 1), 2 ) + pow(tab->extract(tab+1, 2) - tab->extract(tab+1, 2), 2 ));
    int d2;
    Point index;
    index.insert(0, 1);
    for ( int  i=0 ; i<n ; i++){
        for( int j=i+1 ; j<n ; j++){
            d2 = sqrt(pow( tab->extract(tab+i, 1) - tab->extract(tab+j, 1), 2 ) + pow(tab->extract(tab+i, 2) - tab->extract(tab+j, 2), 2 ));
            if(d2 < d1){
                index.insert(i, j);
            }
        }
    }
    return index;
}

void Pi::pointOut(Point k){
    cout<<tab->extract(tab+k.extract2(k,1), 1) <<" "<<tab->extract(tab+k.extract2(k,1), 2)<<endl;
    cout<<tab->extract(tab+k.extract2(k,2), 1) <<" "<<tab->extract(tab+k.extract2(k,2), 2)<<endl;
}
