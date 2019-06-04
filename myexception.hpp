

#ifndef MYEXCEPTION_HPP
#define MYEXCEPTION_HPP


#include <stdexcept>


class InvalidTriangle : public std::runtime_error
{
public:
    InvalidTriangle() 
    : runtime_error("Triangle is invalid") 
    { } 
};


#endif // MYEXCEPTION_HPP
