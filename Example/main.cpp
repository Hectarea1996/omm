

#include "omm.h"
//#include "figura.h"
#include <iostream>


template<typename T>
struct inf{
    using type = inf<inf<T>>::type;
};


using preinf = inf<int>;

template<typename T>
struct Print{};

int main(){

    Print<preinf::type>::type;

//    Elipse e;
//    Circulo c;
//    Rectangulo r;
//    Triangulo t;
//
//    Figura& f1 = c;
//    Figura& f2 = r;
//    Figura& f3 = t;
//    Figura& f4 = e;
//
//    Perro p;
//    Gato g;
//
//    Animal& a1 = p;
//    Animal& a2 = g;
//
//    intersect(&a1,1000,f2,a1,&f2,3.0,a1);
//    intersect(&a2,500,f1,a2,&f3,5.0,a1);
//    intersect(&a2,500,f4,a2,&f3,5.0,a1);
//    intersect(&a1,250,f3,a1,&f2,7.0,a2);


    return 0;

}
