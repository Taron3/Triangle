
#include <cmath>
#include "matrix3.hpp"

const double PI     = 3.1415926535897932;
const double RADIAN = 180 / PI;
const double DEGRE  = PI / 180;


Matrix3::Matrix3()
{
	identity();
}

Matrix3::Matrix3(const double m0_0, const double m0_1, const double m0_2,   
    			 const double m1_0, const double m1_1, const double m1_2,   
				 const double m2_0, const double m2_1, const double m2_2 )
{
	m_matrix[0] = m0_0; m_matrix[1] = m0_1; m_matrix[2] = m0_2;
	m_matrix[3] = m1_0; m_matrix[4] = m1_1; m_matrix[5] = m1_2;
	m_matrix[6] = m2_0; m_matrix[7] = m2_1; m_matrix[8] = m2_2;
}

void Matrix3::identity()
{
	m_matrix[0] = m_matrix[4] = m_matrix[8] = 1;
	m_matrix[1] = m_matrix[2] = m_matrix[3] = m_matrix[5] = m_matrix[6] = m_matrix[7] = 0;
}

const Matrix3& Matrix3::rotate(const double angle) 
{
    m_matrix[0] =  std::cos(angle * DEGRE);     
    m_matrix[1] =  std::sin(angle * DEGRE);     
    m_matrix[3] = -std::sin(angle * DEGRE);     
    m_matrix[4] =  std::cos(angle * DEGRE);   
    return *this;  
}

Vector3 Matrix3::operator*(const Vector3 &vec) const
{
	return Vector3(m_matrix[0] * vec[0] + m_matrix[1] * vec[1] + m_matrix[2] + vec[2],
		   		   m_matrix[3] * vec[0] + m_matrix[4] * vec[1] + m_matrix[5] + vec[2],
				   m_matrix[6] * vec[0] + m_matrix[7] * vec[1] + m_matrix[8] + vec[2] );
}

double& Matrix3::operator[](const int index)	
{
    return m_matrix[index];    
}    

double Matrix3::operator[](const int index)	const
{
    return m_matrix[index];    
}    

