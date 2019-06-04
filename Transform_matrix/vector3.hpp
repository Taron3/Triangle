
#ifndef VECTOR3_HPP
#define VECTOR3_HPP

class Vector3
{
public:
    Vector3(); 
    Vector3(double x, double y, double z);

    double& operator[] (const int index);
    double  operator[] (const int index) const;

private:
    double m_x;
	double m_y;
	double m_z;

};

#endif // VECTOR3_HPP
