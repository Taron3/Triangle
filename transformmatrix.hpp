

#include "vector3.hpp"


class Matrix3x3
{
private:
    double m_matrix[3][3];

public:
    Matrix3x3(); 
    
    double& operator[] (const int index) const ;   
    const Matrix3x3& rotationMatrix(const double angle) ;   // Anticlockwise rotate with radians
    const Vector3&   operator* (const Vector3 &vector ) const ;
    friend const Matrix3x3& operator* (const Matrix3x3 &m1, const Matrix3x3 &m2) const ;
};





Matrix3x3::Matrix3x3()
{
    for(int i = 0; i < 3; ++i ) 
    {
        for(int i = 0; i < 3; ++i)
        {
            if(i == j)
            {
                m_matrix[i][j] = 1;      
            } 
            else 
            {
                m_matrix[i][j] = 0;    
            }
        }
    }
}    

double& Matrix3x3::operator[] (const int index) const 
{
    return m_matrix[index];    
}    

// Anticlockwise rotate with radians
const Matrix3x3& Matrix3x3::rotationMatrix(const double angle) 
{
    Matrix3x3 rotationMatrix;
    rotationMatrix[0][0] = std::cos(angle);     
    rotationMatrix[0][1] = -std::sin(angle);     
    rotationMatrix[1][0] = std::sin(angle);     
    rotationMatrix[1][1] = std::cos(angle);   
    return rotationMatrix;  
}

const Vector3& Matrix3x3::operator* (const Vector3 &vector ) const 
{
    Vector3 tempVector;
    for(int i = 0; i < 3; ++i)
    {
        for(int i = 0; i < 3; ++i)
        {
            tempVector[i] += m_matrix[i][j] * vector[j];      
        }
    }
    return tempVector;
}
    
const Matrix3x3& Matrix3x3::operator* (const Matrix3x3 &m1, const Matrix3x3 &m2) const 
{
    Matrix3x3 tempMatrix;
    for(int i = 0; i < 3; ++i;)
    {
        for(int j = 0; j < 3; ++j)
        {
            tempMatrix[i][j] = 0;
            for(int k = 0; k < 3; ++k)
            {
                tempMatrix[i][j] += m1[i][k] * m2[k][j];    
            }
        }
    }
}




