#include "zbior_punktow.h"

Pi::Pi(int k){
    n = k;

    tab = new Point [n];
    cout<<"Utworzono nowaa przestrzen"<<endl;




}

void Pi::fill(){
    for( int i=0; i<n ; i++ ){
        Point* my_point = new  Point;
        cout<<"Podaj punkt nr "<<i+1<<endl;
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


void Pi::newPoint(){
    Point *pt = new Point;
    pt->addPoint();
    Point* tab2 = new Point [n+1];
    Point* p = tab2+0;
    p->insert(tab->extract(tab+0, 1) ,tab->extract(tab+0, 2) );
    for(int i=1 ; i<n ; i++){
        Point* p = tab2+i;
        p->insert(tab->extract(tab+i, 1) ,tab->extract(tab+i, 2) );
    }

    tab2[n] = *pt;
    n = n+1;
    p = tab2;
    tab = tab2;

}

Pi Pi::operator +(const Pi& p){
    int k = 8;
    Pi dim(k);
    Point*pom = dim.tab;
    for( int i=0; i<k ; i++ ){
       pom->insert(0, 0);
       pom=pom+1;
    }


    pom = dim.tab;
    for( int i =0 ; i<k ; i++){
        pom->dodaj(pom, p.tab);
    }

    return dim;                               // zwracanie wyniku
}
