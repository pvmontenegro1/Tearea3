/*Universidad de las Fuerzas Armadas ESPE
Programa para la implementacion de sobrecarag de operadores ^ y <=
Autores: Luis Veloz, Pamela Montenegro
Fecha de creacion:14/05/2022
Fecha de modificacion:15/05/2022
Version: 1.3
Estructura de Datos
Nrc:4683
*/


#include<iostream>
#include<iomanip>
#include "Vector.h"
using namespace std;

int main (void)

{

        Vector V0{1,5};
        Vector V5{3,2};

        int m = (V0^V5);
        cout<<"m="<<m<<endl;

    cout<<"-------------------------\n"<<endl;

     Vector V1(13,2),V2(5,5);
     float p;

     p =(V1*V2);

     cout << "P = " << p<< endl;

     cout<<"-------------------------\n"<<endl;


    if ( V1 <= V2 ){
    cout << "v1 menor o igual que v2" <<  endl;
    }
    else if(V1 >= V2){
    cout << "v1 mayor o igual que v2"<<endl;
    }else{
    cout << "v1 igual a v2"<<endl;
    }

}
