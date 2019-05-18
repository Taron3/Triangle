

#ifndef HELP_HPP 
#define HELP_HPP


#include <cmath>

#include "point.hpp"


namespace help
{        
// Calculate angles by three sides
double ang_c(const double aa, const double bb, const double cc);  //The cosine theorem
double ang_a(const double bb, const double cc, const double aa);
double ang_b(const double aa, const double cc, const double bb);

// void rotatePoint( Point &point, const double angle); //anti-clockwise rotation of the point

};


#endif // ! HELP_HPP
