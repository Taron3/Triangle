

#include "help.hpp"
// #include "vector3.hpp"
// #include "transformmatrix.hpp"


const double PI     = 3.1415926535897932; 
const double RADIAN = 180 / PI;
const double DEGRE  = PI / 180;


// Calculate angles by three sides
double help::ang_c(const double aa, const double bb, const double cc)  //The cosine theorem
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

/*
//anti-clockwise rotation of the point
void help::rotatePoint( Point &point, const double angle)    
{
	Vector3 vector(point.X(), point.Y() );
	Matrix3x3 transforMatrix;
	vector = transformMatrix.rotationMatrix(DEGRE * angle) * vector;
	point.set_x(vector[0] ); 
	point.set_y(vector[1] );            
}
*/
