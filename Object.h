#ifndef _OBJECT_H
#define _OBJECT_H

#include "Ray.h"
#include "Vect.h"
#include "Color.h"
// top of the heirarcy were all objects in our scene becomes sub class to this class
class Object {
    public:

    Object ();

    // some method functions
    Color getObjectColor () { return Color (0.0, 0.0, 0.0, 0.0); }

    double findIntersection(Ray ray) {
        return 0;
    }
};

Object::Object () {}
#endif