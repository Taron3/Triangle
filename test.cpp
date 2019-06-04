

#include <iostream>

#include "triangle.hpp"
#include "point.hpp"

int main()
{

    Point p1(-8, -6);
    Point p2(-4, -4);
    Point p3(-8, -1);
    
    try
    {
        Triangle t(p1,p2,p3);
        t.rotate(45);

        std::cout << "p1 = " << t.get_p1().X() << " " << t.get_p1().Y() << "\n" ;
        std::cout << "p2 = " << t.get_p2().X() << " " << t.get_p2().Y() << "\n" ;
        std::cout << "p3 = " << t.get_p3().X() << " " << t.get_p3().Y() << "\n" ;
         
    }
    catch(InvalidTriangle &e)
        {
            std::cout << "e.what()  " <<  e.what() ;
        }
    
    return 0;
}



