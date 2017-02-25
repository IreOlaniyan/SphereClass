#ifndef HEADER_H
#define HEADER_H

class Sphere{
    
    private:
        double radius; 

    public:
        void setRadius(double);
        double getRadius();
        double calcSurfaceArea();
        double calcVolume();
        void display();
};

#endif