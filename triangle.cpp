

#include "triangle.hpp"

void Triangle::set_a(const Point &p1, const Point &p3)  
{
	m_p1 = p1;
	m_p3 = p3;
}

void Triangle::set_b(const Point &p1, const Point &p2) 
{
	m_p1 = p1;
	m_p2 = p2;
}

void Triangle::set_c(const Point &p2, const Point &p3)  
{
	m_p1 = p2;
	m_p3 = p3;
}

double Triangle::get_a() const {  return m_p1.length(m_p3);  }
double Triangle::get_b() const {  return m_p1.length(m_p2);  }
double Triangle::get_c() const {  return m_p2.length(m_p3);  }

double Triangle::get_angle_a() const {  return help::ang_a(get_b(), get_c(), get_a() ); } 
double Triangle::get_angle_b() const {  return help::ang_b(get_a(), get_c(), get_b() ); } 
double Triangle::get_angle_c() const {  return help::ang_c(get_a(), get_b(), get_c() ); } 

// Point set & get  
void Triangle::set_p1(const double p1_x, const double p1_y)
{
	m_p1.set_x(p1_x);
	m_p1.set_y(p1_y);
}

void Triangle::set_p2(const double p2_x, const double p2_y)
{
	m_p2.set_x(p2_x);
	m_p2.set_y(p2_y);
}

void Triangle::set_p3(const double p3_x, const double p3_y)
{
	m_p3.set_x(p3_x);
	m_p3.set_y(p3_y);
}

const Point& Triangle::get_p1() const { return m_p1; }
const Point& Triangle::get_p2() const { return m_p2; }
const Point& Triangle::get_p3() const { return m_p3; }

double Triangle::size() const { return get_a() + get_b() + get_c(); }
double Triangle::area() const { return sqrt(size() / 2 * (size() / 2 - get_a() ) * (size() / 2 - get_b() ) * (size() / 2 - get_c() ) ); }

double Triangle::height_a() const { return area() / ( (1.0 / 2) * get_a() ); }
double Triangle::height_b() const { return area() / ( (1.0 / 2) * get_b() ); }
double Triangle::height_c() const { return area() / ( (1.0 / 2) * get_c() ); }


void Triangle::move_Bottom_Left(const Point &pos) 
{
	m_p2.set_x(m_p2.X() + (pos.X() - m_p1.X()) );            
	m_p3.set_x(m_p3.X() + (pos.X() - m_p1.X()) );
	m_p1.set_x(pos.X());
				
	m_p2.set_y(m_p2.Y() + (pos.Y() - m_p1.Y()) );            
	m_p3.set_y(m_p3.Y() + (pos.Y() - m_p1.Y()) );
	m_p1.set_y(pos.Y());            
}

void Triangle::move_Bottom_Right(const Point &pos) 
{
	m_p1.set_x(m_p1.X() + (pos.X() - m_p2.X()) );            
	m_p3.set_x(m_p3.X() + (pos.X() - m_p2.X()) );
	m_p2.set_x(pos.X());
				
	m_p2.set_y(m_p1.Y() + (pos.Y() - m_p2.Y()) );            
	m_p3.set_y(m_p3.Y() + (pos.Y() - m_p2.Y()) );
	m_p2.set_y(pos.Y());                     
}

void Triangle::move_Top(const Point &pos)       
{           
	m_p1.set_x(m_p1.X() + (pos.X() - m_p3.X()) );            
	m_p2.set_x(m_p2.X() + (pos.X() - m_p3.X()) );
	m_p3.set_x(pos.X());
				
	m_p1.set_y(m_p1.Y() + (pos.Y() - m_p3.Y()) );            
	m_p2.set_y(m_p2.Y() + (pos.Y() - m_p3.Y()) );
	m_p3.set_y(pos.Y());            
}

void Triangle::rotate(const double angle)     
{
	help::rotatePoint(m_p1, angle);
	help::rotatePoint(m_p2, angle);
	help::rotatePoint(m_p3, angle);
} 

void Triangle::normalized()
{       
	set_p1(0, 0);
	set_p2(4, 0);
	set_p3(0, 3);
}

bool Triangle::isValid() const 
{
	return ( ( ((get_a() + get_b()) > get_c()) 
			&& ((get_b() + get_c()) > get_a()) 
			&& ((get_c() + get_a()) > get_b()) )

			&& ( (get_a() > 0) && (get_b() > 0) && (get_c() > 0) )  
		   
			&& (m_p3.Y() > m_p2.Y() && m_p3.Y() > m_p1.Y() ) ) ;   
}
    
