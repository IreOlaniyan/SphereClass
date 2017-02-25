#include <iostream>
#include <cmath>
#include "header.h"
using namespace std;

const double PI = 3.142;

void Sphere::setRadius(double r){
    radius = r;
}
double Sphere::getRadius(){
   return radius;
}
double Sphere::calcSurfaceArea(){
   return 4*PI*pow(radius,2.0);
}
double Sphere::calcVolume(){
    return (4/3)*PI*pow(radius,3);
}
void Sphere::display(){
    cout << "When the radius is: " << getRadius() << endl;
    cout << "The surface area is: "<< calcSurfaceArea() << endl; 
    cout << "The volume is: " << calcVolume() << endl;
}