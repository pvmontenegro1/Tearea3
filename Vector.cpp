
#include<iostream>
#include<iomanip>
#include "Vector.h"
using namespace std;

Vector::Vector(int ca,int cb){
    a=ca; b=cb;
}


Vector::Vector(float cx, float cy)
{    x=cx; y=cy;
}



void Vector::DefineA(int ca){
    a =ca;
}
void Vector::DefineB(int cb){
    b =cb;
}

void Vector::DefineX(float cx)
{    x=cx;
}

void Vector::DefineY(float cy)
{    y=cy;
}

float Vector::DameX(void)
{    return x;
}

float Vector::DameY(void)
{    return y;
}

int Vector::DameA(void){
    return a;
}
int Vector::DameB(void){
    return b;
}


float Vector::operator * (Vector V)
{
    return (x*V.DameX() + y*V.DameY());
}

bool Vector::operator>= (Vector V) {
    return ((x * x + y * y) >= ( V.x * V.x + V.y * V.y))? true: false;
  }


bool Vector::operator <= (Vector V) {
    return ((x * x + y * y) <= ( V.x * V.x + V.y * V.y))? true: false;
  }

int Vector::operator ^ (Vector V){
    return ((a*a+b*b)^(V.a*V.a+V.b*V.b));
 }
