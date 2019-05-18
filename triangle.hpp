

#ifndef TRIANGLE_HPP
#define TRIANGLE_HPP


#include "point.hpp"
#include "help.hpp"
#include "myexception.hpp"


class Triangle
{
private:
    Point m_p1; // Bottom_Left
    Point m_p2; // Bottom_Right
    Point m_p3; // Top 

public:             
    // Points should be entered anti-clockwise
    Triangle(const Point &bottomLeft = Point(0, 0), const Point &bottomRight = Point(4, 0), const Point &top = Point(0, 3) ) 
    : m_p1(bottomLeft)
    , m_p2(bottomRight)  
    , m_p3(top)  
    {
        if( ! isValid() )
            throw InvalidTriangle();        
    }                   

    // Sides set & get     
    void set_a(const Point &p1, const Point &p3);  //side_a
    void set_b(const Point &p1, const Point &p2);  //side_b
    void set_c(const Point &p2, const Point &p3);  //side_c
    double get_a() const ;  //side a
    double get_b() const ;  //side b
    double get_c() const ;  //side c
    
	// Angles get     
    double get_angle_a() const ;  //angle opposite to side a
    double get_angle_b() const ;  //angle opposite to side b
    double get_angle_c() const ;  //angle opposite to side c
    
	// Points set & get     
    void set_p1(const double p1_x, const double p1_y);
    void set_p2(const double p2_x, const double p2_y);
    void set_p3(const double p3_x, const double p3_y);
    const Point& get_p1() const ;
    const Point& get_p2() const ;
    const Point& get_p3() const ;

    double size() const ;
    double area() const ;                    

    double height_a() const ;  
    double height_b() const ;
    double height_c() const ;
    
    void move_Bottom_Left(const Point &pos);    //Moves the Triangle, leaving the bottom-left corner at the given position.
                                                //The Triangle's size is unchanged
    
    void move_Bottom_Right(const Point &pos);   //Moves the Triangle, leaving the bottom-right corner at the given position.
                                                //The Triangle's size is unchanged
    
    void move_Top(const Point &pos);            //Moves the Triangle, leaving the top corner at the given position.
                                                //The Triangle's size is unchanged   
    
//    void rotate(const double angle);    //Rotation anti-clockwise of a triangle at a given angle 
    
    void normalized();
    bool isValid() const ;   
 };


#endif // ! TRIANGLE_HPP
