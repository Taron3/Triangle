
#ifndef MATRIX3_HPP
#define MATRIX3_HPP

#include "vector3.hpp"

class Matrix3
{
public:
    Matrix3(); 
	Matrix3(const double m0_0, const double m0_1, const double m0_2,     
    		const double m1_0, const double m1_1, const double m1_2,     
			const double m2_0, const double m2_1, const double m2_2 );  
    
	void identity(); 
	const Matrix3& rotate(const double angle);     // rotate Z axis
	
	Vector3 operator*(const Vector3 &vec) const;  // Vector3' = Matrix3 * Vector3
	double& operator[](const int index);   
    double  operator[](const int index) const;   

private:
    double m_matrix[9];

};


#endif // MATRIX3_HPP
