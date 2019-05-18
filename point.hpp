

#ifndef POINT_HPP
#define POINT_HPP


#include <cmath>


class Point
{
private:
    double m_x;
    double m_y;

public:
    Point(const double x_val = 0, const double y_val = 0)
    : m_x(x_val)
    , m_y(y_val) 
    { } 
    
    void set_x( const double xx ); 
    void set_y( const double yy );
    
    double X() const ;
    double Y() const ;
    
    double length ( const Point &to_point) const ;
};


#endif // ! POINT_HPP
