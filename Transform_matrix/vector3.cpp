
#include "vector3.hpp"

Vector3::Vector3() 
	: m_x(0)
	, m_y(0)
	, m_z(0)
	{}

Vector3::Vector3(double x, double y, double z)
	: m_x(x)
	, m_y(y)
	, m_z(z)
	{}


double& Vector3::operator[] (const int index) 
{
    return (&m_x)[index];    
}

double Vector3::operator[] (const int index) const
{
    return (&m_x)[index];    
}
