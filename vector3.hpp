class Vector3
{
private:
    double m_vector[3];
    
public:
    Vector3()
    {
        m_vector[0] = 0;    
        m_vector[1] = 0;    
        m_vector[2] = 0;    
    }

    Vector3(double x, double y, double z = 0)
    {
        m_vector[0] = x;    
        m_vector[1] = y;    
        m_vector[2] = z;    
    }

    double& operator[] (int index) ;
   // Vector3 operator* (Matrix3x3 &matrix) ;

};

double& Vector3::operator[] (int index) 
{
    return m_vector[index];    
}
/*
Vector3 Vector3::operator* (Matrix3x3 &matrix) 
{
    Vector3 tempVector(0, 0, 0);
    for(int i = 0; i < 3; ++i)
    {
        for(int j = 0; j < 3; ++j)
        {
            tempVector[i] += m_vector[j] * matrix[j][i] ;    
        }
    }
    return tempVector;
}*/
