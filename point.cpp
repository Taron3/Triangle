

#include "point.hpp"


void Point::set_x ( const double xx ) { m_x = xx; }
void Point::set_y ( const double yy ) { m_y = yy; }

double Point::X() const { return m_x; }
double Point::Y() const { return m_y; }

double Point::length(const Point &to_point) const 
    {
        double Len_x = std::abs(m_x) - std::abs(to_point.m_x);
        double Len_y = std::abs(m_y) - std::abs(to_point.m_y);
        return sqrt(std::abs(Len_x) * std::abs(Len_x) + std::abs(Len_y) * std::abs(Len_y) ); 
    }
