#include<iostream>
#include<iomanip>
using namespace std;


class Vector
{    float x;
     float y;
     int a;
     int b;

   public:
    Vector(int a,int b);
     Vector(float cx=0, float cy=0);

     void DefineX(float);
     void DefineY(float);
     void DefineA(int);
     void DefineB(int);
     float DameX(void);
     float DameY(void);
     int DameA(void);
     int DameB(void);

     float operator * (Vector);
     bool operator <= (Vector);
     bool operator >=(Vector);
     int operator ^ (Vector);
};
