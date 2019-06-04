

#include "help.hpp"
#include "Transform_matrix/matrix3.hpp"
#include "Transform_matrix/vector3.hpp"

const double PI     = 3.1415926535897932; 
const double RADIAN = 180 / PI;

double help::ang_c(const double aa, const double bb, const double cc) 
{
	return RADIAN * acos( (aa*aa + bb*bb - cc*cc) / (2*aa*bb) );
}

double help::ang_a(const double bb, const double cc, const double aa)
{
	return RADIAN * acos( (bb*bb + cc*cc - aa*aa) / (2*bb*cc) );
}

double help::ang_b(const double aa, const double cc, const double bb)
{
	return RADIAN * acos( (aa*aa + cc*cc - bb*bb) / (2*aa*cc) );
}

void help::rotatePoint(Point &point, const double angle)    
{
	Vector3 vector3(point.X(), point.Y(), 0);
	Matrix3 rotationMatrix;
	rotationMatrix.rotate(angle);
	vector3 = rotationMatrix * vector3;
	point.set_x(vector3[0] ); 
	point.set_y(vector3[1] );            
}
